#include <iostream>
using namespace std;
namespace first
{
    int val = 2;
} // namespace first
namespace second
{
    double val = 1.0;
    double val2 = 100;
}

int main()
{
    char val = 65;
    cout << val << endl;
    cout << first::val << endl;
    cout << second::val << endl;
    cout << second::val2 << endl;
}