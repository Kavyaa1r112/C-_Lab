#include<iostream>
using namespace std;
class stud
{
public: int rno;
char name[20];
int m1,m2,m3;
public:
void details()
{
cout<<"\nROLL_NO NAME MARKS THREE SUBJECT \n";
cin>>rno>>name>>m1>>m2>>m3;
}
void details(int nm)
{
cout<<"\nDetails of ONE student :\n";
cout<<"\nROLL_NO\tNAME\tMARK1\tMARK2\tMARK3 \n";
cout<<"=====================================\n" ;
cout<<nm<<"\t"<<name<<"\t"<<m1<<"\t"<<m2<<"\t"<<m3<<endl<<"\n\n";
}
void details(char*)
{
cout<<rno<<"\t"<<name<<"\t"<<m1<<"\t"<<m2<<"\t"<<m3<<endl;
}
};
int main()
{
int rn,i,n;
stud s[20];
cout<<"How many student inform: \n";
cin>>n;
for(i=0;i<n;i++)
{
s[i].details();
}
cout<<"Enter the roll number:\n ";
cin>>rn;
for(i=0;i<n;i++)
{
if(rn==s[i].rno)
{
s[i].details(rn);
}
}
cout<<"Details of all student: \n";
cout<<"ROLL_NO\tNAME\tMARK1\tMARK2\tMARK3 \n\n";
cout<<"=====================================\n";
for(i=0;i<n;i++)
{
s[i].details(s[i].name);
}
return 0;
}
