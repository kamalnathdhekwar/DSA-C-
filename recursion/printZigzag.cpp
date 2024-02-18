#include<iostream>
using namespace std;
void printZig(int n)
{
    if(n==0) return ;
    cout<<n;
    printZig(n-1);
    cout<<n;
     printZig(n-1);
    cout<<n;
}
int main()
{
printZig(2);
}