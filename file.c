#include <stdio.h>

main() {
   int ch;
   FILE *fp;

   fp = fopen("readfile.c", "r");
   if(fp==NULL)
      printf("File note present");
   else
      printf("File is opend");
   while((ch=fgetc(fp))!=EOF)
   {
      printf("%c",ch);
   }
   fclose(fp);
}
