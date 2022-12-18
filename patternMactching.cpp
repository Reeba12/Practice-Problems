#include "iostream"
using namespace std;
int main()
{
    //     *
    //    **
    //   ***
    //  ****
    // *****
    int n=5;
    for (int i = 1; i <=n; i++) {
       for (int j = 1; j<=n; j++) {
           if(j<=n-i){
               cout<<" ";
           }else cout<<"*";
       }
       cout<<endl;
    }
    // 1
    // 22
    // 333
    // 4444
    // 55555
    for (int i = 1; i <=n; i++) {
        for (int j = 1; j<=i; j++) {
          cout<<i;
       }
       cout<<endl;
    }
    // *****
    // ****
    // ***
    // **
    // *
    for (int i = n; i >=1; i--) {
        for (int j = 1; j<=i; j++) {
          cout<<"*";
       }
       cout<<endl;
    }
    // 1
    // 23
    // 456
    // 78910
    // 1112131415
    int count=1;
     for (int i = 1; i <=n; i++) {
        for (int j = 1; j<=i; j++) {
          cout<<count;
          count++;
       }
       cout<<endl;
    }
    return 0;
}

