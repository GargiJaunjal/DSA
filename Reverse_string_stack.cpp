#include<iostream>
#include<stack>
using namespace std;
string reverse(string str)
{
    stack<char>st;
    for(int i=0;i<str.length();i++)
    {
        st.push(str[i]);
    }
    string reversed=" ";
    while(!st.empty())
    {
        reversed+=st.top();
        st.pop();
    }
    return reversed;
}
int main()
{
    string str;
    cout<<"Enter the string\n";
    cin>>str;
    
    string rev=reverse(str);
    cout<<"Reversed string is:"<<rev<<endl;
    return 0;
}