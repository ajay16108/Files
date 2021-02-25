#include <stdio.h>
struct employee
{
    int empID;
    char empname[20];
    char company[20];
}obj1[10];
//struct employee obj2[10];
int main()
{    int id;int flag;int i;int index;
    FILE *fp;
    fp=fopen("employeedb","rb");
    printf("enter employee id to search");
    scanf("%d",&id);
    for(i=0;i<3;i++)
    {
       if(obj1[i].empID==id)
       {
           flag=1;
           index=i;
           break;
       }
    }
    if(flag==1)
    {
        printf("found");
        printf("%s %s",obj1[index].empname,obj1[index].company);
    }
 if(flag==0)
 {
     printf("not found");
 }
   fclose(fp);
}


