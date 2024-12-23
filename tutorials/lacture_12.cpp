// classes

#include<iostream>
#include<string>

using namespace std;

class Pet {
  private:
    string petName;
  public:
    string getName(void);
    void setName(string);
};

void Pet::setName(string name){
  petName = name; 
}

string Pet::getName(){
  return petName;
}

int main(){
  Pet dog;
  dog.setName("Bruno");
  cout<<"The name of the dog is: "<<dog.getName()<<endl;
  
  return 0;
}