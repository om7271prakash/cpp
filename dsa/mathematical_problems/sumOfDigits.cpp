/*
Q. Find sum of the give digits
eg: 1456 -> 1+4+5+6 = 16
*/

#include<iostream>
using namespace std;

int main(){
  int sumOfDigits = 0, n;
  cout<<"Enter the number: ";
  cin>>n;
  while(n>0){
    int lastDigit = n%10;
    n = n/10;
    sumOfDigits += lastDigit;
  }
  cout<<"Sum of digits is: "<<sumOfDigits<<endl;
  return 0;
}