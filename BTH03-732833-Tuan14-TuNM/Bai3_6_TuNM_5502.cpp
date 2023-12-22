// Nguyễn Minh Tú - 5502 - 732833
/*Bài tập 3.6: Tìm ước chung lớn nhất
Tính ước chung lớn nhất của hai số cho trước*/

#include <iostream>
using namespace std;
int gcd(int a, int b){
 if (b == 0) return a;
 return gcd(b, a % b);
}
int gcd2(int a, int b){
 
 //# Khử đệ quy
 //*****************
 //# YOUR CODE HERE # Nguyễn Minh Tú - 5502 - 732833
 while(b != 0){
    int tmp = a % b;
    a = b;
    b = tmp;
 }

 return a;
 //*****************
}
int main() {
 int a, b;
 cin >> a >> b;
 cout << gcd(a, b) << endl << gcd2(a, b);
 return 0;
}

// Nguyễn Minh Tú - 5502 - 732833