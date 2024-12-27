/*
Q. Calculate nCr Binomial Coefficient for n & r
eg. 6C3
6!/3!*(6-3)! = 20
*/

#include<iostream>
using namespace std;

int factorial(int n){
  int fact = 1;
  while(n>0){
    fact *= n;
    n--;
  }
  return fact;
}

int main(){
  int n, r, nFactorial, rFactorial, nMinusRFactorial, nCrBinomial;

  cout<<"Enter the value of n: ";
  cin>>n;
  cout<<"Enter the value of r: ";
  cin>>r;

  nFactorial = factorial(n);
  rFactorial = factorial(r);
  nMinusRFactorial = factorial(n-r);

  nCrBinomial = nFactorial/(rFactorial*nMinusRFactorial);

  cout<<"The value of nCr Binomial Coefficient is: "<<nCrBinomial<<endl;
  

  return 0;
}