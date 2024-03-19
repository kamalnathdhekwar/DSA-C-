          
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define for(i,a,b)    for(ll i = a ; i<b ; i++)
#define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
#define yes           cout<<"Yes"<<endl
#define no            cout<<"No"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define mvi           vector<ll>
#define mvc           vector<char>
#define mvs           vector<string>
#define mpi           map<ll,ll>
#define mps           map<string,string>
#define umpi          map<string,string>
#define umps          map<ll,ll>
#define nn            cout<<endl

// sort by the freqency and if having the same frequency print smaller first
mpi mp;

bool cmp(ll a, ll b){
 if(mp[a]==mp[b]) return a<b;
 
  return mp[a]>mp[b];
  
}

int main()
{
  
   ll n;
   cin>> n;
   
   mvi v(n);
   
   for(i,0,n) {
     cin>>v[i];
     mp[v[i]]++;
   }
   
   sort(all(v),cmp);
   
   for(i,0,n) cout<<v[i]<<" ";
   
   nn;
 
}