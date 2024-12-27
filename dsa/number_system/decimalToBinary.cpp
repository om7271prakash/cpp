/*
  Decimal to Binary conversion
*/

#include<iostream>
using namespace std;

int main(){
  int n, reminder, power = 1, binaryNumber=0;
  cout<<"Enter the decimal number: ";
  cin>>n;

  while(n>0){
    reminder = n%2;
    n = n/2;
    binaryNumber += reminder * power;
    power *= 10;
  }
  cout<<"The binary number is: "<<binaryNumber<<endl;

  return 0;
}