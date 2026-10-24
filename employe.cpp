#include<iostream>
#include<string>
using namespace std;

class employee{

    private:

    string name;
    int id;
    float salary;
    

    public:

    void inputdetails(){
        cout<<"Enter Employee name: ";
        getline(cin>>ws,name);
        cout<<"Enter Employee ID: ";
        cin>>id;
        cout<<"Enter Employee Salary: ";
        cin>>salary;

    }
    void displaydetails() const{

        cout<<"\n---- EMPLOYEE DETAILS ----\n";
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee ID: "<<id<<endl;
        cout<<"Employee Salary: "<<salary<<endl;

    }
};

int main(){
    employee e;
    e.inputdetails();
    e.displaydetails();
    return 0;
    
}
