#include<iostream>
using namespace std;
bool powerOfTwo(int n)
{
    if(n==1) return true;
    
   if(n%2!=0) return false;
     return powerOfTwo(n/2);
    

}
int main()
{
   if(powerOfTwo(18)) cout<<"true";
   else cout<<"false";
}