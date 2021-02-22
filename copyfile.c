#include<stdio.h>
int main()
{
  int ch;
  FILE *fp,*fp2;
  fp=fopen("readfile.c","r");
  fp2=fopen("ajay3.txt","w");
  while((ch=fgetc(fp))!=EOF)
  {
    fputc(ch,fp2);
    
  }
  printf("Coped");
}

