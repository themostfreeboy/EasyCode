#include<iostream>
#include<cmath>
using namespace std;
class Complex
{
      private:
             double real;
             double image;
      public:
             Complex(double realset=0,double imageset=0):real(realset),image(imageset){};
             /*此函数为带默认参数的构造函数，也是类型转换函数，当在进行int/float/double与Complex数据类型间的运算操作时(包括加减乘除)，无论顺序，系统会隐式调用此类型转换函数，将非Complex类型的值传递给此函数的第一个形参realset，而第二个形参使用默认参数imageset=0，此函数实现了类型转换，所以下面无须对不同数据类型与Complex进行函数重载，经过上机对main函数的严格编写编译调试测试，此方式正确可行*/ 
             friend Complex operator+(Complex r,Complex l);
             friend Complex operator-(Complex r,Complex l);
             friend Complex operator*(Complex r,Complex l);
             friend Complex operator/(Complex r,Complex l);
             Complex operator++();
             Complex operator++(int);
             Complex operator--();
             Complex operator--(int);
             void show();
};
Complex operator+(Complex r,Complex l)
{        return Complex(r.real+l.real,r.image+l.image);     }
Complex operator-(Complex r,Complex l)
{        return Complex(r.real-l.real,r.image-l.image);     }
Complex operator*(Complex r,Complex l)
{        return Complex((r.real*l.real-r.image*l.image),(r.real*l.image+r.image*l.real));     }
Complex operator/(Complex r,Complex l)
{        return Complex((r.real*l.real+r.image*l.image)/(pow(l.real,2)+pow(l.image,2)),(r.image*l.real-r.real*l.image)/(pow(l.real,2)+pow(l.image,2)));     }
Complex Complex::operator++()
{        return Complex(++real,++image);      }
Complex Complex::operator++(int)
{
        Complex temp=*this;
        real++;
        image++;
        return temp;
}
Complex Complex::operator--()
{        return Complex(--real,--image);     }
Complex Complex::operator--(int)
{
        Complex temp=*this;
        real--;
        image--;
        return temp;
}
void Complex::show()
{
        if((real==0)&&(image==0))                   cout<<"0";
              else if(image==0)                     cout<<real;
              else if(real==0)
              {
                     if(image==1)                   cout<<"i";
                            else if(image==-1)      cout<<"-i";
                            else                    cout<<image<<"i";
              }
              else
              {
                     cout<<real;
                     if(image==1)                   cout<<"+i";
                            else if(image==-1)      cout<<"-i";
                            else if(image>0)        cout<<"+"<<image<<"i";
                            else                    cout<<image<<"i";
              }
        cout<<endl;
}
int main()
{
    Complex a(1.3,2.4),b(3,4),c(1,3),d(2,4);
    d=a+3;
    d.show();
    system("pause");
    return 0;
}
