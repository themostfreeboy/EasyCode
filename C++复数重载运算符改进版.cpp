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
             /*�˺���Ϊ��Ĭ�ϲ����Ĺ��캯����Ҳ������ת�����������ڽ���int/float/double��Complex�������ͼ���������ʱ(�����Ӽ��˳�)������˳��ϵͳ����ʽ���ô�����ת������������Complex���͵�ֵ���ݸ��˺����ĵ�һ���β�realset�����ڶ����β�ʹ��Ĭ�ϲ���imageset=0���˺���ʵ��������ת����������������Բ�ͬ����������Complex���к������أ������ϻ���main�������ϸ��д������Բ��ԣ��˷�ʽ��ȷ����*/ 
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
