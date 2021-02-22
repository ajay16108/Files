#include<stdio.h>
int main()
{
 char a;
 printf("Enter the value");
 scanf("%c",&a);
 FILE *fp;
 fp=fopen("ajay5.txt","w+");
 fputc(a,fp);
}
 
