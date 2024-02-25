             
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
     if(b==0) return a;

     return gcd(b,a%b);

}

int main()
{
   int a,b;
   cin>>a>>b;
  
   cout<<gcd(a,b)<<endl;
   
   // lcm of those number if a*b / gcd(a,b);

   cout<<(a*b)/gcd(a,b)<<endl;

   // inbuild function of gcd === __gcd(a,b);

   cout<<__gcd(a,b)<<endl;


//    note : time complexity Log(N) ,,N --> range 
       return 0;
}