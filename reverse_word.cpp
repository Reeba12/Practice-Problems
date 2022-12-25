#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    string str = "This is Hello world";
    reverse(str.begin(), str.end());

    str.insert(str.end(), ' ');
    int j = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            cout << str << endl;
            reverse(str.begin() + j, str.begin() + i);
            cout << str << endl;
            j = i + 1;
        }
    }
    str.pop_back();
    return 0;
}