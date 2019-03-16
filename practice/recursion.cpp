#include<iostream>
using namespace std;

int n,a[3];

void rec(int i)
{
    if(i==n)
    {
        for(int k=0;k<n;k++)
        {
            cout<<a[k]<<" ";
        }
        cout<<endl;
        return ;
    }
    a[i]=0;
    rec(i+1);
    a[i]=1;
    rec(i+1);
}

int main()
{
    cin>>n;
    rec(0);
    system("pause");
    return 0;
}