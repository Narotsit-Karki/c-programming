/* Program to overload insertion , excertion and binary operator */
#include<iostream>
using namespace std;

class Complex{ //Creating a class named Complex
	private:
		int real; // Two private data members called real and img 
		int img;
	public:
		friend istream & operator >>(istream &in,Complex &c); // Function declaration for excertion operator overloading(Friend function
		friend ostream & operator <<(ostream &out,Complex &c); // Function declaration for insertion operator overloading
		friend Complex operator +(Complex c1,Complex c2); // Function defination for overloadin binary operator '+' 
};

istream & operator >>(istream &in,Complex &c){ 
	cout << " [+] Enter the real part: ";
	in >> c.real;
	cout << "[+] Enter the imaginary part(only the number): ";
	in >> c.img;
	return in;
}
ostream & operator <<(ostream &out ,Complex &c){
	out << c.real << " + " << c.img << "i ";
	return out ;
}

Complex operator +(Complex c1,Complex c2){
	Complex temp; //Creating a temporary object to store added result
	temp.real = c1.real + c2.real;
	temp.img = c1.img + c2.img;
	return temp; //returning object temp
}

int main(void){
	Complex c1,c2,c3;
	cout << "[*] Enter First Complex number: \n";
	cin >> c1; // Function overload for excertion operator called
	cout << endl << "[*] Enter Second Complex number: \n";
	cin >> c2; //Function overload for excertion operator called
	c3 = c1 + c2; //binary operator '+' overload function called
	cout << "Sum: " << c1  << " + " << c2 << " = " << c3; //Function overload for insertion operator called
	return 0;
}

