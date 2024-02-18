#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 int arr[]={3,3,3,3};
 int res = 0;
 for(int i = 0 ; i<4 ; i++)
 {
    res = res^arr[i];
 }
 cout<<res;
return 0;
}


