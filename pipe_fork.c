#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main() {
int fd[2];
int pid1;
int ppid;
int fd1[2];
int pid;

if(pipe(fd) == -1){
    perror("pipe");
    exit(1);
}
if(pipe(fd1) == -1){
    perror("pipe");
    exit(1);
}


if((pid = fork()) < 0){
    perror("fork");
    exit(1);
}

if(pid>0){
    int arr1[10];
    close(fd[0]);
    printf("We are in child procees\n");
    ppid=getpid();
    printf("%d\n",ppid);
    write(fd[1], "hello", 20);
    read(fd1[0],arr1,20);
   
    printf("%s",arr1);
    exit(0);

}
else{
    sleep(10);
    printf("We are in parent process\n");
    char arr[10];
    close(fd[1]);
    read(fd[0], arr, 10);
    pid1=getpid();
    printf("%d",pid1);
    write(fd1[1],"HELLO",10);
    printf("%s", arr);
    return 0;
}
}
