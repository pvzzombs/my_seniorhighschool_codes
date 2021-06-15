#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int var;
    int * ptr;
    int val;
    var = 3000;
    ptr = &var;
    val = *ptr;
    cout << ptr << val << var;
    return 0;
}
