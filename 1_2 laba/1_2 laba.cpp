#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int price = 10; 
    const int max_dishes = 10;  
    // заголовок

    cout << "Количество тарелок | Стоимость" << endl;
    cout << "--------------------|-----------" << endl;

    for (int n = 1; n <= max_dishes; ++n) {
        int total_cost = n * price;
        cout << setw(19) << n
            << " | " << std::setw(9) << total_cost << std::endl;
    }
    return 0;
}
