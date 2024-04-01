#include <iostream>
using namespace std;

int main() {
    unsigned int a, n;
    unsigned int S = 1;
    cout << "Nhập giá trị a:";
    cin >> a;
    cout << endl;
    cout << "Nhập giá trị n:";
    cin >> n;
    cout << endl;

for (int index = 0; index < n; index++)
{   S = a*S;    
}

cout << "Giá trị lũy thừa: " << S << endl;
return 0;
}
