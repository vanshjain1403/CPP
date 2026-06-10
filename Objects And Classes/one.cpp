#include <bits/stdc++.h>
using namespace std;

class Student{
    public: 
    int age;
    int weight;
    int height;
    string name;

    void running(){
        cout<<"I am running"<<endl;
    }
    void studying(){
        cout<<"I am studying"<<endl;
    }

    Student(){
        cout<<"Constructor called\n";
        age = 25;
        weight  = 50;
        height = 2;
    }

    Student(int myage, int myweight, int myheight, string myname):age(myage),weight(myweight),height(myheight),name(myname){
        cout<<"Parameterized Constructor called\n";
       
    }

    ~Student(){
        cout<<"Destructor called\n";
    }
};


int main() {
Student s1;//1
s1.age = 50;
s1.weight = 70;
s1.running();

Student *s = new Student();//2
(*s).age = 70;

Student x;//3
Student y(22,75,155, "Vansh");//4

Student* s3 =  new Student(22,75,155, "Krunal");//5
cout<<s3->age<<endl;

delete s3;
    return 0;


}