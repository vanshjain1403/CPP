#include <bits/stdc++.h>
using namespace std;

int getmultiplication(int x,int y, int z){
    return x*y*z;
}

void printname10times(){
    int i = 1;
    while(i<=10){
        cout<<"Vansh"<<endl;
        i++;
    }
}

void printmultiples(int num){
    for(int i = 1; i <=10; i++){
        cout<<num*i<<endl;
    }
}

int fartocel(int far){
    int celcius = (far-32)*(5.0/9.0);
    return celcius;
}

char converttoUppercase(char ch){
    char answer = ch-'a'+'A';
    return answer;
}
int main() {
    cout<<getmultiplication(5,6,9)<<endl;
    printname10times();
    printmultiples(8);
    cout<<fartocel(200)<<endl;
    cout<<converttoUppercase('s')<<endl;
    return 0;
}