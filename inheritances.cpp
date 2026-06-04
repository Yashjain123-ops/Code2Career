#include<iostream>
using namespace std;

class grandparent
{
protected:
    int a,b;

public:
    virtual void display()
    {
        cout << "Grandparent display" << endl;
    }
};

class parent1 : public virtual grandparent
{
    public:
    void display()
    {
        cout << "Value of a and b is not defined" << endl;
    }    
};

class parent2 : virtual grandparent
{
    public:
    void display()
    {
        cout << "Value of a and b is still not defined" << endl;
    }   
};

class child : virtual parent1, parent2
{
    public:
    child(int a, int b)
    {
        this->a =a;
        this->b= b;
    }
    void display()
    {
        cout << "Value of a is " << a << endl << " and value of b is " << b << endl;
    }
};

int main()
{
    child c1(10,20);
    c1.display();
    return 0;
}