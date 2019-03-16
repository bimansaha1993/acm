#include<iostream>
using namespace std;

int low,high;

void prime(int low)
{
    int flag;
    if(low<high)
    {
        flag=1;
        for(int i=2;i<=low/2;i++)
        {
            if(low%i==0)
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            cout<<low<<" ";
        }
        prime(low+1);
    }
}

int main()
{
    //int low,high,flag;
    cin>>low>>high;
    if(low>high)
    {
        int temp=low;
        low=high;
        high=temp;
    }
    if(low<2)
    {
        low=2;
    }
    prime(low);
///////////   without recursion   ///////
    /*while(low<high)
    {
        flag=1;
        for(int i=2;i<=low/2;i++)
        {
            if(low%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<low<<" ";
        }
        low++;
    }*/
    system("pause");
    return 0;
}