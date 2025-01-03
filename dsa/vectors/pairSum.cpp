/*
Pair Sum: Return in an array with target sum.
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum(vector<int>& nums, int target){
  vector<int> pair;
  for(int i=0; i<nums.size(); i++){
    for(int j=i; j<nums.size(); j++){
      if(nums[i] + nums[j] == target){
        pair.push_back(i);
        pair.push_back(j);
        return pair;
      }
    }
  }
  return pair;
}
vector<int> sortedPairSum(vector<int>& nums, int target){
  vector<int> pair;

  int i = 0, j = nums.size() - 1;

  while(i < j){
    if(nums[i] + nums[j] < target){
      i++;
    } else if(nums[i] + nums[j] > target){
      j--;
    } else {
      pair.push_back(i);
      pair.push_back(j);
      return pair;
    }
  }
  return pair;
}

int main(){
  int target = 13;
  vector<int> nums = {2, 8, 11, 15, 7};
  vector<int> sortedNums = {2, 3, 4, 5, 6, 7, 8, 9, 11, 15};
  
  vector<int> sum = pairSum(nums, target);
  cout << sum[0] << ", " << sum[1] << endl;

  vector<int> sortedSum = sortedPairSum(sortedNums, target);
  cout << sortedSum[0] << ", " << sortedSum[1] << endl;

  return 0;
}