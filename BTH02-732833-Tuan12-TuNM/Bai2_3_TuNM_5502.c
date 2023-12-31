// Nguyễn Minh Tú - 5502 - 732833
/*Bài 2.3. Viết chương trình yêu cầu nhập giá trị cho số nguyên x nhỏ hơn 100. In ra giá 
trị ax^2+bx+c với a, b, c định sẵn.*/

#include <stdio.h>
//# Viết hàm get_value
//*****************
//YOUR CODE HERE - Nguyễn Minh Tú - 5502 - 732833
int get_value(int x, int a=2, int b=1, int c=0) {
    return a*x*x + b*x + c;
}
//*****************
int main(){
 int x;
 scanf("%d", &x);
 
 int a = 2; //# giá trị mặc định của a
 int b = 1; //# giá trị mặc định của b
 int c = 0; //# giá trị mặc định của c
 
 //# Nhập 3 số nguyên a, b, c từ bàn phím
 //*****************
 //YOUR CODE HERE - Nguyễn Minh Tú - 5502 - 732833
 scanf("%d%d%d", &a, &b, &c);
 //*****************
 
 printf("a=2, b=1, c=0: %d\n", get_value(x));
 printf("a=%d, b=1, c=0: %d\n", a, get_value(x, a));
 printf("a=%d, b=%d, c=0: %d\n", a, b, get_value(x, a, b));
 printf("a=%d, b=%d, c=%d: %d\n", a, b, c, get_value(x, a, b, c));
 
 return 0;
}
