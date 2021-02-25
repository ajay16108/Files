#include <stdio.h>
struct employee
{
    int empID;
    char empname[20];
    char company[20];
}obj1[10];
struct employee obj2[10];
int main()
{    int id;int flag;int i;int index=0;
    FILE *fp;
    fp=fopen("employeedb","rb");
    printf("enter employee id to search");
    scanf("%d",&id);
 //while((fread(&obj2[i],sizeof(obj2),1,fp) ==1))
 while(employeedb!=NULL)
 {
    for(i=0;i<=3;i++)
    {
       if(obj2[i].empID==id)
       {
           flag=1;
           index=i;
           
        fwrite(&obj2[index].empID=NULL,&obj2[index].empname=NULL,&obj2[index].company=NULL);
       }
    }
 }
  
   fclose(fp);
}
