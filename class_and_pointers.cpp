#include<iostream>
using namespace std;

class A{
	private:
		int n;
	public:
		void get(){
			cout <<endl<< "Enter a number:\t";
			cin >> n;
		}
		void display(){
			cout << endl << "Num:\t" << n;
		}
		friend void display_num(A *ptr);
};

void display_num(A *ptr){
	int sum = 0;
	for ( int i = 0; i < 3; i++){
		sum += ptr->n;
		++ptr;
	}
	cout << endl << "Sum:\t" << sum;
}
		
int main(){
	A a[3];
	A *ptr;
	ptr = &a[0];
	for ( int i = 0 ; i < 3; i++){
		ptr->get();
		++ptr;
	}
	ptr = &a[0];
	for ( int i = 0; i < 3;i++){
		ptr->display();
		++ptr;
	}
	ptr = &a[0];
	display_num(ptr);

	return 0;
}


