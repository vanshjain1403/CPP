#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your aage: ";
    cin>>age;
    cin.ignore();
    switch(age){
        case 18:
            cout<<"HEYYY LAST YEAR OF TEENAGE!";
            break;
        default:
            cout<<"Have fun in life"<<endl;
    }
    return 0;
}