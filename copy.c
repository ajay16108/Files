#include<stdio.h>
int main()
{
 char a;
 printf("Enter the value");
 scanf("%d",&a);
 FILE *fp;
 fp=fopen("ajay4.txt","w+");
 fputs(a,fp);
}
 
