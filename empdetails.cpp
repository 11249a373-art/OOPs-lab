#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int empId;
    float basicPay, da, hra, gross, tax, netSalary;

public:
    void getData() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Basic Pay: ";
        cin >> basicPay;
    }

    void calculate() {
        da = basicPay * 0.70;
        hra = basicPay * 0.10;
        gross = basicPay + da + hra;
        tax = gross * 0.20;
        netSalary = gross - tax;
    }

    void displayPayslip() {
        cout << "\n--- Employee Payslip ---" << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Pay: " << basicPay << endl;
        cout << "DA (70%): " << da << endl;
        cout << "HRA (10%): " << hra << endl;
        cout << "Gross Salary: " << gross << endl;
        cout << "Tax (20%): " << tax << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

int main() {
    Employee e;
    e.getData();
    e.calculate();
    e.displayPayslip();
    return 0;
}
