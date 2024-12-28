/*
Find a given number in an given array
*/

#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int n){
  for(int i=0; i<size; i++){
    if(arr[i] == n){
      return i;
    }
  }
  return -1;
}

int main(){
  int size, n, index;
  cout << "Enter the size of an array: ";
  cin >> size;

  int arr[size];
  cout << "Enter the " << size << " elements of the array: ";
  for(int i=0; i<size; i++){
    cin >> arr[i];
  }
  cout << "Entered array is : [";
  for(int i=0; i<size; i++){
    cout << arr[i];
    if(i<size-1){
      cout << ", ";
    }
  }
  cout << "]" << endl;

  cout << "Enter the number to search in give given array: ";
  cin >> n;

  index = linearSearch(arr, size, n);

  if(index > -1){
    cout << n << " found in given array at position " << index+1 << endl;
  } else {
    cout << "Sorry, " << n << " is not found given array." << endl;
  }

  return 0;
}