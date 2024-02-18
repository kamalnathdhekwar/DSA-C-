             // ***  ... जय श्री राम ...  ***//

// Given array a of n integers. All integers
// are present in Vent count except one.
// Find that one integer which has odd count
// in O(N) time complexity and 0(1) space;

#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define for(i,a,b)    for(ll i = a ; i<b ; i++)
#define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
#define yes           cout<<"yes"<<endl
#define no            cout<<"no"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define mvi           vector<ll>
#define mvs           vector<string>
#define mpi           map<ll,ll>
#define mps           map<string,string>
#define umpi          map<string,string>
#define umps          map<ll,ll>
#define nn            cout<<endl

int main()
{
    cout<<"enter size of array "<<endl;
    ll t;
    cin>>t;
   
   mvi v(t);

  cout<<"enter elements in the  array "<<endl;

  ll x = 0;
   for(i,0,t){
    cin>>v[i];

    x = x ^ v[i];
}
    

    cout<<"the unique element is "<<x<<endl;
    return 0;
}