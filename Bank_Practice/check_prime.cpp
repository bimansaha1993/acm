#include<iostream>
using namespace std;

int flag;

void prime(int n,int i)
{
    flag=1;
    if(i>n/2)
    {
        return;
    }
    else
    {
        if(n%i==0)
        {
            flag=0;
        }
        else
        {
            prime(n,i+1);
        }
    }
}

int main()
{
    int n;
    cin>>n;
    prime(n,2);
    //int flag=1;
    /*if(n<=1)
    {
        flag=0;
    }
    else
    {
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }
    }*/
    if(flag==1)
    {
        cout<<n<<endl;
    }
    else
    {
        cout<<"not prime"<<endl;
    }
    system("pause");
    return 0;
}