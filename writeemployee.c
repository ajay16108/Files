
#include <stdio.h>
struct employee
{
    int empID;
    char empname[20];
    char company[20];
}obj1[10];
int main()
{
   for(int i=0;i<3;i++)
    {
        printf("Enter employee ID ,employe name,employee company\n");
        scanf("%d %s %s",&obj1[i].empID,&obj1[i].empname,&obj1[i].company);
    
    } 
    /*for(int i=0;i<3;i++)
    {
        //printf("Enter employee ID ,employe name,employee company\n");
        printf("%d %s %s",obj1[i].empID,obj1[i].empname,obj1[i].company);
    
    }*/
    FILE *fp;
    fp=fopen("employeedb","wb");
    for(int i=0;i<3;i++)
    {
        fwrite(&obj1[i],sizeof(obj1),1,fp);
    }
    fclose(fp);
}
