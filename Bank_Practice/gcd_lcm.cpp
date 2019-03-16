#include<iostream>
using namespace std;

int a,b,gcd,lcm;

void gcd1(int i)
{
    if(i<=a)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
            //gcd1(i+1);
        }
        gcd1(i+1);
    }
}

int main()
{
    //int a,b,gcd,lcm;
    cin>>a>>b;
    if(a>b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    gcd1(1);
    /*for(int i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }*/
    lcm=(a*b)/gcd;
    cout<<gcd<<endl;
    cout<<lcm<<endl;
    system("pause");
    return 0;
}