#include<iostream>
using namespace std;

int count=0;

void factor(int n,int fact)
{
    if(fact<=n)
    {
        if(n%fact==0)
        {
            count++;
            cout<<fact<<" ";
        }
        factor(n,fact+1);
    }
}

int main()
{
    int number;//,count=0;
    cin>>number;
    factor(number,1);

    ////// normal  //////////
    /*for(int i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            count++;
            cout<<i<<" ";
        }
    }*/
    cout<<endl;
    cout<<count<<endl;
    system("pause");
    return 0;
}