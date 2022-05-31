#include <iostream>
#include <string>
using namespace std;
class course{
   public:
   int course_id;
   string course_name;
   int Course_Duration;
   
   void read_CourseInfo();
   void print_CourseInfo() {
      cout<<"\n Course ID : "<<course_id<<endl;
      cout<<"Course name : "<<course_name<<endl;
      cout<<"Course Duration : "<<Course_Duration;
   }
};
void course::read_CourseInfo(){
   cout<<"Enter Course Id :"; cin>>course_id;
   cout<<"\nEnter Course_name :"; cin>>course_name;
   cout<<"\nEnter Course_Duration :"; cin>>Course_Duration;
}
  
int main()
{
   course c1;
   c1.read_CourseInfo();
   c1.print_CourseInfo();
}
