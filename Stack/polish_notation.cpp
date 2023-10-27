

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // input array of string
    string arr[] = {"4","13","5","/","+"};
    int n = sizeof(arr) / sizeof(arr[0]);

    // creating stack
    stack<string> st;

    for (int i = 0; i < n; i++)
    {

        int op1, op2, ans=0;

        if (st.empty())
        {
            st.push(arr[i]);
        }

        else if (arr[i] == "*")
        {
            op1 = stoi(st.top());
            st.pop();
            op2 = stoi(st.top());
            st.pop();

            ans = op1 *op2;

            st.push(to_string(ans));
        }

          else if (arr[i] == "/")
        {
            op1 = stoi(st.top());
            st.pop();
            op2 = stoi(st.top());
            st.pop();

            ans = op2/op1;

            st.push(to_string(ans));
        }

          else if (arr[i] == "+")
        {
            op1 = stoi(st.top());
            st.pop();
            op2 = stoi(st.top());
            st.pop();

            ans = op1 +op2;

            st.push(to_string(ans));
        }

          else if (arr[i] == "-")
        {
            op1 = stoi(st.top());
            st.pop();
            op2 = stoi(st.top());
            st.pop();

            ans = op1 - op2;

            st.push(to_string(ans));
        }

        else{
            st.push(arr[i]);
        }
    }

    cout<<stoi(st.top());

    return 0;
}