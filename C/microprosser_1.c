#include "main.h"

void Delay_Milsec(uint32_t time){
    for(; time>0; time--){
        for(uint32_t i=0; i<7200; i++); // 약 1ms 지연 (실제 딜레이 시간은 보드나 시스템 환경에 따라 다를 수 있음)
    }
}

int main(void) {
    RCC->APB2ENR |= 0x4;
    RCC->APB2ENR |= 0x8;  // Port A&B 승인


    GPIOA->CRH &= ~0x44000;  // PA12 0으로 초기화
    GPIOB->CRH &= ~0x44000;  // PA13 0으로 초기화

    GPIOA->CRH |= 0x22000;
    GPIOB->CRH |= 0x22000;

    while (1) {
    	GPIOA->BSRR |= 0x01<<12;
		Delay_Milsec(500);
    	GPIOA->BSRR |= 0x01<<28;
		Delay_Milsec(500);
    	GPIOA->BSRR |= 0x01<<11;
		Delay_Milsec(500);
    	GPIOA->BSRR |= 0x01<<27;
		Delay_Milsec(500);
    	GPIOB->BSRR |= 0x01<<12;
		Delay_Milsec(500);
    	GPIOB->BSRR |= 0x01<<28;
		Delay_Milsec(500);
    	GPIOB->BSRR |= 0x01<<11;
		Delay_Milsec(500);
    	GPIOB->BSRR |= 0x01<<27;
		Delay_Milsec(500);
    }

}
