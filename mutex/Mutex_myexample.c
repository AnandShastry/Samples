#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

void *function1()
{

printf("i'm in thread1 finction\n");

}
void * function2()
{
printf("i'm thread2 finction\n");

}

main()
{
pthread_t tid1, tid2;
pthread_create(&tid1,NULL,&function1,NULL);
pthread_create(&tid2,NULL,&function2,NULL);
pthread_join(tid1,NULL);
pthread_join(tid2,NULL);
exit(EXIT_SUCCESS);
}
