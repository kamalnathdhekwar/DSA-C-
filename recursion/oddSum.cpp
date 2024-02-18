#include<iostream>
using namespace std;
void OddSun(int a, int b,int &sum)
{  
    if(a>b) return ;
    if(a==b)
    {
        if(a%2!=0) sum +=a;
        return;
    }
    if(a%2!=0)
    {
        sum = sum+a;
        OddSun(a+2,b,sum);
    }
    else OddSun(a+1,b,sum);
    

}
int main()
{
    int sum = 0;
    OddSun(1,7,sum);
   cout<<sum;
}