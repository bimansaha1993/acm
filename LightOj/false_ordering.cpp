#include<bits/stdc++.h>
using namespace std;

struct Data {
    int number, devisor_count;
};


/*
    return true if a is less than b else false
*/
bool comp(Data a, Data b) {
    if(a.devisor_count == b.devisor_count)
        return a.number > b.number;
    return a.devisor_count < b.devisor_count;
}


int main()
{
	Data arr[1005];
	for (int k = 1; k <= 1000; k++)
	{
		int cnt = 0;
		for (int i = 1; i <= k; i++)
		{
			if (k%i == 0)
			{
				cnt++;
			}
		}
        arr[k].number = k;
        arr[k].devisor_count = cnt;
    }

    // for(int i=1;i<=1000;i++)
    // {
    //     for(int k=i;k<=1000;k++)
    //     {
    //         if(comp(arr[k], arr[i]))
    //         {
    //             Data temp=arr[i];
    //             arr[i]=arr[k];
    //             arr[k]=temp;
    //         }
    //     }
    // }

    sort(arr+1, arr+1001, comp);

    int test;
    cin>>test;
    for(int t=1;t<=test;t++)
    {
        int n;
        cin>>n;
        cout<<"Case "<<t<<": "<<arr[n].number<<endl;
    }
    system("pause");
	return 0;
}