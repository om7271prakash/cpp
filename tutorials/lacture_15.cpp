#include<iostream>

using namespace std;

class Complex{
  int a, b;
  public :
    void setNumber(int n1, int n2) {
      a = n1;
      b = n2;
    }
    void setComplexNumber(Complex o1, Complex o2){
      a = o1.a + o2.a;
      b = o1.b + o2.b;
    }
    void getNumber(void){
      cout<<"The value of Complex Number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
  Complex c1, c2, c3;
  c1.setNumber(3, 4);
  c1.getNumber();
  c2.setNumber(5, 6);
  c2.getNumber();
  c3.setComplexNumber(c1, c2);
  c3.getNumber();
  return 0;
}