              // ***  ... जय श्री राम ...  ***//
              
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

// sort the vector according to the digits sum ,,if the sum is same then print the largest first
bool cmp(ll a, ll b){
  ll c = a;
  ll d = b;
  ll s1 = 0;
  ll s2 = 0;
  while(a>0){
    s1+=a%10;
    a/=10;
  }
  
  while(b>0){
    s2+=b%10;
    b/=10;
  }
  
  if(s1==s2) return c>d;
  else return s1<s2;
  
}

int main()
{
   ll n;
   cin>> n;
   
   mvi v(n);
   for(i,0,n) cin>>v[i];
   
   sort(all(v),cmp);
   
   for(i,0,n) cout<<v[i]<<" ";
   
   nn;
 
}