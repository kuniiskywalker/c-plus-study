#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter key.";
    do {
        cout << ":";
        cin >> ch;
    } while (ch != 'x');

    return 0;
}
