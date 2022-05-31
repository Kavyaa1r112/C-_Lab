#include <iostream>
using namespace std;
class Student{
    private:
        int roll_number;
        string name;
        int score;
        string remarks;
    public:
        void getDetails(){
            cout<<"\nEnter roll number: ";
            cin>>roll_number;
            cout<<"\nEnter name: ";
            cin>>name;
            cout<<"\nEnter score: ";
            cin>>score;
            cout<<"\nEnter remarks: ";
            cin>>remarks;
        }
        void displayDetails(){
            cout<<"\nRoll number: "<<roll_number;
            cout<<"\nName: "<<name;
            cout<<"\nScore: "<<score;
            cout<<"\nRemarks: "<<remarks;
        }
};
int main()
{
    Student s;
    s.getDetails();
    s.displayDetails();


    return 0;
}

