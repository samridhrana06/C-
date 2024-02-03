#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findGoodMatrix(vector<vector<int>> &arr)
{
    // Write your code here
    int n = arr.size();
    int m = arr[0].size();

    vector<int> row(n, 0);  // Initializing row vector with size n and all elements set to 0
    vector<int> col(m, 0);  // Initializing col vector with size m and all elements set to 0

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] == 1 || col[j] == 1)
            {
                arr[i][j] = 0;
            }
        }
    }

    return arr;
}

int main() {
    // Initialize a 2D vector
    std::vector<std::vector<int>> arr = {{0, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Call the function
    std::vector<std::vector<int>> result = findGoodMatrix(arr);

    // Print the result
    for (const auto &row : result) {
        for (const auto &elem : row) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}