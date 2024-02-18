             
#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
   ll a,b;
   cin>>a>>b;

   // swap using xor 
   a = a ^ b;
   b = b ^ a;  // b===a done
   a = a ^ b;  /// a = a ^ b^ a  == b done

 // the a and b are swapped now
  



    
    return 0;
}