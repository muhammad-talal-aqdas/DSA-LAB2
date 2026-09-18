#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int capacity;
    cout << "Enter maximum length of the string: ";
    cin >> capacity;

    char *str = new char[capacity + 1];

    cout << "Enter the string: ";
    cin.ignore();
    cin.getline(str, capacity + 1);

    int length = strlen(str);
    char *reversed = new char[length + 1];

    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0';

    cout << "Reversed String: " << reversed << endl;

    delete[] str;
    delete[] reversed;

    return 0;
}
