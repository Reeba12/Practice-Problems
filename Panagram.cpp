#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s)
{
    // int check = 0;
    // sort(s.begin(), s.end());
    // for (int i = 0; i < s.size(); i++)
    // {
    //     putchar(tolower(s[i]));
    //     if (s[i] != s[i + 1])
    //     {
    //         check++;
    //     }
    // }

    // if (check >= 27)
    // {
    //     return "pangram";
    // }
    // else
    //     return "not pangram";
    
    // METHOD # 2 FOR ALL TEST CASES
    int count = 0;
    vector<bool> mark(26, false);
    int index;
    // Traverse all characters
    for (int i = 0; i < s.length(); i++)
    {
        // If uppercase character, subtract 'A'
        // to find index.
        if ('A' <= s[i] && s[i] <= 'Z')
        {
            index = s[i] - 'A';
            cout << index << endl;
        }
        // If lowercase character, subtract 'a'
        // to find index.
        else if ('a' <= s[i] && s[i] <= 'z')
        {
            index = s[i] - 'a';
            cout << index << endl;
        }
        mark[index] = true;
    }
    for (int i = 0; i <= 25; i++)
    {
        if (mark[i] == false)
        {
            count++;
        };
    }
    if (count)
    {
        return "not pangram";
    }
    else
        return "pangram";
}
int main()
{
    // ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);
    cout << result;
    // fout << result << "\n";

    // fout.close();

    return 0;
}
