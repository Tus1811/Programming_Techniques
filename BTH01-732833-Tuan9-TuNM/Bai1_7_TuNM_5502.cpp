// Nguyễn Minh Tú - 5502 - 732833
/*Bài 1.7. Viết chương trình nhập vào một mảng các số nguyên với số lượng các phần tử nhập 
từ bàn phím. Sau đó sắp xếp mảng theo thứ tự tăng dần. Hiển thị danh sách mảng trước và 
sau khi sắp xếp.*/

#include <stdio.h>
#include <stdlib.h>

int *a;
int n, tmp;
int main(){
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    //#Allocate memory
    //*****************
    // YOUR CODE HERE - Nguyễn Minh Tú - 5502
    a = (int*) malloc(n * sizeof(int)); // cấp phát động cho mảng a
    //*****************

    for(int i = 0; i < n; i++)
    scanf("%d", a + i); 
 
    printf("The input array is: \n");
    for(int i = 0; i < n; i++)
    printf("%d ", *(a + i));
    printf("\n");
 
    //#Sort array
    //*****************
    //YOUR CODE HERE - Nguyễn Minh Tú - 5502 - 732833
    for (int i = 0; i < n; i ++) 
        for (int j = i + 1; j < n; j ++) {
            if (*(a+i) > *(a+j)) {
                int tmp;
                tmp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = tmp;
                // nếu a[i] > a[j] thì đảo 2 phần tử a[i] và a[j]
            }
        }
    //*****************
 
    printf("The sorted array is: \n");
    for(int i = 0; i < n; i++)
    printf("%d ", *(a + i));
    printf("\n");
 
    delete [] a;
    return 0;
}
// Nguyễn Minh Tú - 5502 - 732833
