#include <iostream>
using namespace std;

int main() {
    const int size = 20;

    int *salArray = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter Salary for employee " << (i + 1) << ": ";
        cin >> salArray[i];
    }

    for (int i = 0; i < size; i++) {
        salArray[i] = salArray[i] + salArray[i] / (i + 1);
    }

    cout << "\nUpdated Salaries: ";
    for (int i = 0; i < size; i++) {
        cout << salArray[i] << " ";
    }
    cout << endl;

    delete[] salArray;

    return 0;
}
