#include <iostream>
#include <string>

void bubbleSort(std::string arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    std::string danhsachMSSV[5] = { "", "2301CT1234", "2302CT3456", "2305CT3999", "2304CT0002" };

    // Nhập MSSV của sinh viên
    std::cout << "Nhập MSSV của bạn: ";
    std::cin >> danhsachMSSV[0];

    // In mảng trước khi sắp xếp
    std::cout << "Mảng trước khi sắp xếp:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << danhsachMSSV[i] << std::endl;
    }

    // Sắp xếp mảng
    bubbleSort(danhsachMSSV, 5);

    // In mảng sau khi sắp xếp
    std::cout << "Mảng sau khi sắp xếp:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << danhsachMSSV[i] << std::endl;
    }

    // Tìm địa chỉ của phần tử chứa MSSV lớn nhất
    std::string *ptrArrayMSSV = danhsachMSSV;
    std::string *maxMSSV = danhsachMSSV;
    for (int i = 1; i < 5; ++i) {
        if (danhsachMSSV[i] > *maxMSSV) {
            maxMSSV = danhsachMSSV + i;
        }
    }

    // In địa chỉ và phần tử đó ra màn hình
    std::cout << "Địa chỉ của phần tử chứa MSSV lớn nhất: " << maxMSSV << std::endl;
    std::cout << "MSSV lớn nhất: " << *maxMSSV << std::endl;

    return 0;
}