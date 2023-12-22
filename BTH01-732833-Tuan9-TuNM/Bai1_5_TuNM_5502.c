// Nguyễn Minh Tú - 5502 - 732833
/*Bài 1.5. Viết hàm trả về con trỏ trỏ tới giá trị lớn nhất của một mảng các số double. 
Nếu mảng rỗng hãy trả về NULL.*/
double* maximum(double* a, int size){
    double *max;
    max = a;
    if (a == NULL) return NULL;
    //*****************
    // YOUR CODE HERE - Nguyễn Minh Tú - 5502 - 732833
    for (int i = 0; i < size; i ++) {
        if (a[i] > *max) *max = a[i]; // con trỏ max trỏ tới giá trị lớn nhất của mảng
    }
    //*****************
    return max;
}
// Nguyễn Minh Tú - 5502 - 732833
