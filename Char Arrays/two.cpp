#include <bits/stdc++.h>
using namespace std;
int getlength(char arr[]){
    int length = 0;
    int index = 0;
    int count = 0;
    while(arr[index++]!='\0'){
        length++;
    }
    return length;
}
int main() {
    char name[100] = "Vansh";
    char surname[100] = "Jain";
    char fullname[100];
    strcpy(fullname,name);
    strcat(fullname," ");
    strcat(fullname,surname);
    cout<<fullname<<endl;

    return 0;
}