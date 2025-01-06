#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="TUF is great for interview preparation";
    cout<<"Before reversing words: "<<endl;
    cout<<s<<endl;
    s+=" ";
    stack<string> st;
    int i;
    string str="";
    for(i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            st.push(str);
            str="";
        }
        else str+=s[i];
    }
    string ans="";
    while(st.size()!=1)
    {
        ans+=st.top()+" ";
        st.pop();
    }
    ans+=st.top();// The last word should'nt have a space after it
    cout<<"After reversing words: "<<endl;
    cout<<ans;
    return 0;
}

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        reverse(s.begin(), s.end());
        int i = 0, left = 0, right = 0;
        while( i < n ){
            while( i < n && s[i] == ' ' ){
                i++;
            }
            if( i == n ){
                break;
            }
            while( i < n && s[i] != ' ' ){
                s[right++] = s[i++];
            }
            reverse(s.begin() + left, s.begin() + right);
            s[right++] = ' ';
            left = right;
            i++;
        }
        s.resize(right - 1);
        return s;
    }
};
