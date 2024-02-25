             
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

  // minimum fraction of a/b is (a/gcd(a,b) / b/gcd(a,b));

//    note : time complexity of Euclid's Algorithm is == Log(N) ,,N --> range 
       return 0;
}