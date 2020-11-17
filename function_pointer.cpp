// A program to demonstrate the use of function pointer
#include<iostream>
using namespace std;
void greatest_number(int a,int b); //function declaration for findind greatest number
void(*fptr)(int a,int b); //function pointer declaration
int main(void){
    int x,y;
    fptr = &greatest_number; //passing function greatest_number() address to the function pointer
    cout << "Enter a number:\t";
    cin >> x;
    cout << "Enter another number:\t";
    cin >> y;
    (fptr)(x,y);//calling function greatest_number through the function pointer fptr
    return 0;

}
void greatest_number(int a,int b){ // function defination for finding the greatest number
    int c;
    c = a + b;
    cout << "The sum of the numbers is:\t"<<c;
}