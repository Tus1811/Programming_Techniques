// Nguyễn Minh Tú - 5502 - 732833
/*Bài 1.9. Viết chương trình in ra tất cả các dãy con của một dãy cho trước.*/

#include <bits/stdc++.h>
using namespace std;

void printList(int *a, int x, int y) {
    for (int i = x; i <= y; i++) cout << a[i] << " "; // in ra các phần tử từ a[x] đến a[y] của mảng a
}

int main() {
    int n;
    cout << "Nhap so phan tu cua day: n = "; cin >> n;
    int a[10001];
    cout << "Nhap cac phan tu cua day: \n"; 
    // nhập các phần tử của dãy
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // duyệt lần lượt các cặp i,j 
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            printList(a, i, j); // in ra các phần tử từ a[i] đến a[j] của mảng a
            cout << endl;
        }
    }
    return 0;
}

// Nguyễn Minh Tú - 5502 - 732833
