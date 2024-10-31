#include<iostream>

using namespace std;
// Recursion

int factorial(int a){
  if(a<=1){
    return 1;
  }
  // fact(0) = 1;
  // fact(1) = 1;
  // fact(2) = 2 * fact(1) = 2*1 = 2;
  // fact(3) = 3 * fact(2) = 3 * 2 * fact(1) = 3*2*1 = 6;
  return a * factorial(a-1);
}

int fibonacci(int a){
  if(a<=1){
    return a;
  }
  // Where all n >= 0;
  // fib(0) = 0;
  // fib(1) = 1;
  // fib(2) = fib(0) + fib(1) = 1
  // fib(3) = fib(1) + fib(2) = 1 + fib(0) + fib(1) = 1 + 0 + 1 = 2;
  return fibonacci(a-2) + fibonacci(a-1);
} 

int main(){

  int a;
  // Factorial
  cout<<"Enter the value of a : ";
  cin>>a;
  cout<<"Factorial of "<<a<<" is : "<<factorial(a)<<endl;

  // Fibonacci
  cout<<"Enter the nth number for Fibonacci series : ";
  cin>>a;
  cout<<"The value nth number of Fibonacci series : "<<fibonacci(a)<<endl;

  return 0;
}