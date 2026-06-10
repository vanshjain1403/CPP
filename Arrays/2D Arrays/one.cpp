#include <bits/stdc++.h>
using namespace std;
void printarr(int arr[][4], int rowsize, int columnsize);
int main() {
    int arr[3][4] = {
        {1,2,3,4},{5,6,7,8},{9,10,11,12}
    };
    printarr(arr,3,4);
    return 0;
}
void printarr(int arr[][4], int rowsize, int columnsize){
    for(int i = 0; i <rowsize;i++){
        for(int j = 0; j<columnsize; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}