// Edit History
// 2-5-2018 Shawn Fries initial version
// 2-5-2018 Shawn Fries include string (bugfix)
// 2-12-2018 Shawn Fries add parameters to constructor definition, remove deconstructor
// 2-20-2018 Shawn Fries add utility class definition

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    Employee(int i = 0) {
        firstName = "John";
        lastName = "Smith";
        monthlySalary = 5000.0;
    };
    void test() {
        cout << firstName << endl;
    }
    Employee( string firstName, string lastName, double monthlySalary );
    
    void setFirstName( string newFirstName );
    void setLastName( string newLastName );
    void setMonthlySalary( double newMonthlySalary );
    
    string getFirstName();
    string getLastName();
    double getMonthlySalary();
    double getYearlySalary();
    
    void displayAttribute( string attributeName );

private:
    string firstName;
    string lastName;
    double monthlySalary;
};

#endif
