             
#include<bits/stdc++.h>
using namespace std;

int power(int a ,int b){
    if(b==0) return 1;
    long long res = power( a , b/2 );

    if(b&1){ // if the power is odd
      return a* res* res;
    }
    else return res* res;
}

int main()
{
   int a,b;
   cin>>a>>b;

   cout<<power(a,b)<<endl;
  
       return 0;
}