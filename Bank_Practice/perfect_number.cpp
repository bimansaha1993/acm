#include<iostream>
using namespace std;
int main()
{
    int number,sum=0;
    cin>>number;
    for(int i=1;i<number;i++)
    {
        if(number%i==0)
        {
            cout<<i<<" ";
            sum=sum+i;
        }
    }
    cout<<endl;
    cout<<number<<" "<<sum<<endl;
    if(sum==number)
    {
        cout<<number<<" is perfect"<<endl;
    }
    else
    {
        cout<<number<<" is not perfect"<<endl;
    }
    system("pause");
    return 0;
}