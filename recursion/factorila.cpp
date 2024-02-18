#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0) return 1 ;
   factorial(n-1);
    cout<<n<<endl;
    

}
int main()
{
   cout<<factorial(5);
}