#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<vector<int>> matrix={
        {5,4,3,9},
        {2,0,7,6},
        {1,3,4,0},
        {9,8,3,4},
    };
    vector<int> row;
    vector<int> col;
    int m=matrix.size();
    int n=matrix[0].size();
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j]==0){
                row.push_back(i);
                col.push_back(j);
            }
        }
    }
   
      for(int a = 0; a < m; a++)
  {
    for(int b = 0; b < m; b++)
    {
        if(std::count(begin(row), end(row), a) || std::count(begin(col), end(col), b))
      matrix[a][b]=0;
    }
  } 
    for(int a = 0; a < m; a++)
  {
    for(int b = 0; b < m; b++)
    {
      cout << matrix[a][b] << " ";
    }
    cout << endl;
  } 
    return 0;
}