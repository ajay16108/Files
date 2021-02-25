#include <stdio.h>
struct employee
{
    int empID;
    char empname[20];
    char company[20];
}obj1[10];
//struct employee obj2[10];
int main()
{    int id;;int i;int index=0;
    FILE *fp,*fp1;
    fp=fopen("employeedb","rb");
    fp1=fopen("employee","wb");
    printf("enter employee id to search");
    scanf("%d",&id);
    rewind(fp);
    while((fread(&obj1[i],sizeof(obj1),1,fp) ==1))
    {
        if (obj1.empID != id)
        {
            fwrite(&obj1, sizeof(obj1), 1, fp1);
        } 
    }
    fclose(fp);
    fclose(fp1);
    remove("employeedb");
    rename("employee", "employeedb");
    printf("\nRecord deleted.");
}
