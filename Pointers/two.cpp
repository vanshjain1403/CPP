#include <bits/stdc++.h>
using namespace std;

int main() {
    int number = 50;
    cout<<"printimg adress of number: "<<&number<<endl; 
    int *ptr = &number;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
    return 0;

}