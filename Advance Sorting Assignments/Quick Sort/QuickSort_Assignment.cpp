#include<iostream>
using namespace std;
int main(){
    int arr[] = {3, 5, 6, 7, 11, 9, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int idx1 = -1;
    int idx2= -1;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            if(idx1 == -1) idx1 = i;
            else idx2 = i+1;
        }
        else idx2 = i+1;
    }
    swap(arr[idx1], arr[idx2]);
    for(int ele:arr) cout<<ele<<" ";
}