#include<iostream>
#include<algorithm>

using namespace std;

class student{
private:
    string student_name;
    long long int student_rollNo; 
    int student_age;
public:
    string getstudent_name(){
        return student_name;
    }
    void setstudentname(string student_name){
        this -> student_name=student_name;
    }

    long long int getstudent_rollNo(){
        return student_rollNo;
    }
    void setstudentrollNo(long long int student_rollNo){ 
        this->student_rollNo=student_rollNo;    
    }

    int getstudent_age(){
        return student_age;
    }
    void setstudentage(int student_age){
        this->student_age=student_age;
    }
}; 

int main()
{
    student obj;
    obj.setstudentname("Pragat Mittal");
    obj.setstudentage(19);
    obj.setstudentrollNo(2310990933);
    cout<<"Student Name : "<<obj.getstudent_name()<<endl;
    cout<<"Student Age : "<<obj.getstudent_age()<<endl;
    cout<<"Student Roll Number : "<<obj.getstudent_rollNo()<<endl;

    return 0;
}