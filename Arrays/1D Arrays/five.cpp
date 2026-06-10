#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,0,1,0,1,0,0,1,0,1,1,1,0,1,0,1,0,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i <size;i++){
        cout<<arr[i]<<" ";
        arr[i] = (arr[i]^1);
        cout<<arr[i]<<"   ";
    }
    return 0;
}