#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    int x=s.length();
    char arr[x];
    int ctr=-1;
    for(int i=0;i<x;i++){
        if (s[i] == '[' || s[i] == '{' || s[i] == '(')
            arr[++ctr]=s[i];
        else if (s[i] == ']' && arr[ctr]=='[')
            ctr--;
        else if (s[i] == '}' && arr[ctr] == '{')
            ctr--;
        else if (s[i] == ')' && arr[ctr] == '(')
            ctr--;
        else
            return "NO";
    }
    if(ctr==-1)
        return "YES";
    else
        return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
