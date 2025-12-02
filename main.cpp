#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 6;
    cout << "a = " << a << " and b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    a, b = b, a;
    cout << "a = " << a << " and b = " << b << endl;
}