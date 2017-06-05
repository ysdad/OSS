#include "csapp.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

void unix_error(char *msg)
{
	fprintf(stderr, "%s: %s\n", msg, strerror(errno));
	exit(0);
}

pid_t Fork(void)
{
	pid_t pid;

	if((pid=fork())<0)
		unix_error("Fork error");
	return pid;
}

int main(int argc, char *argv[], char *envp[])
{
	


}




