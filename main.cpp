#include <iostream>
using namespace std;
typedef float salary;
int main()
{
    salary basic_salary, allowances_percentage, deductions_percentage,
    netSalary;
    cout << "Enter the Basic Salary: ";
    cin >> basic_salary;
    cout << "Enter the Percentage of Allowances: ";
    cin >> allowances_percentage;
    cout << "Enter the Percentage of Deductions: ";
    cin >> deductions_percentage;
    netSalary = basic_salary + basic_salary*allowances_percentage -
            basic_salary*deductions_percentage;
    cout << "Net Salary is: " << netSalary << endl;
    return 0;
}
