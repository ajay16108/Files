#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main() {
int fd[2];
int pid1;
int ppid;
int fd1[2];
int pid;
int a=10,b=20;

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
    int arr1=0;
    ppid=getpid();
    write(fd[1], &a,sizeof(int));
    sleep(5);
    read(fd1[0],&arr1,sizeof(int));
    printf("%d data is %d\n",ppid,arr1);
    exit(0);

}
else{
   
    int arr=0;
    close(fd[1]);
    pid1=getpid();
    sleep(5);
    read(fd[0], &arr, sizeof(int));
    printf("%d data is %d\n",pid1,arr);
    write(fd1[1],&b,sizeof(int));
    return 0;
}
}
