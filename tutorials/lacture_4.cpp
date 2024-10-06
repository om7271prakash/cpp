#include<iostream>
using namespace std;

int main(){
  int num1, num2;
  cout<<"Enter the value of number 1: \n"; 
  // '<<' is known as Insertion Operator
  cin>>num1;
  // '>>' is known as Extraction Operator
  cout<< "Enter the value of number 2: \n";
  cin>>num2;
  cout<<"Sum: "<<num1+num2<<"\n";

  return 0;
}