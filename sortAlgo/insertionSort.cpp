#include <iostream>
#include <algorithm>
using namespace std;
// consider 1st element as sorted element 
// initialize key as 2nd element of array
// compare key with all previous elements and 
// *** After every i increment, element will reached at its correct position from start
// for i=1, j=0 and key=12
// 12,11,13,11,5,6

// for i=1, j=1 and key=11
// 12,11,13,11,5,6
// 12,13,11,11,5,6

int main(){
    int arr[]={12,11,13,11,5,6 };
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int i = 1; i <size; i++){
        int key=arr[i];
        int j=i-1;
        while(arr[j]>key && j>=0){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            j--;
        }
        arr[j+1]=key;
    }
    // print sorted array
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<",";
    }
    return 0;
}