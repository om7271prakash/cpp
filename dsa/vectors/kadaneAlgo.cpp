/*
Maximum subarray sum
*/

#include <iostream>
#include <vector>

using namespace std;

int max(int &curr_sum, int max_sum){
  if(curr_sum < 0){
    curr_sum = 0;
  }
  if(curr_sum < max_sum){
    return max_sum;
  }else{
    return curr_sum;
  }
}

int main(){
  int n = 5;
  int arr[5] = {-1,-2,-3,-4,-5};

  int max_sum = INT_MIN;

  for(int st=0; st<n; st++){
    int curr_sum = 0;
    for(int end=st; end<n; end++){
      curr_sum += arr[end];
      cout << "Current sum " << curr_sum;
      max_sum = max(curr_sum, max_sum);
      cout << ", max sum " << max_sum << endl;
    }
  }

  cout << "max subarray sum = " << max_sum << endl;
  return 0;
}