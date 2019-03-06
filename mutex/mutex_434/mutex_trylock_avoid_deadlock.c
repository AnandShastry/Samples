#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>


pthread_mutex_t trylock;
void * function(char * ptr)
{
int i;
int ret;
ret=pthread_mutex_trylock(&trylock);
	for(i=0;i<20;i++)
	{
		printf("ptr::i=%s::%d\n",ptr,i);
	}
pthread_mutex_unlock(&trylock);
return ret;
//exit(EXIT_SUCCESS);
}

int main()
{
void *res;
pthread_t tid1,tid2;
pthread_create(&tid1,NULL,&function,"tid1");
pthread_create(&tid2,NULL,&function,"tid2");
pthread_join(tid1,&res);
pthread_join(tid2,&res);
printf("all threads completed\n");
return 0;

}
