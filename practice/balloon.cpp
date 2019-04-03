#include<iostream>
using namespace std;

int n,arr[105],visit[105],taken[105],id[105],mx;

int get_val(int indx) 
{
    bool has_left = false, has_right = false;
    int left_val, right_val;

    //get left_val
    for(int i = indx - 1; i >= 0; i--)
    {
        if(!taken[i])
        {
            has_left = true;
            left_val = arr[i];
            break;
        }
    }

    //get right val 
    for(int i = indx + 1; i < n; i++)
    {
        if(!taken[i])
        {
            has_right = true;
            right_val = arr[i];
            break;
        }
    }

    if(has_left && has_right) return left_val*right_val;
    if(has_left) return left_val;
    if(has_right) return right_val;
    return arr[indx];
}

int calculate_score(int i)
{
    if(i==n)
    {
        // mx = max(mx, score);
        return 0;
        /*
        int sum=0;
        if(id[0]==2 && id[1]==3 && id[2]==1 && id[3]==0)
        {
            int a=234;
            
        }
        for(int k=0;k<n;k++)
        {
            taken[k]=0;
        }
        for(int j=0;j<n;j++)
        {
            sum += get_val(id[j]);
            taken[id[j]]=1;
        }
        if(sum>mx)
            mx=sum;
        if(sum==21)
        {
            for(int k=0;k<n;k++)
            {
                cout<<id[k]<<" ";
            }
        }
        return;
        */
    }

    int ret = 0;
    for(int j=0;j<n;j++)
    {
        if(taken[j]==0)
        {
            int val = get_val(j);
            taken[j]=1;
            // id[i]=j;
            ret = max(ret, calculate_score(i+1) + val);
            taken[j]=0;
        }

        /*
        if(visit[j]==0)
        {
            visit[j]=1;
            id[i]=j;
            calculate_score(i+1);
            visit[j]=0;
        }
        */
    }
    return ret;
}

int main()
{
    int test;
    cin>>test;
    for(int t=1;t<=test;t++)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            visit[i]=0;
            id[i]=0;
        }
    }
    mx=calculate_score(0);
    cout<<mx<<endl;
    system("pause");
    return 0;
}