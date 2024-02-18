#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={1,2,3777,4,5,6,556};

 int secMax = INT_MIN  ;
  int max = INT_MIN  ;

    for(int i = 0 ; i<7 ; i++)
    {
       if(max<arr[i]) max = arr[i];

    }
    
    for(int i = 0 ; i<7 ; i++)
    {
       if(max!=arr[i] && secMax<arr[i])  secMax = arr[i];

    }

    cout<<max<<endl<<secMax;

        
}