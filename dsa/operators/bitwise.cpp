/*

1. Bitwise AND -> & 
eg: 
0 & 0 = 0
0 & 1 = 0
1 & 0 = 0
1 & 1 = 1

2. Bitwise OR  -> |
eg: 
0 | 0 = 0
0 | 1 = 1
1 | 0 = 1
1 | 1 = 1

3. Bitwise XOR -> ^
eg: 
0 ^ 0 = 0
0 ^ 1 = 1
1 ^ 0 = 1
1 ^ 1 = 0

4. Bitwise left shift -> <<
eg:
1010 << 1   =  10100  (shift left by 1 place)

5. Bitwise right shift -> >> 
eg:
1010 >> 1   =  0101  (shift right by 1 place)

Find out if a number is power of 2 or not using bitwise operator
*/

#include<iostream>
using namespace std;

int main(){
  int a = 0;
  a = 1>>1;

  cout << a <<endl;
  return 0;
}