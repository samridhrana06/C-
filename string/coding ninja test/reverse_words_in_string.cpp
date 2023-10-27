#include<bits/stdc++.h>
using namespace std;

int main(){

    //input
    string in = "Welcome  to  coding  ninjas";

    //creation of vector
    vector<string> words;

    // create temporary string to store each word
    string temp = "";
    for (int i = 0; i < in.size(); i++)
    {
        // if a space is encountered, add the temporary string to the vector
        if (in[i] == ' ')
        {
            // check if the previous character was also a space
            if (i > 0 && in[i-1] == ' ')
            {
                continue; // skip this space
            }
            words.push_back(temp);
            temp = "";
        }
        // otherwise, add the character to the temporary string
        else
        {
            temp += in[i];
        }
    }
    // add the last word to the vector
    words.push_back(temp);

    // printing the words in reverse order
    for (int i = words.size() - 1; i >= 0; i--)
    {
        cout << words[i] << " ";
    }

    return 0;
}