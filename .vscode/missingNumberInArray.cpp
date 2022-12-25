#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solution(vector<int> statues) {
     int statuesNeeded = 0;
  sort(statues.begin(),statues.end());
    // Iterate through array and find gaps in values
    for(int i = 0; i < statues.size(); i++) {
        if(statues[i + 1] - statues[i] > 1) {
            statuesNeeded += statues[i + 1] - statues[i] - 1;
        }
    }
    return statuesNeeded;
}


int main(){
 vector<int> inputArray = {6, 2, 3, 8};
int res= solution(inputArray);
cout<<res;
}
