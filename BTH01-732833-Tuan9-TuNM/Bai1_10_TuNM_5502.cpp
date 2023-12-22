// Nguyễn Minh Tú - 5502 - 732833
/*Bài 1.10. Viết chương trình nhập vào 2 ma trận vuông cùng kích thước n*n, trong đó n nhập từ bàn phím. 
Sau đó tính tổng và tích của hai ma trận đó và đưa kết quả ra màn hình.
Yêu cầu sử dụng cấp phát động để cấp phát bộ nhớ cho các ma trận */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Nhap kich thuoc ma tran: n = "; cin >> n;
    int **mt1, **mt2;
    // cấp phát động cho 2 ma trận
    mt1 = new int*[n];
    mt2 = new int*[n];
    for (int i = 0; i < n; i++) {
        mt1[i] = new int[n];
        mt2[i] = new int[n];
    }

    //nhập lần lượt 2 ma trận
    cout << "Nhap ma tran 1: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mt1[i][j];
        }
    }

    cout << "Nhap ma tran 2: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mt2[i][j];
        }
    }

    // tính tổng 2 ma trận
    cout << "Tong 2 ma tran la: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int tmp = mt1[i][j] + mt2[i][j];
            cout << tmp << " ";
        }
        cout << endl;
    }

    // tính tích 2 ma trận
    cout << "Tich 2 ma tran la: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int tmp = 0;
            for (int k = 0; k < n; k++) {
                tmp += mt1[i][k] * mt2[k][j];
            }
            cout << tmp << " ";
        }
        cout << endl;
    }

    // giải phóng bộ nhớ của 2 mảng mt1 và mt2
    for (int i = 0; i < n; i++) {
        delete[] mt1[i];
        delete[] mt2[i];   
    }
    delete[] mt1;
    delete[] mt2;
    
    return 0;
}

// Nguyễn Minh Tú - 5502 - 732833