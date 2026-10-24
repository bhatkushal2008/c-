#include<iostream>
#include<string>
using namespace std;

class book{

    private:
    string bookname;
    int bookid;
    float price;

    public:
    void inputdetails(){

        cout<<"Enter Book name: ";
        getline(cin>>ws,bookname);
        cout<<"Enter Book ID: ";
        cin>>bookid;
        cout<<"Enter book price: ";
        cin>>price;

    }
    void displaydetails() const{

    cout<<"\n-----BOOK DETAILS----\n";
    cout<<"Book name: "<<bookname<<endl;
    cout<<"Book ID: "<<bookid<<endl;
    cout<<"Book Cost: "<<price<<endl;
    cout<<"End Of Details"<<endl;
    }
};
int main(){
book b;
b.inputdetails();
b.displaydetails();
return 0;
}
