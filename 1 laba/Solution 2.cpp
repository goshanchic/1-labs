#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    const int price_per_item = 10; 

    std::cout << "������ �⮨���� ���㯪� �����\n";
    std::cout << "������⢮ �५�� | ���� �⮨�����\n";
    std::cout << "---------------------------------\n";

    for (int quantity = 1; quantity <= 10; ++quantity) {
        int total_price = quantity * price_per_item; 
        std::cout << std::setw(18) << quantity << " | " << total_price << " �㡫��\n";
    }

    return 0;
}
