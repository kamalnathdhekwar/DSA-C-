#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{  int n=3;
    vector<int> v(n);
  for(int z = 0 ; z<n ; z++)
  {
    cin>>v[z];
  }
     
        // sort(v.begin(),v.end());
        int Cmax = 0;
        for(int i = 0 ; i<n-2; i++ )
        {
            for(int j = i+1 ; j<n-1 ; j++)
            {
                for(int k = j+1 ; k<n ; k++)
                {   
                    Cmax =max (Cmax,((v[i] - v[j]) * v[k]));
                }
            }
        }
        cout<<Cmax;
}