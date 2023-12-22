// Nguyễn Minh Tú - 5502 - 732833
/*Bài 2.1. Viết hàm tính độ dài cạnh huyền của tam giác theo độ hai cạnh góc vuông.*/

#include <stdio.h>
#include <math.h>
float get_hypotenuse(float x, float y) {
    // Nguyễn Minh Tú - 5502 - 732833   
    //*****************
    //YOUR CODE HERE - Nguyễn Minh Tú - 5502 - 732833
    float z = sqrt(x * x + y * y);
    return z; 
    //*****************
}
int main(){
    float x, y;
    scanf("%f%f", &x, &y);
    
    float z = get_hypotenuse(x, y);
    printf("z = %.2f\n", z);
    
    return 0;
}

// Nguyễn Minh Tú - 5502 - 732833