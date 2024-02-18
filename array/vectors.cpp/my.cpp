#include<iostream>
using namespace std;
int main()
{
    int arr[] = {5,6,5,6,9,9,3,7};
    int count = 0 ;
    int i;
    for( i = 0 ; i<8 ; i++)
    {
        for(int j = i+1 ; j<8 ; j++)
        {
            if(arr[i]==arr[j])
            {
                arr[i]=4;
                arr[j]=4;
                
            }
          
        }
      
   }
   for(i=0 ;i<8 ;i++)
   {
    if(arr[i]>5)       
    {
        cout<<arr[i];
    }
   }
     
}