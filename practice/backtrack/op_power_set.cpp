#include<iostream>

using namespace std;

int com[4],arr[4]={1,2,3,4},cnt;

void pow_set(int i)
{
    if(i==3)
    {
        for(int k=0; k<3; k++)
        {
            cout<<com[k]<<" ";                
        }
        cout<<endl;
        return;
    }
    com[i]=arr[i];
    pow_set(i+1);
}

int main(int argc, char const *argv[])
{
    pow_set(0);
    system("pause");
    return 0;
}
