// Nguyễn Minh Tú - 5502 - 732833
/* Bài 1.3. Viết chương trình yêu cầu nhập giá trị cho 3 biến số nguyên x, y, z kiểu int. 
Sau đó sử dụng duy nhất một con trỏ để cộng giá trị của mỗi biến thêm 100.*/

#include <stdio.h>

int main() {
    int x, y, z;
    int *ptr;
    scanf("%d %d %d", &x, &y, &z);
    printf("Here are the values of x, y, and z:\n");
    printf("%d %d %d\n", x, y, z);
    //*****************
    // YOUR CODE HERE - Nguyễn Minh Tú - 5502 - 732833
    ptr = &x;
    *ptr = *ptr + 100; // cộng giá trị x thêm 100
    ptr = &y;
    *ptr = *ptr + 100; // cộng giá trị y thêm 100
    ptr = &z;
    *ptr = *ptr + 100; // cộng giá trị z thêm 100
    //****************
    printf("Once again, here are the values of x, y, and z:\n");
    printf("%d %d %d\n", x, y, z);
    return 0;
} 

// Nguyễn Minh Tú - 5502 - 732833
