#include<iostream>
using namespace std;
int powerLog(int a , int b)
{
    if(b==1 ) return a;
    if(b==0) return 1;
    int ans = powerLog(a,b/2);
    if(b%2==0) return ans*ans;
    else if(b%2!=0)return ans*ans*a;

}
int main()
{
    cout<<powerLog(3,3);
}