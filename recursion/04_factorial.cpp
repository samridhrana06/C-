// #include <bits/stdc++.h>
// using namespace std;

// int recur(int n)
// {

//     if (n < 1)
//     {
//         return 1;
//     }

//     return n * (recur(n - 1));
// }

// int main()
// {

//     int n = 5;

//     cout << recur(n);

//     return 0;
// }



// CPP program to find all factorial numbers
// smaller than or equal to n.
#include <iostream>
using namespace std;

void printFactorialNums(int n)
{
	int fact = 1;
	int x = 2;
	while (fact <= n) {
		cout << fact << " ";

		// Compute next factorial
		// using previous
		fact = fact * x;

		x++;
	}
}

// Driver code
int main()
{
	int n = 3;
	printFactorialNums(n);
	return 0;
}
