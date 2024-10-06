#include<iostream>

using namespace std;

int main(){
  char a = 'a';
  int b = 3;
  float c = 3.14;
  float d = 3.14f;
  long double e = 3.14l;

  cout<<"Size of char is: "<<sizeof(a)<<" byte"<<endl;
  cout<<"Size of int is: "<<sizeof(b)<<" byte"<<endl;
  cout<<"Size of float is: "<<sizeof(c)<<" byte"<<endl;
  cout<<"Size of float flag is: "<<sizeof(d)<<" byte"<<endl;
  cout<<"Size of long is: "<<sizeof(e)<<" byte"<<endl;
}