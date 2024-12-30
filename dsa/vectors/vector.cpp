/*
Basic Vector program
*/

/*
  Vector functions list
  1. vector.size()
  2. vector.push_back(<element>);
  3. vector.pop_back();
  4. vector.front();
  5. vector.back();
  6. vector.at(<position/index>)
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> vec = {1, 2, 3};
  cout << "Size of vector initial: " << vec.size() << endl;
  vec.pop_back();
  cout << "Elements of vector are: " << endl;
  vec.push_back(5);
  vec.push_back(9);
  vec.push_back(7);
  for(int val : vec){ // foreach loop on vector
    cout << val << endl;
  }
  cout << "Start element of vector is: " << vec.front() << endl; 
  cout << "End element of vector is: " << vec.back() << endl; 
  cout << "4th element of vector is: " << vec.at(3) << endl; 

  return 0;
}