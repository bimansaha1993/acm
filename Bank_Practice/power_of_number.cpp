#include <iostream>
using namespace std;

int power(int b, int ex)
{
    if(ex != 0)
    {
        return (b * power( b, ex-1 ));
    }
    else
    {
        return 1;
    }
    
}

int main()
{
    int base,exponent,result=1,e=1;
    cin>>base;
    cin>>exponent;
    result=power(base,exponent); //////recursion
    ///////////////////   without recursion   ////////////
    //for(e=1;e<=exponent;e++)
    /*while(e<=exponent)
    {
        result=result*base;
        e++;
    }*/
    cout<<result;
    return 0;
}