#include<iostream>
using namespace std;
class complex
{
    private:
    float real;
    float imag;
 public:
    complex()
    {
        real=0;
        imag=0;
    }
    complex(float r,float i)
    {
        real=r;
        imag=i;
    }
    ~complex()
    {
    }
    void display()
    {
        cout<<real<< "+" <<imag<< "i" <<endl;
    }
    complex operator+(complex c)
    {
        return complex(real+c.real,imag+c.imag);
    }
    complex operator-(complex c)
    {
        return complex(real-c.real,imag-c.imag);
    }
     complex operator*(complex c)
    {
        float r = real*c.real-imag*c.imag;
        float i = real*c.imag+imag*c.real;
        return complex(r,i);
    }
};
int main()
    {
        complex c1(20,30);
        cout<<"complex number is :";
        c1.display();
        complex c2(50,20);
        cout<<"complex number is:";
        c2.display();

        complex sum = c1+c2;
        cout<<"sum:";
        sum.display();

        complex diff = c1-c2;
        cout<<"difference:";
        diff.display();

        complex prod = c1*c2;
        cout<<"product:";
        prod.display();

        return 0;
    }
    