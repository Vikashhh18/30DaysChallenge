// Class is a user define data type and a bluePrint of any object
// object is a real word instance 

#include<iostream>
using namespace std;

class Student{
    private: //it is a access modifier
    string name;
    int age;
    int roll_no;
    string grade;
    public:
    // getter and setter for get the data and set the data
    // void setName(string s){
    //     name=s;
    // }
    // void GetData(){
    //     cout<<name<<endl;
    // }
    void setAllData(string s,int a,int r,string g){
        name=s;
        age=a;
        roll_no=r;
        grade=g;
    }
    void displayData(){
        cout<<name<<" "<<age<<" "<<roll_no<<" "<<grade<<endl;
    }
    // login inside function with return statement
    string getGrade(int pin){
        if(pin==1234){
            return grade;
        }
        return "Invalid pin";
    }
};

int main(){
    Student person1;
    person1.setAllData("vicky",18,122,"c+");
    person1.displayData();
    // cout<<person1.getGrade(1234);  #use login 
    
    // person1.setName("vicky");
    // person1.GetData();
    // person1.name="vicky";       # we can't access like this in private or protected access on class
    // person1.age=13;
    // person1.roll_no=123;
    // person1.grade="A-";
    
    // cout<<person1.name<<" "<<person1.age<<" "<<person1.grade;
    // cout<<person1.name;
    return 0;
}