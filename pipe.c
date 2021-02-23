#include <stdio.h> 
#include <unistd.h>  
char*  msg1 = "hello, world #1"; 
char* msg2 = "hello, world #2"; 
char* msg3 = "hello, world #3"; 
  
int main() 
{ 
    char inbuf[3]; 
    int p[2], i; 
  
    if (pipe(p) < 0) 
        exit(1); 
  
    /* continued */
    /* write pipe */
  
    write(p[1], msg1, 20); 
    write(p[1], msg2, 20); 
    write(p[1], msg3, 20); 
  
    for (i = 0; i < 3; i++) { 
        /* read pipe */
        read(p[0], inbuf, 20); 
        printf("% s\n", inbuf); 
    } 
    return 0; 
} 
