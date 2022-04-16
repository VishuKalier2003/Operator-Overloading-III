// Implementation as a non-member function when declared public...
#include <iostream>
using namespace std;
class OverloadBase
{
    public:             // Data members
        int data_real;
        int data_imag;
        OverloadBase()    // Default Constructor
        { data_real = 0; data_imag = 0; }
        OverloadBase(int real, int imag)         // Parametrized Constructor
        { data_real = real; data_imag = imag; }
};
// non-member function when declared public
OverloadBase operator - (OverloadBase const &obj1, OverloadBase &obj2)
{
    obj2.data_real = obj2.data_real - obj1.data_real;
    obj2.data_imag = obj2.data_imag - obj1.data_imag;
    return obj2;
}
int main()
{
    OverloadBase object(3, 6), object1(6, 9);   // Creating Objects
    object = object - object1;
    cout << object.data_real << endl;
    cout << object.data_imag << endl;
}