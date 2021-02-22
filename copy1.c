#include <stdio.h>
int main()
{
   int ch;
   FILE *fpw;
   fpw = fopen("newfile1.txt","w");

   if(fpw == NULL)
   {
      printf("Error");   
      exit(1);             
   }

   printf("Enter any character: ");
   scanf("%d",&ch);

   /* You can also use fputc(ch, fpw);*/
   fprintf(fpw,"%d",ch);
   fclose(fpw);

   return 0;
}
