#include <iostream>
#include <vector>
using namespace std;
int solution(vector<int> inputArray) {
    int maxProduct=0;
for (int i=0; i<inputArray.size()-1; i++) {
        if(inputArray[i]*inputArray[i+1]>maxProduct){
            maxProduct=inputArray[i]*inputArray[i+1];
    }   
}
return maxProduct;
}

int main(){
 vector<int> inputArray = {3, 6, -2, -5, 7, 3};
int res= solution(inputArray);
cout<<res;
}
