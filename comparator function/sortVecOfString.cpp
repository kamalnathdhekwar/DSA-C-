 
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

// sort according to the length of the string if string is of same length then sort according to the alphabatical order

bool cmp(string a, string b){
 
  ll s1 = a.length();
  ll s2 = b.length();
 
  
  if(s1==s2) return a<b;
  else return s1>s2;
  
}

int main()
{
   ll n;
   cin>> n;
   
   mvs v(n);
   for(i,0,n) cin>>v[i];
   
   sort(all(v),cmp);
   
   for(i,0,n) cout<<v[i]<<" ";
   
   nn;
 
}