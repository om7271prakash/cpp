/*
Find the Frequency of number how many times particular element has exists
in given vector.
*/

#include <iostream>
#include <vector>

using namespace std;

void bruteForce(vector<int>& nums){
  int mj = nums.size()/2, frequency;

  for(int i=0; i<nums.size(); i++){
    frequency = 0;
    for(int j=i; j<nums.size(); j++){
      if(nums[i] == nums[j]){
        frequency++;
      }
    }
    if(frequency > mj){
      cout << "Frequency of " << nums[i] << " is: " << frequency << endl;
    }
  }
}

// Using sorted vector
void optimized(vector<int>& nums){
  sort(nums.begin(), nums.end());
  int frequency = 1, mj = nums.size()/2;

  for(int i=0; i<nums.size()-1; i++){
    if(nums[i] == nums[i+1]){
      frequency++;
    }else{
      frequency = 1;
    }
    if(frequency > mj){
      cout << "Frequency of " << nums[i] << " is: " << frequency << endl;
      return;
    }
  }
  return;
}

// Moore's Voting Algorithm
void moores(vector<int>& nums){
  int frequency = 0, ans = 0;

  for(int i=0; i<nums.size(); i++){
    if(frequency == 0){
      ans = nums[i];
    }
    if(ans == nums[i]){
      frequency++;
    } else {
      frequency--;
    }
  }

  cout << "Highest frequency element is: " << ans <<endl;
}

int main(){
  vector<int> nums = {1, 1, 3, 4, 3, 2, 2, 1, 1, 1, 1};
  
  // bruteForce(nums);
  // optimized(nums);
  moores(nums);


  return 0;
}