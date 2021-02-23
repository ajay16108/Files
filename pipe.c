#include <stdio.h> 
#include <unistd.h>  
char*  msg1 = "hello, world #1"; 
char* msg2 = "hello, world #2"; 
char* msg3 = "hello, world #3"; 
char* msg4 = "hello, world #4"; 
int a=10,b=40,c=30;

  
int main() 
{ 
  
    char inbuf[16]; 
    int p[2], i; 
  
    if (pipe(p) < 0) 
        exit(1); 
  
    /* continued */
    /* write pipe 
  
    write(p[1], msg1, 16); 
    write(p[1], msg2, 16); 
    write(p[1], msg3, 16);
   write(p[1], msg4, 16);*/
  write(p[1], a, (sizeof(int)));
    
  
    //for (i = 0; i < 1; i++) { 
        /* read pipe */
        read(p[0], inbuf, (sizeof(int))); 
        printf("% s\n", inbuf); 
    //} 
    return 0; 
} 
