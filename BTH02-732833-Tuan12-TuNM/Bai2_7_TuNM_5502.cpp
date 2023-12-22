// Nguyễn Minh Tú - 5502 - 732833

#include <iostream>
using namespace std;

template <typename T>

// # Viết hàm arr_sum
//*****************
// YOUR CODE HERE - Nguyễn Minh Tú - 5502 - 732833
T arr_sum(T a[], int n, T b[], int m){
    T sum = 0;
    for(int i=0; i<n; i++)
        sum += a[i];
    for(int i=0; i<m; i++)
        sum += b[i];
    return sum;
}
//*****************

int main() {

    int val;
    cin >> val;

    {
        int a[] = {3, 2, 0, val};
        int b[] = {5, 6, 1, 2, 7};
        cout << arr_sum(a, 4, b, 5) << endl;
    }
    {
        double a[] = {3.0, 2, 0, val * 1.0};
        double b[] = {5, 6.1, 1, 2.3, 7};
        cout << arr_sum(a, 4, b, 5) << endl;
    }

    return 0;
}
// Nguyễn Minh Tú - 5502 - 732833
