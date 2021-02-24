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
    ppid=getpid();
    write(fd[1], "hello", 20);
    sleep(10);
    read(fd1[0],arr1,20);
    printf("%d data is %s\n",ppid,arr1);
    exit(0);

}
else{
   
    char arr[10];
    close(fd[1]);
    pid1=getpid();
    sleep(10);
    read(fd[0], arr, 10);
    printf("%d data is %s\n",pid1,arr);
    write(fd1[1],"HELLO",10);
    return 0;
}
}
