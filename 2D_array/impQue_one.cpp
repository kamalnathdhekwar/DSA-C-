#include <iostream>
 
using namespace std;
 
void func(int(*array)[3][3])
{
    // Printing the array
    size_t i=0;
    while(i<3)
    {
        cout << i << ": ";
        for (size_t j = 0; j < 3; ++j)
            cout << (*array)[i][j] << '\t';
        cout << std::endl;
        ++i;
    }
}
int main()
{
    int a[3][3] = { {2,1,1},{3,3} };
 
    func(&a);
}