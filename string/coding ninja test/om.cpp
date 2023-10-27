#include <bits/stdc++.h> 
using namespace std;

bool compareString(const string &a,const string &b){
	return a[0]<b[0];
}
vector<string> reOrderSentences(vector<string> sentences)
{
	// Write your code here
	unordered_set<string> charSt;
	unordered_set<string> numSt;
	int n=sentences.size();
//sent=wait8 opportunity is coming
//sent[sent.size()-1]
	for(int i=0;i<n;i++){
		if(isalpha(sentences[i][sentences[i].size()-1])){
			charSt.insert(sentences[i]);
		}
		else {
			numSt.insert(sentences[i]);
		}
	}
	vector<string>ans;
	
	for(const string it:charSt){
		// cout<<it<<" ";
		ans.push_back(it);
	}
	sort(ans.begin(),ans.end(),compareString);
	for(const string it:numSt){
		// cout<<it<<" ";
		ans.push_back(it);
	}
	return ans;	
}

int main(){
    vector<string>sentences={"d1 2 3", "love8 coding world", "a1 coding ninjas"};
    vector<string>ans=reOrderSentences(sentences);
    for(const string it:ans){
        cout<<it<<endl;
    }
    return 0;
}