#include<iostream>
using namespace std;

int main(){
    int budget;
    cout<<"Enter your budget: ";
    cin>>budget;
    cin.ignore();
    if(budget>2000000){
        cout<<"You can buy scorpio!"<<endl;
    }
    else{
        cout<<"NAAH BROO!"<<endl;
    }
    return 0;
}