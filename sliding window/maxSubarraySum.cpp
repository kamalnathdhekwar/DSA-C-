             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
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

int main()
{
    ll n;
    cin>>n;
    ll k;
    cin>>k;
    mvi v(n);
    for(i,0,n) cin>>v[i];
   
    mvi vv;
    for(i,0,n-2){
        ll sum = 0;
        for(j,i,i+k){
            sum+=v[j];
        }
        vv.push_back(sum);
    }

// for(i,0,vv.size()) cout<<vv[i]<<" ";
// nn;

cout<<*max_element(all(vv));

    
    return 0;
}