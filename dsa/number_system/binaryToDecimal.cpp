/*
  Binary to decimal
*/

#include<iostream>
using namespace std;

int main(){
  int n, power=1, reminder, decimalNumber=0;

  cout<<"Enter the binary number: ";
  cin>>n;

  while(n>0){
    reminder = n%10;
    n = n/10;
    decimalNumber += reminder * power;
    power *= 2;
  }
  cout<<"The value of decimal number is: "<<decimalNumber<<endl;

  return 0;
}