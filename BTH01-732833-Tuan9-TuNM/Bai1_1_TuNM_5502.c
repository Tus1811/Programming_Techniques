// Nguyễn Minh Tú - 5502 - 732833
/* Bài 1.1. Viết một chương trình C nhập vào 3 số nguyên. Thiết lập một con trỏ để lần lượt trỏ tới từng số 
nguyên và hiển thị kết quả giá trị tham chiếu ngược của con trỏ.*/

#include <stdio.h>
int main(){
    int x, y, z;
    int* ptr;
    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z); // nhập 3 số nguyên x, y, z
    printf("\nThe three integers are:\n");
    ptr = &x;
    printf("x = %d\n", *ptr); // in ra x
    //************
    // YOUR CODE HERE - Nguyễn Minh Tú - 5502 - 732833
    ptr = &y;
    printf("y = %d\n", *ptr); // in ra y
    ptr = &z;
    printf("z = %d\n", *ptr); // in ra z
    //************
    return 0;
}
// Nguyễn Minh Tú - 5502 - 732833