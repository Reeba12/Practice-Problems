#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool find_sum_of_two(vector<int>& A, int val,
  size_t start_index) {
  for (int i = start_index, j = A.size() - 1; i < j;) {
    int sum = A[i] + A[j];
    if (sum == val) {
      return true;
    }

    if (sum < val) {
      ++i;
    } else {
      --j;
    }
  }

  return false;
}
bool sumOfTwoInteger(vector<int>& arr, int total, int start)
{
    for (int i = start; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == total)
            {
                return true;
            }
        }
    }
    return false;
}

bool find_sum_of_three_v3(vector<int> arr,
  int required_sum) {

  sort(arr.begin(), arr.end());

  for (int i = 0; i < arr.size() - 2; ++i) {
    int remaining_sum = required_sum - arr[i];
    if (sumOfTwoInteger(arr, remaining_sum, i + 1)) {
      return true;
    }
  }

  return false;
}

int main(){
    vector<int> arr = {25, 10, 7, 3, 2, 4, 8, 10};
  
    cout<<"8: " <<find_sum_of_three_v3(arr, 8)<<endl; 
  
  
    return 0;
}
