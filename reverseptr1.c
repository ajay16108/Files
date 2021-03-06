#include <stdio.h>
int main()
{
    char str[100];
   
    printf("Enter any string: ");
    scanf("%s", str);
    int n=strlen(str),j=0,i=0,k;
    char *Ptr[n];
    printf("Original string = %s\n", str);
    for(i=0;i<n;i++)
    {
        *(Ptr+i)=str[i];
        
    }
  
    for( i=0;i<n;i++)
    {
        if(*(Ptr+i) =='.')
        {
             j=i;
        }
    }
    k=j-1;
    for(i=k;i>=0;i--)
    {
        printf("%c",*(Ptr+i));
    }
    printf(".");
   for(i=n;i>=0;i--)
    {
        if(*(Ptr+i) =='.')
        exit(0);
    printf("%c",*(Ptr+i));
    }
}
