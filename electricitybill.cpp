#include <iostream>
using namespace std;

class ElectricityBill {
private:
    int consumerNo;
    string consumerName, type;
    float prevReading, currReading, units, amount;

public:
    void getData() {
        cout << "Enter Consumer Number: ";
        cin >> consumerNo;
        cout << "Enter Consumer Name: ";
        cin >> consumerName;
        cout << "Enter Type of Connection (domestic/commercial): ";
        cin >> type;
        cout << "Enter Previous Month Reading: ";
        cin >> prevReading;
        cout << "Enter Current Month Reading: ";
        cin >> currReading;
    }

    void calculateBill() {
        units = currReading - prevReading;

        if (type == "domestic") {
            if (units <= 100)
                amount = units * 1;
            else if (units <= 200)
                amount = 100 * 1 + (units - 100) * 2.5;
            else if (units <= 500)
                amount = 100 * 1 + 100 * 2.5 + (units - 200) * 4;
            else
                amount = 100 * 1 + 100 * 2.5 + 300 * 4 + (units - 500) * 6;
        } else if (type == "commercial") {
            if (units <= 100)
                amount = units * 2;
            else if (units <= 200)
                amount = 100 * 2 + (units - 100) * 4.5;
            else if (units <= 500)
                amount = 100 * 2 + 100 * 4.5 + (units - 200) * 6;
            else
                amount = 100 * 2 + 100 * 4.5 + 300 * 6 + (units - 500) * 7;
        } else {
            cout << "Invalid connection type!" << endl;
            amount = 0;
        }
    }

    void displayBill() {
        cout << "\n--- Electricity Bill ---" << endl;
        cout << "Consumer No: " << consumerNo << endl;
        cout << "Consumer Name: " << consumerName << endl;
        cout << "Type of Connection: " << type << endl;
        cout << "Units Consumed: " << units << endl;
        cout << "Total Bill Amount: Rs. " << amount << endl;
    }
};

int main() {
    ElectricityBill e;
    e.getData();
    e.calculateBill();
    e.displayBill();
    return 0;
}
