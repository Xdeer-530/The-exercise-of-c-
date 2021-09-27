#include<iostream>

using namespace std;

class Student{
    private:
    int num;
    int score;
    public:
    void max(Student *a,int n);
    Student(int n,int s):num(n),score(s){}
};
void Student::max(Student *a,int n){
    int tmp=a->score;
    int tmpt=a->num;
    Student *b=a;
    for(;b<a+n;b++){
        if(b->score<tmp){
            tmp=b->score;
            tmpt=b->num;
        }
    }
    cout<<"The highest grade"<<tmp<<endl;
    cout<<"SchoolNum"<<tmpt<<endl;
}
int main(){
    Student stud[5]={
        Student(1,95),
        Student(2,90),
        Student(3,80),
        Student(4,98),
        Student(5,97)
    };
    Student *temp=stud;
    temp->max(stud,5);

    return 0;
}