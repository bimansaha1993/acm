#include<iostream>
using namespace std;

/*int number,reminder,sum=0;

int generic(int n)
{
    if(n>10)
    {
        while(n>0)
        {
            reminder=n%10;
            sum=sum+reminder;
            n=n/10;
        }
        cout<<sum<<endl;
        n=sum;
        sum=0;
        generic(n);
    }
    //return sum;
}*/

int main()
{
    //int ans;
    int number,reminder,sum=0;
    cin>>number;
    //generic(number);
    while(number>10)
    {
        while(number>0)
        {
            reminder=number%10;
            sum=sum+reminder;
            number=number/10;
        }
        cout<<sum<<endl;
        if(sum>10)
        {
            number=sum;
            sum=0;
        }
    }
    //cout<<ans<<endl;
    system("pause");
    return 0;
}
