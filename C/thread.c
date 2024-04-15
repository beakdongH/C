#include<stdio.h>
#include<pthread.h>

void *produce(void *arg);   //생성자 프로세스
void *consume(void *arg);   //소비자 프로세스

int sum = 10; //공유데이터
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER; // 뮤택스 초기화

int main(){

    printf("초기 합계 :%d\n",sum);

    pthread_t producer, consumer;

    pthread_create(&producer,NULL,produce,NULL); //생성자 스레드를 종료하는 함수
    pthread_create(&consumer,NULL,consume,NULL); //소비자 스레드를 종료하는 함수

    pthread_join(producer,NULL); //생성자 스레드를 종료하는 함수
    pthread_join(consumer,NULL); //소비자 스레드를 종료하는 함수

    printf("생성지, 소비자 스레드 실행 후 합계 :%d\n",sum);

    return 0;

}

void *produce(void *arg){
    for(int i=0;i<100000; i++){
        pthread_mutex_lock(&mutex);
        sum++;
        pthread_mutex_unlock(&mutex);
    }
    pthread_exit(NULL);


}//100000번 생성

void *consumer(void *arg){
    for(int i=0;i<100000;i++){
        pthread_mutex_lock(&mutex);
        sum--;
        pthread_mutex_unlock(&mutex);
    }
    pthread_exit(NULL);

}//100000번 소비함

