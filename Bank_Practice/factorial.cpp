#include<iostream>
using namespace std;

int fact(int n)
{
    if(n>1)
    {
        n=n*fact(n-1);
    }
    return n;
}

int main()
{
    int number,factorial;
    cin>>number;
    /*for(int i=1;i<=number;i++)
    {
        factorial=i*factorial;
    }*/
    factorial=fact(number);
    cout<<factorial<<endl;
    system("pause");
    return 0;
}