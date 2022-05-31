#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class student
{
int rno,ns;
char name[20];
int *m;
public:
student(int no,char *nm,int nos)
{
rno=no;
strcpy(name,nm);
ns=nos;
m=new int[ns];
}
void get();
void disp();
};
void student::get()
{
for(int i=0;i<ns;i++)
{
cout<<"\n\nEnter the subject "<<i+1<<" Marks: = " ;
cin>>m[i];
}
}
void student::disp()
{
cout<<"\nStudent Information: \n";
cout<<"\n\nRoll no: "<<rno;
cout<<"\n\nName: "<<name;
for(int i=0;i<ns;i++)
{
cout<<"\n\nMarks of "<<i+1<<" Subject: =  "<<m[i];
}
}
int main()
{
int no,nos;
char nm[20];
cout<<"\nEnter roll no:=  ";
cin>>no;
cout<<"\nEnter Name :  ";
cin>>nm;
cout<<"Enter Total Subjects : = ";
cin>>nos;
student st(no,nm,nos);
st.get();
st.disp();
getch();
}
