#include<iostream>
using namespace std;
class Company{
    protected:
        int HOD_ID;
        string HOD_Name;
    public:
        void get_info(int i);
        void display_info(int i);
};
class Manufacturing:protected Company{
    protected:
        int ID;
        string Name;
    public:
        void get_info(int  i );
        void display_info(int i);
};
class Packaging:protected Company{
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
    class Manufacturing m[3];
    class Packaging p[3];
    int i;
    cout << endl << "\nManufacturing Department Info:\n";
    for (i = 0; i < 3;i++){
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