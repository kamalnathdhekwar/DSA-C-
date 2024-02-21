              
#include<bits/stdc++.h>
using namespace std;

// leetcode 79//// 
vector<vector<int>> subsets(vector<int>&nums){
    int n = nums.size();
    int subset_cnt = (1<<n);
    vector<vector<int>> subsets;

    for(int mask = 0 ; mask<subset_cnt; mask++){
        vector<int> small_subset;

        for(int i = 0 ; i<n ; i++){
            if((mask&(1<<i)) !=0){
                small_subset.push_back(nums[i]);
            }
        }

        subsets.push_back(small_subset);
    }

    return subsets;
}

int main()
{
  int n;
  cin>>n;
  vector<int> v(n);

  for(int i = 0 ; i<n ; i++)
  {
    cin>>v[i]; 
  }

 auto all_subsets = subsets(v);

 for(auto subset : all_subsets){
    for(int ele : subset){
        cout<<ele<<" ";
    }
    cout<<endl;
 }
    return 0;
}