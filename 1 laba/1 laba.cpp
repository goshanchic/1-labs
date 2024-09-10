

#include <iostream>
using namespace std;

int main()
{
    float n;
    cin >> n;
    if (n <= 50000) {
        cout << n * 0.13 << endl;
    }
    else if (50000 < n < 100001) {
        cout << n * 0.20 << endl;
    }
    else if ( n > 100000) {
        cout << n * 0.25 << endl;
    }
    return 0;
}
