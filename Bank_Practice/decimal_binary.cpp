#include<iostream>
using namespace std;

int number,reminder,arr[100],i=0;

int dec_bin(int n)
{
    if(n>0)
    {
        reminder=n%2;
        n=n/2;
        arr[i]=reminder;
        //binary=binary*10+reminder;
        i++;
        dec_bin(n);
    }
}

int main()
{
    //int number,reminder,binary=0,arr[100],i=0;
    cin>>number;
    dec_bin(number);
    /*while(number>0)
    {
        reminder=number%2;
        number=number/2;
        arr[i]=reminder;
        binary=binary*10+reminder;
        i++;
    }*/
    //cout<<binary<<endl;
    for(int j=i-1;j>=0;j--)
    {
        cout<<arr[j];
    }
    cout<<endl;
    system("pause");
    return 0;
}