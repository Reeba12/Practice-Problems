#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string newStr=s.substr(s.length() - 2);
    if (newStr=="AM") {
        string h=s.substr(0,2);
        if(h=="12"){
         h="00";
        string newTime= h.append(s.substr(2,6));
         return newTime;
        }
        else {
        return s.substr(0,s.length()-2);
        }
    }else {
    string h=s.substr(0,2);
        if(h=="12"){
         return s.substr(0,s.length()-2);
        }
        string hh=s.substr(0,2);
        int hour=stoi(h);
            int newhr=hour+12;
            string strh=to_string(newhr);
            string newTime= strh.append(s.substr(2,6));
            return newTime;
    }
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
