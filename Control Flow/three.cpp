#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    cin.ignore();
    cout<<"***GRADE CALCULATOR***"<<endl;

    if(marks>85){
        cout<<"O grade"<<endl;
    }
    else if(marks>75){
        cout<<"A grade"<<endl;
    }
    else if(marks>65){
        cout<<"B grade"<<endl;
    }
    else if(marks>55){
        cout<<"C grade"<<endl;
    }
    else if(marks>45){
        cout<<"D grade"<<endl;
    }
    else if(marks>33){
        cout<<"E grade"<<endl;
    }
    else{
        cout<<"FAILED"<<endl;
    }
    return 0;

}