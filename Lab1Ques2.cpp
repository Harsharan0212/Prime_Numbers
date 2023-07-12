#include<iostream>
using namespace std;

int main()
{
    int num, max=300, i, f;
    for(num=1;num<=max;num++)
    {
        f=0;
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                f=1;
                break;
            }
        }
        if(f==0 & num!=1)
            cout<<num<<" ";
    }
    return 0;
}