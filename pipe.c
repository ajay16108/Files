#include <stdio.h> 
#include <unistd.h>  
char*  msg1 = "hello, world #1"; 
char* msg2 = "hello, world #2"; 
char* msg3 = "hello, world #3"; 
int a=10,b=20,c=30;
  
int main() 
{ 
  
    char inbuf[16]; 
    int p[2], i; 
  
    if (pipe(p) < 0) 
        exit(1); 
  
    /* continued */
    /* write pipe */
  
    write(p[1], msg1, 16); 
    write(p[1], msg2, 16); 
    write(p[1], msg3, 16);
    write(p[1], a, sizeof(int));
    write(p[1], b, sizeof(int));
    write(p[1], c, sizeof(int));
  
    for (i = 0; i < 6; i++) { 
        /* read pipe */
        read(p[0], inbuf, 16; 
        printf("% s\n", inbuf); 
    } 
    return 0; 
} 
