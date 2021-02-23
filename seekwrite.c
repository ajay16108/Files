#include <stdio.h>
struct node
{
    int data;
    struct node *link;
};
typedef struct node ll;
int main()
{
    ll a1;
    FILE *fp;
    fp=fopen("data","wb");
    a1.data=100;
    a1.link=1234;
    fwrite(&a1,sizeof(a1),1,fp);
    a1.data=200;
    a1.link=12345;
    fwrite(&a1,sizeof(a1),1,fp);
    a1.data=300;
    a1.link=123456;
    fwrite(&a1,sizeof(a1),1,fp);
    printf("writen done");
    fclose(fp);
}
