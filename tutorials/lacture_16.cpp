#include<iostream>

using namespace std;

class Complex{
  int a, b;
  public :
    // Friend function
    friend Complex sumComplex(Complex o1, Complex o2);
    void setValue(int n1, int n2){
      a = n1;
      b = n2;
    }
    void getValue(void){
      cout<<"The value of Complex Number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

// Foreign Function
Complex sumComplex(Complex o1, Complex o2){
  Complex o3;
  o3.setValue((o1.a + o2.a), (o1.b + o2.b));
  return o3;
};

int main(){
  Complex c1, c2, c3;
  c1.setValue(3, 5);
  c1.getValue();
  
  c2.setValue(4, 6);
  c2.getValue();

  c3 = sumComplex(c1, c2);
  c3.getValue();

  return 0;
}

/*
Properties of friend function

1. Not in the scope of class
2. since it is not in the scope of the class, 
    it cannot be called from the object of that class.
3. Can be invoked without the help of any object.
4. Usually  contains the object as arguments.
5. Can be declared inside public or private section of the class.
6. It cannot access the members directly by their names and need object_name.member_name.
*/