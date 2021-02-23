#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
  printf("hai to all");
  int pid;
  pid=fork();
  if(pid==0)
  {
  printf("In chaild");
  }
  else
  {
  printf("In parent");
  }
 }
