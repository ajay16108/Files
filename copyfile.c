#include<stdio.h>
int main()
{

  FILE *fp,*fp2;
  fp=fopen("readfile.c","r");
  fp2=fopen("ajay.txt","w");
  while(ch=fgetc(fp)!=EOF)
  {
    fputc(ch,fp2);
    
  }
  printf("Coped");
}

