#include<iostream>



using namespace std;

#define OK 1

#define ERROR 0

#define OVERFLOW -2

typedef int Status;
typedef int ElemType;



#define MAXSIZE 100



typedef struct {

    ElemType *elem;

    int length;

} SqList;



Status InitList(SqList &L) {

    L.elem = new ElemType[MAXSIZE];
    if (!L.elem)

        exit(OVERFLOW);

    cout<<"初始化表中元素个数：";

    int n;

    cin>>n;

    cout<<"creat SqList:";

    for(int i = 0; i < n; i++){

        cin>>L.elem[i];

    }

    L.length = n;

    return OK;

}


void input(SqList L){

    ElemType i = 0;

    while(L.length != i){

        cout<<L.elem[i]<<" ";

        i++;

    }

    cout<<endl;

}



Status ListInsert(SqList &L, int i, ElemType e) {


    if ((i < 1) || (i > L.length + 1))

        return ERROR;

    if (L.length == MAXSIZE)

        return ERROR;

    for (int j = L.length - 1; j >= i - 1; j--)

        L.elem[j + 1] = L.elem[j];

    L.elem[i - 1] = e;

    ++L.length;

    return OK;

}



int main()

{

    SqList a;

    InitList(a);

    input(a);

    ListInsert(a,5,9);

    input(a);

    return OK;

}
