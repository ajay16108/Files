
#include <stdio.h>
struct employee
{
    int empID;
    char empname[20];
    char company[20];
}obj1[10];
struct employee obj2[10];
int main()
{    int id;int flag;int i;
    FILE *fp;
    fp=fopen("employeedb","rb");
    printf("enter employee id to search");
    scanf("%d",&id);
    for(i=0;i<3;i++)
    {
       if(obj1[i].empID==id)
       {
           flag=1;
           break;
       }
    }
    if(flag==1)
    {
        printf("found");
        printf("%s %s",obj1[i].empname,obj1[i].company);
    }
    
   fclose(fp);
}

