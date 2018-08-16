// Link to problem : https://www.hackerrank.com/challenges/time-conversion/problem


#include <bits/stdc++.h>
#include<string>
using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    if(s.find("PM")!=string::npos){
        if(s[0]=='1'&&s[1]=='2');
        
        else {
            int i,j;
            i=s[0]-'0';
            j=s[1]-'0';
            i=i*10+j;
            i+=12;
            s[0]='0'+i/10;
            s[1]='0'+i%10;
        }
       s.erase(s.end()-2,s.end());
    }
    else if(s.find("AM")!=string::npos){
        if(s[0]=='1'&&s[1]=='2'){
            s[0]='0';
            s[1]='0';
        }
       s.erase(s.end()-2,s.end());
    }
            return s;

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
