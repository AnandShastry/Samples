#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

pthread_mutex_t locking=PTHREAD_MUTEX_INITIALIZER;
void *function(char *ptr)
{
int i;
pthread_mutex_lock(&locking);
	for(i=0;i<20;i++)
	{
		printf("ptr::i=%s::%d\n",ptr,i);
	}
pthread_mutex_unlock(&locking);
exit(EXIT_SUCCESS);
}

main()
{
pthread_t tid1, tid2;
pthread_create(&tid1,NULL,&function,"tid1");
pthread_create(&tid2,NULL,&function,"tid2");
pthread_join(tid1,NULL);
pthread_join(tid2,NULL);

}

