
                        // ***  ... जय श्री राम ...  *** //
#include<bits/stdc++.h>
using namespace std;

#define ll            long long
#define all(x)        x.begin(),x.end()
#define for(i,a,b)    for(ll i = a ; i<b ; i++)
#define yes           cout<<"yes"<<endl
#define no            cout<<"no"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl


int main()
{   ll n;
    cin>>n;
    ll k ;
    cin>>k;
    vector<ll> v(n);
    for(i,0,n){
        cin>>v[i];
    }
    //  brut force ....
    // for(i,0,n-k+1){
    //     ll j;
    //     for( j,i,k+i){
    //         if(v[j]<0) {
    //             cout<<v[j]<<" ";
    //             break;
    //         }
    //     }
    // }

    // using sliding window approch 
    vector<ll> ans(n-k+1);
    ll p = 0;
    for(i,0,k){
        if(v[i]<0) {
        ans[0]=v[i];
        p = i;
        break;
        }
    }
   ll j = k;
   ll i = 1;
    while(j<n){
        if(p>=i) ans[i] = v[p];
        else {
            p = -1;
            ll x;
            for(x , i , j+1){
                if(v[x]<0){
                    p = x;
                    break;
                }
                ans[i]=v[p];
            }
            if(p!=-1) ans[i] = v[p];
            else ans [i] = 1;
        }
        
        i++;
        j++;
    }

for(i,0,ans.size()){
    cout<<ans[i]<<" ";
}
       
 
return 0;
}