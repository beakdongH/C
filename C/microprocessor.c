#include "main.h"


void delay(uint32_t time) {
   for (; time>0; time--) {
      for (uint32_t i=0; i<800; i++);
   }
}

void reset_led() {
  GPIOA->BSRR |= (0x1<<28)|(0x1<<27); //PA12, PA11 LED reset
  GPIOB->BSRR |= (0x1<<28)|(0x1<<27); //PA12, PA11 LED reset
}

void set(uint8_t cnt) {
   switch(cnt) {
      case 1 :
         GPIOA->BSRR |= 0x1 << 12;
         delay(500);
         GPIOA->BSRR |= 0x1 << 28;
         break;
      case 2 :
         GPIOA->BSRR |= 0x1 << 11;
         delay(500);
         GPIOA->BSRR |= 0x1 << 27;
         break;

      case 3 :
         GPIOB->BSRR |= 0x1 << 12;
         delay(500);
         GPIOB->BSRR |= 0x1 << 28;
         break;

      case 4 :
         GPIOB->BSRR |= 0x1 << 11;
         delay(500);
         GPIOB->BSRR |= 0x1 << 27;
         break;
   }
}

int main(void){
   uint8_t cnt=1;
   RCC->APB2ENR |= 0x1<<2;//port A 승인
   RCC->APB2ENR |= 0x1<<3;//port B 승인
   RCC->APB2ENR |= 0x1<<4;//port C 승인

   GPIOA->CRH &= ~0x44000;
   GPIOB->CRH &= ~0x44000;
   GPIOA->CRH |= 0x22000;
   GPIOB->CRH |= 0x22000;

   GPIOC -> CRH &= ~0x01<<2;// PC8 0으로 초기화
   GPIOC -> CRH |= 0x01<<3; // PC8 입력
   GPIOC -> ODR |= 0X01<<8; // PC8 풀업
   while(1){
      if(GPIOC -> IDR & 0x01<<8){//IDR 풀업 -> on
         reset_led();
      }
      else{
         set(cnt);
         cnt++;
         if(cnt==5){
            cnt=1;
         }
      }
   }
}



