#include <iostream>
using namespace std;
void me(int(*arr)[m][n])
{
cout<<"the result is \n" ;
 for(int i = 0 ; i<m ; i++)
    {
        for( int j = 0 ; j<n ; j++)
        {
           cout<<*(arr)[j][i]<<" ";
        }
        cout<<endl;
        }
}

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

me(&a);
     

   
   
   
    return 0;
}