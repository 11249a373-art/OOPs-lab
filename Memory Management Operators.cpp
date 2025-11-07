#include <iostream>
using namespace std;

int main() {
    int *ptr;
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    ptr = new int[n];

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++)
        cin >> ptr[i];

    cout << "\nYou entered: ";
    for (int i = 0; i < n; i++)
        cout << ptr[i] << " ";

    delete[] ptr;

    cout << "\nMemory released successfully!" << endl;
    return 0;
}
