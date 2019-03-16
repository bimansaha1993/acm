#include<iostream>
using namespace std;

char s[100],revr[100];

void reverse(int l,int m)
{
    if(l>=0)
    {
        revr[m]=s[l];
        reverse(l-1,m+1);
    }
}

int main()
{
    //char s[100],revr[100];
    int l=0,m=0,flag=1;
    //cin>>s;
    gets(s);
    for(int i=0;s[i];i++)
    {
        l++;
    }
    cout<<l<<endl;
    reverse(l-1,m);
    /*for(int i=l-1;i>=0;i--)
    {
        rev[m]=s[i];
        m++;
    }*/
    //rev[m]='\0';
    for(int i=0;i<l;i++)
    {
        if(s[i]!=revr[i])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"palindrome"<<endl;
    }
    else
    {
        cout<<"not palindrome"<<endl;
    }
    cout<<revr<<endl;
    system("pause");
    return 0;
}