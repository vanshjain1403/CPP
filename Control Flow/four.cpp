#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter height: "<<endl;
    float height;
    cin>>height;
    cin.ignore();
    cout<<"Enter weight: "<<endl;
    float weight;
    cin>>weight;
    cin.ignore();
    if(height>5){
        if(weight>70){
            cout<<"GOOD BMI"<<endl;
        }
        else{
            cout<<"You soooo skinyyyy!!!"<<endl;
        }
    }
    else{
        cout<<"You need complan"<<endl;
    }
    return 0;
}