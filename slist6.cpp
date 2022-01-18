#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

long long  f[100005]={1,2,3,1,2,3,1,2,3,1,2,3};

int main()

{
    int j,i,temp,flag;

    for(i=1; i<12; i++)
    {
        flag=1;
        for(j=i+1; j<12; j++)
        {
            //printf("%d-%d\n",f[j],f[j%i]);
            if(f[j]!=f[j%i])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            temp=i;
            break;
        }
    }
        printf("%d\n",temp);

    return 0;
}
