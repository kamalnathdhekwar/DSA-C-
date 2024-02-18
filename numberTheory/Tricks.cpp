             
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a;
   cin>>a;
  
   // divide by two 
   cout<<(a>>1)<<endl;
   // op = 2  for a =5

// ------------------------------------

    // multiply by two 
   cout<<(a<<1)<<endl;
   // op = 10  for a =5

// ----------------------------------------------
  
// check if it s a power of two or not

    if(a & (a-1) >0) cout<<" not power of two"<<endl;
    else cout<<"yes its a power of two"<<endl;


    
    return 0;
}