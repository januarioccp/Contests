#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long count = 0;
    if(n <= s.size()){
        for(int i=0; i <n; i++)
            if(s[i]=='a')
                count++;
    }else{
        for(int i=0; i < s.size(); i++)
            if(s[i]=='a')
                count++;
        count = n / s.size() * count;
        for(int i=0; i < n % s.size(); i++)
            if(s[i]=='a')
                count++;
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
