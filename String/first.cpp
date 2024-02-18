#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"enter the string \n";
    string s ;
    getline(cin,s);
    
//   int count = 0 ;
//     for(int i = 0 ; i<s.length() ; i++)
//     {
//         if(s[i]!=s[i+1] && s[i]!=s[i-1]) count++;
//     }

   sort(s.begin(),s.end());
   cout<<s;

}