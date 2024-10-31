#include<iostream>

using namespace std;

// Method Overloading
// Volume of cube
int volume(int a){
  return a * a * a;
}
// Volume of rectangular
int volume(int h, int w, int l){
  return h * w * l;
}

int main(){
  int a, h, w, l;

  cout<<"Enter the side of cube: ";
  cin>>a;
  cout<<endl<<"Enter the value of Height of rectangular: ";
  cin>>h;
  cout<<endl<<"Enter the value of Width of rectangular: ";
  cin>>w;ßß
  cout<<endl<<"Enter the value of Length of rectangular: ";
  cin>>l;

  cout<<"Volume of cube with side "<<a<<" is : "<<volume(a)<<endl;
  cout<<"Volume of rectangular box with height :"<<h<<", width: "<<w<<", length: "<<l<<" is : "<<volume(h, w, l)<<endl;
}