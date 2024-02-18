#include<iostream>
using namespace std;

int fact(int x)
{
    int f = 1;
    for(int i = 2 ; i<=x ; i++)
    {
       f=f*i;
    }
    return f;
}
// permutation?/
int permutation(int n , int r)
{
    int per = fact(n)/fact(n-r);
    return per;
}
// code for combinattions//
int combination(int n , int r)
{
    int comb = fact(n)/(fact(n-r)*fact(r));
    return comb;
}
int main()
{cout<<combination(5,2)<<endl;
cout<<permutation(5,2);
}
