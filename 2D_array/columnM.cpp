#include <iostream>
using namespace std;
int main()
{
    int m,n;
   cout<<"enter the value of m and n :\n";
   cin>>m>>n;
   int a[m][n];
   
   int i,j ;
   cout<<"enter the   elemnets of first matrix" ;
    for( i = 0 ; i<m ; i++)
    {
        for( j = 0 ; j<n ; j++)
        {
           cin>>a[i][j];
        }
          
    } 
    cout<<endl;

 for( j = 0 ; j<n ; j++)
    {
        if(j%2!=0)
       { for( i = 0 ; i<m ; i++)
        {
           cout<<a[i][j];
        }}
        else{
            for( i = m-1 ; i>=0 ; i--)
        {
           cout<<a[i][j];
        } 
        }
        
    } 
}