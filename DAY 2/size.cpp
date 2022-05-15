#include <iostream>
using namespace std;
//Because all your implementation of std::string stores is a pointer to the heap where all of it's data is stored.
int main()
{
    int a = 2;
    char b = 96;
    double c = 3.01;
    float d = 5.32;
    bool e = true;
    string str = "Rishabh";
    short f = 23;
    long g = 32;
    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(e) << endl;
    cout << sizeof(f) << endl;
    cout << sizeof(g) << endl;
    cout<<sizeof(str)<<endl;
}