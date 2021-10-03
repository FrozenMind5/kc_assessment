#include <bits/stdc++.h>
using namespace std;
int main()
{
        string num1;
        string num2;
        cin >> num1;
        cin >> num2;
        string s1;
        string s2;
        int sz1=num1.size();
        int sz2=num2.size();
        if(sz1>sz2)
        {
            s1=num1;
            int x=sz1-sz2;
            for(int i=1;i<=x;i++)                                     //equalize the string length adding 0's in front
            {
                s2=s2+"0";
            }
            s2=s2+num2;
        }
        else if(sz1<sz2)
        {
            s2=num2;
            int x=sz2-sz1;
            for(int i=1;i<=x;i++)                                      //equalize the string length adding 0's in front
            {
                s1=s1+"0";
            }
            s1=s1+num1;

        }
        else
        {
            s1=num1;
            s2=num2;
        }
        sz1=s1.size();
        sz2=s2.size();
        //cout << s1 << " " << s2 << endl;
        //cout << sz1 << " " << sz2 << endl;
        string ans="";
        int carr=0;
        for(int i=sz1-1;i>=0;i--)
        {
            int tmp1=s1.at(i)-48;
            int tmp2=s2.at(i)-48;
            int tmp3=tmp1+tmp2+carr;                                  //adding
            carr=tmp3/10;
            char ch= ((tmp3%10)+48);

            ans=ans+ch;

        }
        if(carr!=0)
        {
            ans=ans+char(carr+48);                                        //inserting the last carry
        }
        reverse(ans.begin(),ans.end());
        cout << ans << endl;
        return 0;
}
