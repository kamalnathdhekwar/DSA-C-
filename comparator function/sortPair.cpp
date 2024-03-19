    
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
#define mpi           map<ll,ll>
#define mps           map<string,string>
#define umpi          map<string,string>
#define umps          map<ll,ll>

// sort the vector pair by the according to the first value or the first value


bool cmp(pair<ll,ll> a, pair<ll,ll> b){
  
  return a.first<b.first; // by first value
   
   return a.second<b.second; // by second value
}

int main()
{
  
   
   ll n;
   cin>> n;
   
 
   
   vector<pair<ll,ll>> v;
   
   for(i,0,n){
     ll x,y;
     cin>>x>>y;
     v.push_back({x,y});
   }
   
   sort(all(v),cmp);
   
   
   for(i,0,n) cout<<v[i].first<<" "<<v[i].second<<endl;
   

 
}