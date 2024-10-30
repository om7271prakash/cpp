#include<iostream>

using namespace std;

/*
  STRUCTURE
  UNION
  ENUM
*/ 

// Example 1 Structure;

// struct Student {
//   int rollNo;
//   float fee;
//   char fname;
// };

// Memory size is = int + float + char

// int main() {

//   struct Student om;
//   om.rollNo = 123;
//   om.fee = 456.45f;
//   om.fname = 'a';

//   cout<<"Om's roll number is "<<om.rollNo<<endl;
//   cout<<"Om's fee is "<<om.fee<<endl;
//   cout<<"Om's fname is "<<om.fname<<endl;
//   return 0;
// }


// Example 2 Structure;

// struct Employee {
//   int id;
//   float salary;
//   char favChar;
// } raju, ram;

// int main(){
//   raju.id = 123;
//   raju.favChar = 'a';
//   raju.salary = 2000.00f;

//   cout<<"Id of Raju is: "<<raju.id<<endl;
//   cout<<"Fav Char of Raju is: "<<raju.favChar<<endl;
//   cout<<"Salary of Raju is: "<<raju.salary<<endl;

//   ram.id = 456;
//   ram.favChar = 'b';
//   ram.salary = 3000.00f;

//   cout<<"Id of Ram is: "<<ram.id<<endl;
//   cout<<"Fav Char of Ram is: "<<ram.favChar<<endl;
//   cout<<"Salary of Ram is: "<<ram.salary<<endl;

//   return 0;
// }

// Example 1 Union;

// union choice {
//   float salary;
//   char bond;
// } raju, ram;

// // Memory size is = float || char

// int main(){
//   raju.salary = 3000.00f;
//   ram.bond = 'y';

//   cout<<"Raju has choosen salary: "<<raju.salary<<endl;
//   cout<<"Ram has choosen bond: "<<ram.bond<<endl;

//   return 0;
// }

// Example 1 Enum;

int main(){
  enum Meal {breakfast, lunch, dinner} raju, ram;

  raju = breakfast;
  ram = dinner;

  cout<<"Raju has choosen meal: "<<raju<<endl;
  cout<<"Ram has choosen meal: "<<ram<<endl;

  return 0;
}