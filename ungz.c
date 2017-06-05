#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

void main(){
	int i,s;
	pid_t pid;
	char name[15];
	int cnt=0;
	while(gets(name)!=NULL)
	{
		printf("%s\n", name);
		cnt++;
		pid=fork();
		if(pid==0)
			execl("/bin/gzip", "ungz","-dv", name, NULL);
	}
	for(i=0; i< cnt;i++)
		wait(&s);
	
	printf("end\n");
	
}
