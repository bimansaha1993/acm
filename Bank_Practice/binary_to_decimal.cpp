#include<iostream>
using namespace std;

int number,reminder,deci=0,i=0;

int pow(int base,int exp)
{
    int result=1;
    for(int j=1;j<=exp;j++)
    {
        result=result*base;
    }
    return result;
}

int bin_dec(int n)
{
    if(n>0)
    {
        reminder=n%10;
        n=n/10;
        deci=deci+reminder*pow(2,i);
        i++;
        bin_dec(n);
    }
    return deci;
}

int main()
{
    int ans;
    //int number,reminder,dec=0,i=0;
    cin>>number;
    ans=bin_dec(number);
    /*while(number>0)
    {
        reminder=number%10;
        number=number/10;
        dec=dec+reminder*pow(2,i);
        i++;
    }*/
    cout<<ans<<endl;
    system("pause");
    return 0;
}