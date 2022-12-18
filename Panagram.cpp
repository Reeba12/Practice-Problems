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
    int check = 0;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        putchar(tolower(s[i]));
        if (s[i] != s[i + 1])
        {
            check++;
        }
    }

    if (check >= 27)
    {
        return "pangram";
    }
    else
        return "not pangram";
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
