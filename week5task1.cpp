#include <iostream>
using namespace std;

int addTwoNumbers(int a, int b){
    return a + b;
}

int main(){

  int num1, num2;
    
   num1 = 6;
   num2 = 7;
   cout << "The sum of " << num1 << " and " << num2 << " is " <<  addTwoNumbers(num1, num2) << endl;
    
    num1 = 9;
    num2 = -16;
    cout << "The sum of " << num1 << " and " << num2 << " is " << addTwoNumbers(num1, num2) << endl;
    
    num1 = 222;
    num2 = 333;
    cout << "The sum of " << num1 << " and " << num2 << " is " << addTwoNumbers(num1, num2) << endl;
    
    return 0;
}