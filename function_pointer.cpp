#include<iostream>
using namespace std;
void greatest_number(int a,int b);
void(*fptr)(int a,int b);
int main(void){
    int x,y;
    fptr = &greatest_number;
    cout << "Enter a number:\t";
    cin >> x;
    cout << "Enter another number:\t";
    cin >> y;
    (fptr)(x,y);
    return 0;

}
void greatest_number(int a,int b){
    int c;
    c = a + b;
    cout << "The sum of the numbers is:\t"<<c;
}