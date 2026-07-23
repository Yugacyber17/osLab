#include <stdio.h>
#include <unistd.h> 
#include <sys/wait.h> 
int main()
{
pid_t pid;
pid = fork();
if(pid < 0)
{
printf("Process creation failed\n");
return 1;
}
else if(pid == 0)
{
printf("\n--- Child Process Started ---\n");
printf("Child Process ID : %d\n", getpid());
sleep(3);
printf("Child Process Completed\n");
}
else
{
printf("\n--- Parent Process Started ---\n");
printf("Parent is waiting for child process...\n");
wait(NULL);
printf("Child process completed\n");
printf("Parent Process ID : %d\n", getpid());
printf("Parent Process Resumed\n");
}
return 0;
}