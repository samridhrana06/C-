// C++ program to find sum of all
// divisor of number up to 'n'
#include<bits/stdc++.h>
using namespace std;

// Utility function to find sum of
// all divisor of number up to 'n'
int divisorSum(int n)
{
	int sum = 0;

	for(int i = 1; i <= n; ++i)
	{
		
		// Find all divisors of i and add them
		for(int j = 1; j * j <= i; ++j)
		{
			if (i % j == 0)
			{
				if (i / j == j)
					sum += j;
				else
					sum += j + i / j;
			}
		}
	}
	return sum;
}

// Driver code
int main()
{
	int n = 4;
	cout << " " << divisorSum(n) << endl;
	
	// n = 5;
	// cout << " " << divisorSum(n);
	
	return 0;
}
