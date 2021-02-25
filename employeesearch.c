
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
       if(obj2[i].empID==id)
       {
           flag=1;
           break;
       }
    }
    if(flag==1)
    {
        printf("found");
        printf("%s %s",obj2[i].empname,obj2[i].company);
    }
    
    
    
    fclose(fp);
}

