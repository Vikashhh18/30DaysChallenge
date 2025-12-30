
#include <iostream>
using namespace std;

class Employee{
    public:
    string name;
    int emp_no;
    int salary;
    string location;
    
    // Constructor is called when object is craetion and it is default constructor
    Employee(){
        cout<<"Constructor is called"<<endl;  
        name="";
        emp_no=0;
        salary=0;
        location="none";
    }
    
    // it is parametrized constructor in that when object is create we give equal number
    // of argument that in constructor
    Employee(string n,int no,int s,string l){
        cout<<"Now constructor 2 is callled"<<endl;
        name=n;
        emp_no=no;
        salary=s;
        location=l;
    }
    
    // in this constructor when we have same name as same variable name then we use 
    // this keyword is used for when object is create then they point to that object address
    Employee(string name,int salary,string location){
        cout<<"now constructor 3 is called "<<endl;
        this->name=name;
        this->salary=salary;
        this->location=location;
        emp_no=102;
    }
    
    // this is copy constructor 
    Employee(Employee & a){
        cout<<"now constructor 4 is called "<<endl;
        this->name=a.name;
        this->salary=a.salary;
        this->emp_no=a.emp_no;
        this->location = a.location;
    }
    
    void displayData(){
        cout<<name<<" "<<emp_no<<" "<<salary<<" "<<location<<endl;
    }
    
    // distructor is used to freeze out the memory if u can't do manually it automatically invoked end of everything
    
    ~Employee(){
        cout<<"Now destructor is called"<<endl;
    }
};


int main()
{
//   Employee Em1;  
  Employee Em2("vicky",13,1234,"delhi"); 
//   Employee Em3("vicky",1234,"delhi"); 
  Employee Em4=Em2;
  Em4.displayData();
}
