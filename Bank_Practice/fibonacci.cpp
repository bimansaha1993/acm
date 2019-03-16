#include<iostream>
using namespace std;

int n,n1,n2;

void fibonacci(int i)
{
    if(i>0)
    {
        int next=n1+n2;
        n1=n2;
        n2=next;
        cout<<next<<" ";
        fibonacci(i-1);
    }
}

/*void fibonacci(int next)
{
    if(next<=n)
    {
        cout<<next<<" "; // 
        n1=n2;
        n2=next;
        fibonacci(n1+n2);    
    }
}*/

int main()
{
    int next=0;
    n1=0,n2=1;
    cin>>n;
    cout<<n1<<" "<<n2<<" ";
    //next=n1+n2; ///
    //fibonacci(next); //
    fibonacci(n-2);
    /*for(int i=1;i<=n-2;i++)
    // while(next<=n) ///
    {
        next=n1+n2;
        //cout<<next<<" "; // 
        n1=n2;
        n2=next;
        //next=n1+n2; //
        cout<<next<<" ";
    }*/
    system("pause");
    return 0;
}