#include<iostream>
#include<string>
using namespace std;

class student{

    private:
    string name;
    int rollno;
    float marks;

    public:

    void inputdetails(){
        cout<<"Enter your Name";
        getline(cin>>ws,name);
        cout<<"Enter your roll no";
        cin>>rollno;
        cout<<"Enter your marks";
        cin>>marks;

    }
    void displaydetails() const{

        cout<<"\n----Student Details----\n";
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no: "<<rollno<<endl;
        cout<<"Marls: "<<marks<<endl;

    }
};
int main(){
    student s;
    s.inputdetails();
    s.displaydetails();
    return 0;
}