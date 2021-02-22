#include<stdio.h>
int main()
{
 int a;
 printf("Enter the value");
 scanf("%d",&a);
 FILE *fp;
 fp=fopen("ajay4.txt","w+");
 fputc(a,fp);
}
 
