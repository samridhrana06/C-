#include<bits/stdc++.h>
using namespace std;

    int main(){
        long long arr[] = {4, 3, 2, 6};
        int n = sizeof(arr) / sizeof(arr[0]);
        long long sum = 0;

        priority_queue<long long,vector<long long>,greater<long long>>pq(arr,arr+n);

        while (pq.size() > 1)
        {
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();

            sum += (a+b);

            pq.push(a+b);
        }

        cout << "Minimum cost of connecting ropes: " << sum << endl;

        return 0;
    }