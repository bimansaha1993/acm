#include<iostream>
using namespace std;
int main()
{
    int a[100],b[100],n,k,m;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        m=n-k%n;
        b[i]=a[(m+i)%n];
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}