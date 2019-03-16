#include<iostream>

using namespace std;

int com[4],arr[4]={1,2,3,4},cnt;

void pow_set(int i)
{
    if(i==4)
    {
        cnt=0;
        for(int k = 0; k < 4; k++)
        {
            if(com[k]==1)
            {
                cnt++;
            }
        }
        if(cnt==3)
        {
            for(int k=0; k<4; k++)
            {
                if(com[k]==1)
                {
                    cout<<arr[k]<<" ";
                }                
            }
            cout<<endl;
        }
        return;
    }

    

    com[i]=0;
    pow_set(i+1);
    com[i]=1;
    pow_set(i+1);
}

int main(int argc, char const *argv[])
{
    pow_set(0);
    system("pause");
    return 0;
}
