             
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a;
   cin>>a;

 // inbuild function to count the number of setbits in a decimal number
   cout<<__builtin_popcount(a)<<endl;
    
    return 0;
}