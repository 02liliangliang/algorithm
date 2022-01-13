#include <stdio.h>
#include <stdlib.h>
#define OK 1
#define ERROR -1
#define MAXSIZE 100
#define OVEERFLOW -2
typedef int Stauts;
typedef int ElemType;
typedef struct
{
    ElemType *elem;
    int length;
}SqList;
Stauts InitList_Sq(SqList &L)
{
    int i;
    L.elem=new ElemType[10];
    if(!L.elem) exit(OVEERFLOW);
    L.length=10;
    for(i=0;i<10;i++)
        L.elem[i]=i;
return OK;
}
Stauts ListDelete(SqList &A,int item)
{
    int i,j;
    for(j=0;j<A.length;j++)
            if(A.elem[j]==item)
            {
                for(i=j;i<A.length;i++)
                    A.elem[i]=A.elem[i+1];
                A.length--;
            }
            return OK;
}
int main()
{
    int i,item;
    SqList A;
    InitList_Sq(A);
    printf("成功构建顺序表\n");
    printf("请在表中输入十个元素\n");
    for(i=0;i<A.length;i++)
    {
        A.elem[i]=i;
        scanf("%d",&A.elem[i]);
        printf("%5d",A.elem[i]);
    }
    printf("\n");
    printf("请输入要删除的数值");
    scanf("%d",&item);
    ListDelete(A,item);
    printf("操作完成后的数值为：");
    for(i=0;i<A.length;i++)
        printf("%5d",A.elem[i]);
    printf("\n");
    return 0;
}

