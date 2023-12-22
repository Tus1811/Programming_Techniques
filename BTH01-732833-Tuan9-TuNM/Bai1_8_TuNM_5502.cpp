// Nguyễn Minh Tú - 5502 - 732833
/*Bài 1.8. Viết chương trình nhập vào một ma trận 2 chiều kích thước m*n với m và n nhập từ bàn phím. 
Sau đó đưa ra tổng các phần tử chẵn của ma trận đó. */

#include <bits/stdc++.h>

void allocate_mem(int ***mt, int m, int n){
 //#Allocate memory for the matrix
 
 //*****************
 // YOUR CODE HERE - Nguyễn Minh Tú - 5502 - 732833
 *mt = new int*[n]; // cấp phát động cho mảng mt
 for (int i = 0; i < m; i ++) 
 	(*mt)[i] = new int[n]; //cấp phát động cho các mảng con mt[i]
 
 //*****************
}
void input(int **mt, int m, int n){
 //#Input elements of the matrix
 
 //*****************
 // YOUR CODE HERE - Nguyễn Minh Tú - 5502 - 732833
 for (int i = 0; i < m; i ++) 
 	for (int j = 0; j < n; j ++) {
 		printf("mt[%d][%d] = ", i, j); 
 		scanf("%d", &mt[i][j]); // nhập phần tử mt[i][j] của ma trận
	}
 //*****************
}
void output(int **mt, int m, int n){
 //# Print all elements of the matrix
 
 //*****************
 // YOUR CODE HERE - Nguyễn Minh Tú - 5502 - 732833
 for (int i = 0; i < m; i ++) {
 	for (int j = 0; j < n; j ++) printf("%d ", mt[i][j]); // in ra lần lượt từng phần tử của ma trận
	printf("\n");
 }  
 //*****************
 
}
int process(int **mt, int m, int n){
 int tong = 0;
 //# Calculate the sum of all even elements in the matrix
 
 //*****************
 // YOUR CODE HERE - Nguyễn Minh Tú - 5502 - 732833
 for (int i = 0; i < m; i ++) 
 	for (int j = 0; j < n; j ++) {
 		if (mt[i][j] % 2 == 0) tong += mt[i][j]; // tính tổng của tất cả phần tử của ma trận
 	}
 //*****************
 
 return tong;
}
void free_mem(int **mt, int m, int n){
 //# Free memory
 
 //*****************
 // YOUR CODE HERE - Nguyễn Minh Tú - 5502 - 732833
 for (int i = 0; i < m; i ++) {
 	delete [] mt[i]; // giải phóng bộ nhớ cấp phát cho mảng con mt[i]
 } 
 delete [] mt; //giải phóng bộ nhớ cấp phát cho mảng mt
 //*****************
}
int main(){
 int m, n, **mt;
 printf("Enter m, n = ");
 scanf("%d%d", &m, &n);
 allocate_mem(&mt, m, n);
 input(mt, m, n);
 output(mt, m, n);
 printf("The sum of all even elements is %d", process(mt, m, n));
 free_mem(mt, m, n);
 return 0;
}

// Nguyễn Minh Tú - 5502 - 732833
