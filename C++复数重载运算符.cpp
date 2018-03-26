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
             friend Complex operator+(Complex r,Complex l);
             friend Complex operator+(Complex r,double l);
             friend Complex operator+(double r,Complex l);
             friend Complex operator-(Complex r,Complex l);
             friend Complex operator-(Complex r,double l);
             friend Complex operator-(double r,Complex l);
             friend Complex operator*(Complex r,Complex l);
             friend Complex operator*(Complex r,double l);
             friend Complex operator*(double r,Complex l);
             friend Complex operator/(Complex r,Complex l);
             friend Complex operator/(Complex r,double l);
             friend Complex operator/(double r,Complex l);
             Complex operator++();
             Complex operator++(int);
             Complex operator--();
             Complex operator--(int);
             void show();
};
Complex operator+(Complex r,Complex l)
{
        return Complex(r.real+l.real,r.image+l.image);
}
Complex operator+(Complex r,double l)
{
        return Complex(r.real+l,r.image);
}
Complex operator+(double r,Complex l)
{
        return Complex(r+l.real,l.image);
}
Complex operator-(Complex r,Complex l)
{
        return Complex(r.real-l.real,r.image-l.image);
}
Complex operator-(Complex r,double l)
{
        return Complex(r.real-l,r.image);
}
Complex operator-(double r,Complex l)
{
        return Complex(r-l.real,-l.image);
}
Complex operator*(Complex r,Complex l)
{
        return Complex(((r.real)*(l.real)-(r.image)*(l.image)),((r.real)*(l.image)+(r.image)*(l.real)));
}
Complex operator*(Complex r,double l)
{
        return Complex(((r.real)*l),((r.image)*l));
}
Complex operator*(double r,Complex l)
{
        return Complex((r*(l.real)),(r*(l.image)));
}
Complex operator/(Complex r,Complex l)
{
        return Complex(((r.real)*(l.real)+(r.image)*(l.image))/(pow((l.real),2)+pow((l.image),2)),((r.image)*(l.real)-(r.real)*(l.image))/(pow((l.real),2)+pow((l.image),2)));
}
Complex operator/(Complex r,double l)
{
        return Complex(((r.real)*l)/(pow(l,2)),((r.image)*l)/(pow(l,2)));
}
Complex operator/(double r,Complex l)
{
        return Complex((r*(l.real))/(pow((l.real),2)+pow((l.image),2)),(-r*(l.image))/(pow((l.real),2)+pow((l.image),2)));
}
Complex Complex::operator++()
{
        real++;
        image++;
        return Complex(real,image);
}
Complex Complex::operator++(int)
{
        Complex temp=*this;
        real++;
        image++;
        return temp;
}
Complex Complex::operator--()
{
        real--;
        image--;
        return Complex(real,image);
}
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
    Complex a(1,2),b(3,4),c(1,3),d(2,4);
    d=a--;
    d.show();
    a.show();
    system("pause");
    return 0;
}
