// Nguyễn Minh Tú - 5502 - 732833
/*Bài 1.4. Viết hàm countEven(int*, int) nhận một mảng số nguyên và kích thước 
của mảng, trả về số lượng số chẵn trong mảng???*/

int counteven(int* arr, int size){
    int count = 0;
 
    //****************
    //YOUR CODE HERE - Nguyễn Minh Tú - 5502 - 732833
    for (int i = 0; i < size; i ++) {
        if (arr[i] % 2 == 0) count ++; // đếm số lượng phần tử chẵn trong mảng
    }
    //****************
 
    return count; 
}
// Nguyễn Minh Tú - 5502 - 732833
