             
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a;
   cin>>a;
  
  // take and with one .//// if it is one then odd else even
   int x = a & 1;
   if(x==1) cout<<"Odd"<<endl;
   else cout<<"Even"<<endl;
 

    
    return 0;
}