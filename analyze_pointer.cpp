#include <iostream>
using namespace std;

void analyze_pointer(int *ptr) {
    if (ptr == nullptr) {
        cout << "Pointer is null." << endl;
        return;
    }
    cout << "Memory Location (Address): " << ptr << endl;
    cout << "Value Pointed To: " << *ptr << endl;
}

int main() {
    cout << "--- Stack Memory Analysis ---" << endl;
    int stackVal = 42;
    analyze_pointer(&stackVal);

    cout << "\n--- Heap Memory Analysis ---" << endl;
    int *heapVal = new int;
    *heapVal = 99;
    analyze_pointer(heapVal);

    delete heapVal;
    return 0;
}
