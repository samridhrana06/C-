#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a = 13;
    bool flag = false;
    for (int i = 2; i < 13; i++)
    {
        if (a % i == 0)
        {
            flag = true;
        }
    }
    if(flag == true){
        cout<<"Not Prime";
    }
    else{
        cout<<"Prime";
    }

    return 0;
}