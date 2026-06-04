#include<iostream>
using namespace std;

class demo
{
    public:
    int n1;
    float n2;
};

int main()
{
    demo d1;
    d1.n1 = 10;
    d1.n2 = 20.5;

    cout << "n1 is " << d1.n1 << endl;
    cout << "n2 is " << d1.n2 << endl;
    return 0;
}