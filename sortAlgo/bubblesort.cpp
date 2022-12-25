#include <iostream>
#include <algorithm>
using namespace std;
// check first element with next one element 
// if first element is greater than next max_element
// swap first element with next
// *** After every pass last element will reached at its correct position
// for i=0 and j=7
// 35, 50 ,15, 25, 80, 20, 90,45
// 35, 50 ,15, 25, 80, 20, 90,45
// 35, 15 ,50, 25, 80, 20, 90,45
// 35, 15 ,25, 50, 80, 20, 90,45
// 35, 15 ,25, 50, 80, 20, 90,45
// 35, 15 ,25, 50, 20, 80, 90,45
// 35, 15 ,25, 50, 20, 80, 45,90

// for i=1 and j=6
// 35, 15 ,25, 50, 20, 80, 45,90
// 15, 35 ,25, 50, 20, 80, 45,90 
// 15, 25 ,35, 50, 20, 80, 45,90 
// 15, 25 ,50, 35, 20, 80, 45,90 
// 15, 25 ,50, 20, 35, 80, 45,90 
// 15, 25 ,50, 20, 35, 45, 80,90 

// for i=2 and j=5
// 15, 25 ,50, 20, 35, 45, 80,90 
// 15, 25 ,50, 20, 35, 45, 80,90 
// 15, 25 ,20, 50, 35, 45, 80,90 
// 15, 25 ,20, 35, 50, 45, 80,90 
// 15, 25 ,20, 35, 45, 50, 80,90 

// for i=3 and j=4
// 15, 25 ,20, 35, 45, 50, 80,90 
// 15, 25 ,20, 35, 45, 50, 80,90 
// 15, 20 ,25, 35, 45, 50, 80,90 
// 15, 20 ,25, 35, 45, 50, 80,90 

int main(){
    int arr[]={35, 50 ,15, 25, 80, 20, 90,45};
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size-1; i++)
    {
         for (int j = 0; j < size - i - 1; j++)
         {
            if (arr[j] > arr[j + 1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }  
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<",";
    }
    
    
}