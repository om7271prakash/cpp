/*
Reverse an array (2 pointer)
*/

#include<iostream>
using namespace std;

void swap(int &a, int &b){
  a = a - b;
  b = a + b;
  a = b - a;
}

void reverseArray(int arr[], int size){
  int start, end;
  start = 0, end = size-1;
  while( start<end ){
    swap(arr[start], arr[end]);
    start++; 
    end--;
  }
}

int main(){
  int size;
  cout << "Enter the size of an array: ";
  cin >> size;

  int arr[size];
  cout << "Enter the elements of array: ";
  for(int i=0; i<size; i++){
    cin >> arr[i];
  }

  cout << "Entered array is: ";
  for(int i=0; i<size; i++){
    cout << arr[i];
  }
  cout << endl;

  cout << "Reverse value of array is: ";
  reverseArray(arr, size);
  for(int i=0; i<size; i++){
    cout << arr[i];
  }
  cout << endl;

  return 0;
}