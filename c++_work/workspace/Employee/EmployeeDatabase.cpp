// This program is reports on some simple summary statistics (mean and standard deviation)
//
// Author: Shawn Fries
// CS231
// Due 2-19-18
// No input/output files

// Edit History
// 2-12-2018 Shawn Fries Initial version
// 2-16-2018 Shawn Fries Fix displaying of employee traits (call function on instance of class)
// 2-20-2018 Shawn Fries add all project functionality, incorporating a utility class

#include <iostream>

#include "Employee.h"

int main()
{
    Employee e3;
    e3.test();
    //e3.displayAttribute("first name");
#if 0
    // Initialize two test employees
    Employee e1("John", "Doe", 12345.67);
    Employee e2("Jane", "Jones", 76543.21);
    // Display all info for Employee 1 (John Doe)
    cout << "Employee 1:" << endl;
    e1.displayAttribute("first name");
    e1.displayAttribute("last name");
    e1.displayAttribute("yearly salary");
    
    // Insert a line to separate employees, then show for Employee 2 all attributes
    cout << endl << "Employee 2:" << endl;
    e2.displayAttribute("first name");
    e2.displayAttribute("last name");
    e2.displayAttribute("yearly salary");
    
    // Give employees 10% raise
    e1.setMonthlySalary(1.1 * e1.getMonthlySalary());
    e2.setMonthlySalary(1.1 * e2.getMonthlySalary());
    
    // Display new yearly salaries for each employee
    cout << endl << "Employee 1:" << endl;
    e1.displayAttribute("yearly salary");
    cout << endl << "Employee 2:" << endl;
    e2.displayAttribute("yearly salary");
    
    // Change Jane Jones's name to Jane Doe, then display all attributes requested again
    e2.setLastName("Doe");
    cout << endl << "Employee 2:" << endl;
    e2.displayAttribute("first name");
    e2.displayAttribute("last name");
    e2.displayAttribute("yearly salary");
#endif
    return 0;
}
