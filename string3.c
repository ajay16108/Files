#include <stdio.h>
int main()
{
    char sentence[100];
    int i;
    printf("Enter any string: ");

    scanf("%[^\n]s", sentence);

    char *sPtr,*sPtre;
    sPtr = sentence;
    sPtre = sentence;
    int length = 0;
    int length1 = 0;

    printf("Original string = %s\n", sentence);

    while (*sPtre !='.') {
       ++length;
        ++sPtre;
    }
    char *a=sPtre;
    sPtre--;
    for (i =length; i >=0; --i) {
        printf("%c", *(sPtre));
        --sPtre;
        
    }
    printf("%c",*a);

    while (*(a+1)!='\0') {
       ++length1;
        ++a;
    }
    length1--;
    
    
    for (i =length1; i >=0; --i) {
        printf("%c", *(a));
        --a;
    }
    return 0;
}
