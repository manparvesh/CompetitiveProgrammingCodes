#include <bits/stdc++.h>
using namespace std;

int arr[1000];

int main(){
    arr[0] = 1;
    arr[1] = 1;
    for (int i=2; i<=1000; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    for (int i=0; i<16; i++){
        cout<<arr[i]<<"\n";
    }
}
