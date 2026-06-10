#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    cin.ignore();
    if(age>18){
        cout<<"You can vote"<<endl;
    }
    else{
        cout<<"You cannt vote!"<<endl;
    }
    return 0;
}