#include <bits/stdc++.h>

unordered_map<string,vector<int>> mp;

void receiveMessage(string user, int time) {

    mp[user].push_back(time);

}

 

vector<int> getMessageCount(int l, int r, string user, int k) {

    vector<int> ans;

    vector<pair<int,int>> res;

    int i=l;

    while(i<=r){

        if(i+k-1<=r){

            res.push_back({i,i+k-1});

        }

        else{

            res.push_back({i,r});

        }

        i+=k;

    }

    for(int i=0;i<res.size();i++){

        int a=res[i].first;

        int b=res[i].second;

        int cnt=0;

        for(int j=0;j<mp[user].size();j++){

            if(mp[user][j]>=a && mp[user][j]<=b){

                cnt++;

            }

        }

        ans.push_back(cnt);

    }

    return ans;

}


int main() {
    // Receiving some messages
    receiveMessage("Alice", 1);
    receiveMessage("Alice", 2);
    receiveMessage("Alice", 3);
    receiveMessage("Bob", 1);
    receiveMessage("Bob", 2);
    receiveMessage("Bob", 3);
    receiveMessage("Bob", 4);

    // Getting the message count for Alice from time 1 to 3 with k=1
    vector<int> count = getMessageCount(1, 3, "Alice", 1);
    for (int i = 0; i < count.size(); i++) {
        cout << count[i] << " ";
    }
    cout << endl;

    // Getting the message count for Bob from time 1 to 4 with k=2
    count = getMessageCount(1, 4, "Bob", 2);
    for (int i = 0; i < count.size(); i++) {
        cout << count[i] << " ";
    }
    cout << endl;

    return 0;
}