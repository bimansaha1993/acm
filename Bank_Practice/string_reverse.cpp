#include<iostream>
using namespace std;
int main()
{
    char s[100],rev[100];
    int l=0,m=0,flag=1;
    gets(s);
    for(int i=0;s[i];i++)
    {
        l++;
    }
    for(int i=l-1;i>=0;i--)
    {
        rev[m]=s[i];
        m++;
    }
    rev[m]='\0';
    for(int i=0;i<m;i++)
    {
        if(s[i]!=rev[i])
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
    
    cout<<rev<<endl;
    system("pause");
    return 0;
}