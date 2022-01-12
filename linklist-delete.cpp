#include<stdio.h>
#include<stdlib.h>

//单链表的结构定义
typedef struct LNode
{
    int data;			//data存放结点数据域
    struct LNode *next;	//指向后继结点的指针
}LNode;					//定义单链表结点类型


//头插法建立单链表
void createlistF(LNode *&L, int a[], int n)
{
    LNode *s;
    int i;
    L = (LNode*)malloc(sizeof(LNode));
    L ->next = NULL;
    for(i=0;i<n;++i)
    {
        s = (LNode*)malloc(sizeof(LNode));
        s ->data = a[i];
        s ->next = L ->next;
        L ->next = s;

    }

 }

 //打印链表数据
 void printfList(LNode *L)
 {
    LNode *temp = L;
    int count = 0;		//计数器
    printf("表中的元素为:\n");
    while(temp->next)
    {
        temp = temp->next;
        printf("%d\t",temp->data);
        count++;
        if(count%5==0)		//每5个元素作为一行
        {
            printf("\n");
        }
    }
    printf("\n");

 }

// 修改单链表L的第p个位置上的结点
int replace(LNode *L, int p, int e)
{
    LNode *temp = L;
    temp = temp ->next;
    for(int i=1;i<p;++i)
    {
        temp = temp ->next;
    }
    temp ->data = e;
}




 int main()
 {
    LNode *L;
    int n;
    printf("请输入数组的个数：");
    scanf("%d",&n);
    int a[n];
    printf("请输入数组中的数(用空格分开)：\n");
    for(int i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    createlistF(L,a,n);
    printfList(L);

    //测试修改结点
    int p,e;
    printf("请输入要修改的位置和更改后的元素(用空格分开)：\n");
    scanf("%d %d",&p,&e);
    replace(L,p,e);

    //修改后打印链表数据
    printfList(L);

    return 0;
 }

