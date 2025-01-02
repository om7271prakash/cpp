/*
Maximum subarray sum
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
  int size = 6;
  vector<int> vec = {-5, 4, 6, -3, 4, -1};

  int maxSum = INT_MIN;
  int sum = 0;

  for(int i=0; i<size; i++){
    sum += vec[i];
    if(sum > maxSum) {
      maxSum = sum;
    }
    if(sum < 0){
      sum = 0;
    }
  }

  cout << "max subarray sum = " << maxSum << endl;
  return 0;
}