#include <iostream>
#include <cmath>

using namespace std;
int centuryFromYear(int year){
    return floor(year/100)+((year%100)?1:0);
}

int main(){
    int year;
   int result= centuryFromYear(1700);
   cout<<result;
    return 0;
}