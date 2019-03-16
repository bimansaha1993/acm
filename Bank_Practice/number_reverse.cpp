#include<iostream>
using namespace std;

int number,reminder,reverse=0;

int rev(int n)
{
    if(n>0)
    {
        reminder=n%10;
        reverse=reverse*10+reminder;
        n=n/10;
        rev(n);
    }
    return reverse;
}

int main()
{
    int ans;
    //int number,reminder,reverse=0;
    cin>>number;
    ans=rev(number);
    /*while(number>0)
    {
        reminder=number%10;
        reverse=reverse*10+reminder;
        number=number/10;
    }*/
    if(ans==number)
    {
        cout<<number<<" is palindrome"<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }
    system("pause");
    return 0;
}