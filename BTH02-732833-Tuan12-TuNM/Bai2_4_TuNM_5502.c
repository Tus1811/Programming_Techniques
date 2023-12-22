//Nguyễn Minh Tú - 5502 - 732833
/*Bài 2.4. Viết các hàm tính lập phương của số nguyên và số thực.*/

#include <stdio.h>
int cube(int x) {
 //# trả về lập phương của x
 //*****************
 // YOUR CODE HERE - Nguyễn Minh Tú - 5502 - 732833
 return x*x*x;
 //*****************
}
//# viết hàm tính lập phương của một số kiểu double
//*****************
// YOUR CODE HERE - Nguyễn Minh Tú - 5502 - 732833
double cube(double x){
    return x*x*x;
}
//*****************
int main() {
 int n;
 double f;
 scanf("%d %lf", &n, &f);
 
 printf("Int: %d\n", cube(n));
 printf("Double: %.2lf\n", cube(f));
 
 return 0;
}
//Nguyễn Minh Tú - 5502 - 732833