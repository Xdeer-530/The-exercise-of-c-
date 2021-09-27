#include<iostream>
#include<string.h>

using namespace std;

class Student{
    private:
        string name;
        int studentnum;
        string sex;
        int age;
    public:
        Student();
        void display();
};
Student::Student(){
    name="Xiaoming";
    studentnum=20011543;
    sex="female";
    age=12;
}
void Student::display(){
    cout<<"name:"<<name<<endl;
    cout<<"student number:"<<studentnum<<endl;
    cout<<"sex:"<<sex<<endl;
    cout<<"age:"<<age<<endl;
}

int main(){
    Student s1;
    s1.display();
    return 0;
}