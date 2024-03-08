             
// lowest prime and the highest prime factor of n 

#include<bits/stdc++.h>
using namespace std;

const int n = 1e7+10;
vector<bool> isPrime(n,1);
vector<int> lp(n,0) , hp(n,0);
int main()
{
   isPrime[0] = isPrime[1] = false;

   for(int i = 2 ; i<n ; i++){
    if(isPrime[i]==true){
        lp[i] = hp[i] =i;
        for(int j = 2*i ; j<n ; j+=i){
            isPrime[j] = false;
            hp[j] =i;
            if(lp[j]==0){
                lp[j] = i;
            }
        }
    }
   }

  for(int i= 2; i<10 ; i++){
    cout<<"lowest prime of :"<<i<<" is "<<lp[i]<<" and highest prime is : "<<hp[i]<<endl;
  }

  // op-- 
/*
lowest prime of :2 is 2 and highest prime is : 2
lowest prime of :3 is 3 and highest prime is : 3
lowest prime of :4 is 2 and highest prime is : 2
lowest prime of :5 is 5 and highest prime is : 5
lowest prime of :6 is 2 and highest prime is : 3
lowest prime of :7 is 7 and highest prime is : 7
lowest prime of :8 is 2 and highest prime is : 2
lowest prime of :9 is 3 and highest prime is : 3
lowest prime of :10 is 2 and highest prime is : 5
lowest prime of :11 is 11 and highest prime is : 11........

*/
  
    
    return 0;
}

