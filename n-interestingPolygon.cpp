#include <iostream>
#include <vector>
using namespace std;

int solution(int n) {
    int area=1;
    for(int i=1; i<=n; i++){
        area=((i*4)-4)+area;
    }
    return area;
}


int main(){;
int res= solution(5);
cout<<res;
}
