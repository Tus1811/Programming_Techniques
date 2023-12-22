// Nguyễn Minh Tú - 5502 - 732833
/*Bài tập 3.4: LIS
Cho dãy a có n phần tử. Một dãy con của a là dãy thu được bằng cách xóa đi 
một số phần tử của a và giữ nguyên thứ tự các phần tử còn lại (có thể không xóa 
phần tử nào). Hãy tìm dãy con tăng dài nhất của a*/

#include <bits/stdc++.h>
using namespace std;
int a[1000], n;
int mem[1000]; //# mảng ghi nhớ lời giải các bài toán con đã được giải
void init(){
 memset(mem, -1, sizeof(mem));
}
//# Quy hoạch động, 
//# Hàm lis(i) trả về độ dài dãy con tăng dài nhất kết thúc bởi a[i]
int lis(int i) {
 //*****************
 //# YOUR CODE HERE # Nguyễn Minh Tú - 5502 - 732833
    mem[0] = 1;

    for(int k=1; k<n; k++){
        mem[k] = 1;
        for(int j=0; j<k; j++){
            if(a[j] < a[k]){
                if(mem[k] < mem[j] + 1){
                    mem[k] = mem[j] + 1;
                }
            }
        }
    }
    return mem[i];
 //*****************
}
//# Truy vet loi giai
void trace(int i){
 for(int j = 0; j < i; j++){
  if (a[j] < a[i] && mem[i] == 1 + mem[j]){
   trace(j);
   break;
  }
 }
 cout << a[i] << " ";
}
int main(){
 init();
 cin >> n;
 for(int i = 0; i < n; i++) cin >> a[i];
 int res = 1, pos = 0;
 for(int i = 1; i < n; i++){
  if (res < lis(i)){
   res = lis(i);
   pos = i;
  }
 }
 cout << res << endl;
 trace(pos);
 return 0;
}

// Nguyễn Minh Tú - 5502 - 732833