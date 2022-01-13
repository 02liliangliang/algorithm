#include<stdio.h>
#define MaxSize 10

typedef struct {
    int date[MaxSize];
    int lenth;
}SqList;

void InitList( SqList &L ){
    for( int i=0; i<MaxSize; i++ )
        L.date[i] = 0;
    L.lenth = 0;
}

int main(int argc, char const*argv[])
{
    SqList L;
    InitList( L );
    return 0;
}

