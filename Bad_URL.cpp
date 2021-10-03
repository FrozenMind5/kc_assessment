#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    //vector<string>vs;
    int sz=s.size();

    for(int i=0;i<=sz-1;i++)
    {
        if(s[i]=='/'&&s[i-1]=='/')
        {
            s.erase(s.begin()+i);
            i--;
        }
    }

    //string tmp="";
    cout << s << endl;
    return 0;
}
