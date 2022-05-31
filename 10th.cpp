#include <iostream>
//include fstream for file oprations
#include <fstream>
 
using namespace std;
 
int main()
{
  fstream file; //object of fstream class
    
  //open file "test.txt" in out(write) mode
  // ios::out Open for output operations.
  file.open("test.txt",ios::out);
    
  //If file is not created, return error
  if(!file){
    cout<<"Error in file creation!";
    return 0;
  }else{ //File is created
    cout<<"File Creation successfull.";
  }
  //closing the file
  file.close();
    
  return 0;
}
