#include <iostream>
using namespace std;

int main()
{
    int a;
    a = 12;

    cout << "size of int " << sizeof(a) << endl;

    float b;
    cout << "size of float" << sizeof(b) << endl;

    char c;
    cout << "size of char " << sizeof(c) << endl;

    bool d;
    cout << "size of boolean " << sizeof(d) << endl;

    short int si;
    cout << "size of Shortint " << sizeof(si) << endl;

    long int li;
    cout << "size of longint " << sizeof(li) << endl;
}