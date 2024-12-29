/*
Find the unique value in an array
*/

#include<iostream>
using namespace std;

int main(){
  int size;
  cout << "Enter the size of an array: ";
  cin >> size;

  int arr[size];
  cout << "Enter the elements of an array: ";
  for(int i=0; i<size; i++){
    cin >> arr[i];
  }

  cout << "The elements of array are: ";
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  cout << "The unique elements of the array are: ";
  for(int i=0; i<size; i++){
    char isUnique = 'y';
    for(int j=0; j<size && isUnique == 'y'; j++){
      if(i != j && arr[i] == arr[j]){
        isUnique = 'n';
      }
    }
    if(isUnique == 'y'){
      cout << arr[i] << " ";
    }
  }
  cout << endl;

  return 0;
}