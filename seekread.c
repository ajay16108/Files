#include <stdio.h>
struct node
{
    int data;
    struct node *link;
};
typedef struct node ll;
int main()
{
    ll a2;
    FILE *fp;
    fp=fopen("data","rb");
    fseek(fp,(2*(sizeof(a2))),SEEK_SET);
    fread(&a2,(sizeof(a2)),1,fp);
    printf("reading done");
    printf("%d %d",a2.data,a2.link);
    fclose(fp);
}
