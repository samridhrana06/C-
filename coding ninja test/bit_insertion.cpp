// You are given an array' TRIN
// aving' num ero strings.
// The strings are assumed to be arranged such that there is one
// string in one line.
// You need to return the number of columns that are not sorted
// lexicographically.




#include <iostream>
#include <vector>

using namespace std;

// Function to count the unsorted columns
int countUnsorted(vector<string>& A) {
	int countOfCol = 0;

	for (int col = 0; col < A[0].length(); col++) {
		bool isUnsorted = false;
		for (int row = 1; row < A.size(); row++) {
			if (A[row][col] < A[row - 1][col]) {
				// isUnsorted = true;
                countOfCol++;
				break;
			}
		}
		// if (isUnsorted) {
		// 	countOfCol++;
		// }
	}

	return countOfCol;
}

int main() {
	vector<string> A = {"bccde", "dehrt", "gabzy"};
	cout << countUnsorted(A) << endl;
	return 0;
}
