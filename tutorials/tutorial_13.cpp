// Read binary number and display
// OOPs - Classes and objects

// C++ --> initially called --> C with classes by Stroustroup
// class -> extension of structures (in c)
// structures had limitations
//   - members are public
//   - no methods

// classes -> structures + more
// classes -> can have methods and properties
// classes -> can make few members as private and few as public
// structures in c++ are typedefed
// you can declare objects along with class declaration like this:

/*
+class Employee{
  // class definition
} om, rama;
om.salary = 8000
*/

#include<iostream>
#include<string>

using namespace std;

class binary {
  // private :
    string s;
  public : 
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);
};

void binary :: read(void){
  cout<<"Enter a binary number"<<endl;
  cin>>s;
}

void binary :: chk_bin(void){
  cout<<s.length()<<endl;
  for(int i=0; i<s.length(); i++){
    cout<<s.at(i)<<endl;
    if(s.at(i) != '1' && s.at(i) != '0'){
      cout<<"Incorrect binary format"<<endl;
      exit(0);
    }
  }
}

void binary :: ones_complement(void){
  for(int i=0; i<s.length(); i++){
    if(s.at(i) == '0'){
      s.at(i) = '1';
    }else if(s.at(i) == '1'){
      s.at(i) = '0';
    }
  }
}

void binary :: display(void) {
  for(int i=0; i<s.length(); i++){
    cout<<s.at(i);
  }
  cout<<endl;
}

int main(){

  binary b;
  b.read();
  b.chk_bin();
  b.ones_complement();
  b.display();

  return 0;
}