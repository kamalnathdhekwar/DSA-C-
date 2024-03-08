             
#include<bits/stdc++.h>
using namespace std;

const int n = 1e7+10;
vector<bool> isPrime(n,1);

int main()
{
   isPrime[0] = isPrime[1] = false;

   for(int i = 2 ; i<n ; i++){
    if(isPrime[i]==true){
        for(int j = 2*i ; j<n ; j+=i){
            isPrime[j] = false;
        }
    }
   }

   for(int i = 2 ; i<30 ; i++){
    cout<<i<<" "<<isPrime[i]<<endl;
   }
    
    return 0;
}

// o/p----
/* 
2 1
3 1
4 0
5 1
6 0
7 1
8 0
9 0
10 0
11 1
12 0
13 1
14 0
15 0
16 0
17 1
18 0
19 1
20 0
21 0
22 0
23 1
24 0
25 0
26 0
27 0
28 0
29 1 
*/