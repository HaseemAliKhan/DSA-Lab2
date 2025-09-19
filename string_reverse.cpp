#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int size;
    cout << "Enter the Size of Array: ";
    cin >> size;
    cin.ignore();

    char *str = new char[size];
    cout << "Enter the String: ";
    cin.getline(str, size);

    for (int i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    cout << str;

    delete[] str;
    return 0;
}
