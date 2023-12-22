// Nguyễn Minh Tú - 5502 - 732833
/*Bài 1.6. Viết hàm đảo ngược một mảng các số nguyên theo hai cách: dùng chỉ số và dùng con trỏ. */

void reversearray(int arr[], int size){
    int l = 0, r = size - 1, tmp;
    //****************
    // YOUR CODE HERE - Nguyễn Minh Tú - 5502 - 732833
    while (l < r) {
        tmp = arr[l];
        arr[l] = arr[r];
        arr[r] = tmp;
        // đảo 2 phần tử arr[l] và arr[r] sau đó tăng l và giảm r
        l ++;
        r --;
    }
    //****************
}

void ptr_reversearray(int *arr, int size){
    int l = 0, r = size - 1, tmp;
    //*****************
    // YOUR CODE HERE - Nguyễn Minh Tú - 5502 - 732833
    int *ptr1 = arr + l;
    int *ptr2 = arr + r;
    while (ptr1 < ptr2) {
        tmp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = tmp;
        // đảo giá trị 2 con trỏ *ptr1 và *ptr2 sau đó tăng ptr1 và giảm ptr2
        ptr1 ++;
        ptr2 --;
    }   
    //*****************
}
// Nguyễn Minh Tú - 5502 - 732833
