#include <iostream>

using namespace std;

int main(){
  int maxSum = INT_MIN;
  int size = 6;
  // int arr[] = {-5, 4, 6, -3, 4, -1};
  int arr[] = {-2, -3, -4, -5, -6, -1};

  // Using simple method of sum of subarrays
  // for(int i=0; i<size; i++){
  //   int sum = 0;
  //   for(int j=i; j<size; j++){
  //     sum += arr[j];
  //     if(sum > maxSum){
  //       maxSum = sum;
  //     }
  //   }
  // }
  // cout << "Maximum sum or subarray is: " << maxSum << endl;

  // Using Kadane's Algorithm
  int sum = 0;
  for(int i=0; i<size; i++){
    sum += arr[i];
    cout << "max sum: " << sum << endl;
    if(sum > maxSum){
      maxSum = sum;
    }
    if(sum < 0){
      sum = 0;
    }
  }

  cout << "Maximum sum or subarray is: " << maxSum << endl;

  return 0;
}