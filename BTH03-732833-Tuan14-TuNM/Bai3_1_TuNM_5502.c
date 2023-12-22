// Nguyễn Minh Tú - 5502 - 732833
/*Bài tập 3.1: Tính dãy Lucas
Dãy Lucas được định nghĩa bởi Ln=Ln−1+Ln−2 và bắt đầu bởi L0=2, L1=1. Viết 
hàm tính số Lucas thứ n.*/

int lucas(int n) {
 
 //*****************
 //# YOUR CODE HERE # Nguyễn Minh Tú - 5502 - 732833
 if (n == 0) return 2;
 if (n == 1) return 1;
 return lucas(n-1) + lucas(n-2);
 //*****************
}

// Nguyễn Minh Tú - 5502 - 732833