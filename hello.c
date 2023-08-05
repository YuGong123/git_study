/*************************************************************************
    > File Name: hello.c
    > Author: zsy
    > Created Time: 2023年08月04日 星期五 15时31分55秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<pthread.h>

void sys_err(char *message){
	perror(message);
	exit(1);
}

int main(int argc, char* argv[])
{

	printf("Hello World!\n");
	return 0;
}
