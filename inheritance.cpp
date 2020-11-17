//A simple c++ program that is used to get and display information of company employee to demonstrate multiple inheritance
#include<iostream>
using namespace std;
class Company{ // Creating a class called Company
    protected:
        int HOD_ID;       // variables for head of the department details
        string HOD_Name; 
    public:
        void get_info(int i); 
        void display_info(int i);
};
class Manufacturing:protected Company{ //inheriting class "Company" by the class "Manufacturing"
    protected:
        int ID; // variables for the employement details
        string Name;
    public:
        void get_info(int  i );
        void display_info(int i);
};
class Packaging:protected Company{  //inheriting class "Company" by the class "Packaging"
    protected:
    int ID;
    string Name;

    public:
    void get_info(int i);
    void display_info(int i);

};     
void Manufacturing::get_info(int i){

    
    if ( i <= 0){ 
    cout << endl << "Enter Head ID:\t";
    cin >> HOD_ID;
    cout << endl << "Enter Head Name:\t";
    cin.ignore();
    getline(cin,HOD_Name);
    }else{
        cout << endl <<i;
    cout << endl << "Enter Employee ID:\t";
    cin >> ID;
    cout <<endl << "Enter Employee Name:\t";
    cin.ignore();
    getline(cin,Name);
    }
    
}

void Manufacturing::display_info(int i ){
   
    if ( i <= 0){

        cout <<endl << "HOD ID:\t"<<HOD_ID;
        cout << endl << "HOD NAME:\t"<<HOD_Name;

    }else{
        cout <<endl<<i;
        cout <<endl << "Employee ID:\t"<<ID;
        cout << endl << "Employee Name:\t"<<Name;
    }

}
void Packaging::get_info(int i){
    
    if ( i <= 0){
    cout <<endl << "Enter Head ID:\t";
    cin >> HOD_ID;
    cout << endl << "Enter Head Name:\t";
    cin.ignore();
    getline(cin,HOD_Name);
    
    }else{
    cout <<endl << i;
    cout << endl << "Enter Employee ID:\t";
    cin >> ID;
    cout << endl << "Enter Employee Name:\t";
    cin.ignore();
    getline(cin,Name);
    }
}


void Packaging::display_info(int i){
    
    if ( i <= 0){
    cout << endl << "HOD ID:\t"<< HOD_ID;
    cout <<endl << "HOD Name:\t"<<HOD_Name;
    
    }else{
        cout << endl << i;
    cout <<endl << "Employee ID:\t"<<ID;
    cout <<endl << "Employee Name:\t"<<Name;
    }
}

int main(void){
    class Manufacturing m[3]; //initating  3 objects for Manufacturing and Packaging class

    class Packaging p[3]; // Note: during inheritance objects of the derived class or the class that inherits other class is created
    int i;
    cout << endl << "\nManufacturing Department Info:\n";
    for (i = 0; i < 3;i++){ //Calling functions through loop
        m[i].get_info(i);
    }
    cout << endl << "\nPackaging Department Info:\n";
    for ( i = 0; i < 3 ; i++){
        p[i].get_info(i);
    }
     cout << endl <<"\nManufacturing Department:\n";
    for ( i = 0; i < 3 ;i++ ){
        m[i].display_info(i);
    }
      cout << endl << "\n Packaging Department:\n";
    for ( i = 0; i< 3;i++){
      
        p[i].display_info(i);
    }
    return 0;
}