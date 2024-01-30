#include<bits/stdc++.h>
using namespace std;

bool lemonadeChange(vector<int> &bill) {
	// Write your code here.
	int billcounter=0;
	int ten=0,five=0;

	for(int i=0;i<bill.size();i++){

		if(bill[i] == 5){
			five++;
		}
		else if(bill[i] == 10){
			if(five == 0)
			{
				return false;
			}
			else{
				five--;
				ten++;
			}
		}
		else if(bill[i] == 20){
			if(ten >= 1 and five>=1){
				ten--;
				five--;
			}
			else if(five >= 3){
				five -= 3;
			}
			else{
				return false;
			}
		}
	}
	return true;
}

int main() {
    // Create a vector of bills. Each bill is represented as an integer.
    vector<int> bills = {5, 5, 5, 10, 20};

    // Call the lemonadeChange function
    bool canMakeChange = lemonadeChange(bills);

    // Print the result
    if (canMakeChange) {
        cout << "Yes, we can make change for every customer." << endl;
    } else {
        cout << "No, we can't make change for every customer." << endl;
    }

    return 0;
}