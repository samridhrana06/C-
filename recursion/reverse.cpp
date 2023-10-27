#include <bits/stdc++.h>
using namespace std;
void rev(int i, int a[], int size)
{

    // if(a>0){
    //     int temp = a%10;
    //     a = a/10;
    //     cout<<temp;
    //     rev(a);
    // }

    if (i >= size / 2)
        return;
    swap(a[i], a[size - i - 1]);

    rev(i + 1, a, size);
}

int main()
{

    int a[] = {1, 3, 5, 4};
    int size = sizeof(a) / sizeof(a[0]);
    rev(0, a, size);
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}