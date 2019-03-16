#include<iostream>
using namespace std;

int count=0,reminder,sum=0,arr[5];

int digit_count(int n)
{
    if(n>0)
    {
        reminder=n%10;
        arr[count]=reminder;
        sum=sum+reminder;
        //n=n/10;
        count++;
        digit_count(n/10);
    }
    else
    {
        return count;
    }   
}

int main()
{
    int number;  //,count=0,reminder,sum=0,arr[5];
    cin>>number;
    count=digit_count(number);

    /////// normal  ////////
    /*int n=number;
    while(n!=0)
    {
        reminder=n%10;
        arr[count]=reminder;
        sum=sum+reminder;
        n=n/10;
        count++;
    }*/
    cout << sum << endl;
    cout << count << endl;
    for(int i=count-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;    
}