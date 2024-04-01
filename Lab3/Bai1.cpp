#include <iostream>
#include <cmath>
using namespace std;

// Hàm tính lũy thừa a^n
int luythua(int a, int n) {
    int ketqua = 1;
    for (int i = 0; i < n; ++i) {
        ketqua *= a; 
    }
    return ketqua;

} 

int main() {
    int a, n;
    cout << "Nhập giá trị a:";
    cin >> a;
    cout << "Nhập giá trị n:";
    cin >> n;
}

// Kiểm tra nếu n âm
If ( n < 0 ) {
    cout << " Không tính được " << endl;
} else {
int ketqua = luythua(a , n);
cout << "Kết quả của" << a << "^" << n << " là: " << ketqua << endl;
}

return 0;