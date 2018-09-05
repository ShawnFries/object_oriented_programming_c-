// Edit History
// 2-12-2018 Initial version
// 2-12-2018 Shawn Fries Fix string initalization to use string() instead of empty character
// 2-12-2018 Shawn Fries use proper return types for getter methods (bugfix), add parameters for constructor
// 2-14-2018 Shawn Fries bugfix: remove semicolon after constructor parameters; correct unit-setting methods in constructor
// 2-20-2018 Shawn Fries revert return types for getter functions, add attribute printing utility function, display salary using dollar symbol and correct number of decimal points for cents
// 2-22-2018 Shawn Fries remove extraneous #include statement for <locale>

#include "Employee.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Used for getYearlySalary() function below
const unsigned int MONTHS_PER_YEAR = 12;

// Setter methods

// Sets employee's first name
// Inputs: newFirstName, a string representing the employee first name that will be set
// Outputs: None (void)
void Employee::setFirstName( string newFirstName )
{
   firstName = newFirstName;
}

// Sets employee's last name
// Inputs: newLastName, a string representing the employee last name that will be set
// Outputs: None (void)
void Employee::setLastName( string newLastName )
{
   lastName = newLastName;
}

// Sets employee's monthly salary if validation passes (salary cannot be negative or else validation will fail)
// If validation fails, salary is unchanged
// Inputs: newMonthlySalary, a double representing the employee monthly salary that will be set
// Outputs: None (void); prints an error message to the console if salary input was negative
void Employee::setMonthlySalary( double newMonthlySalary )
{
   if (newMonthlySalary >= 0) {
       monthlySalary = newMonthlySalary;
   } else {
       cout << "Error: cannot set negative salary. Salary left unchanged." << endl;
   }
}

// Getter methods (only return actual value of attribute)

// Retrieves employee's first name
// Inputs: None
// Outputs: firstName, a string representing the employee first name already stored
string Employee::getFirstName()
{
   return firstName;
}

// Retrieves employee's last name
// Inputs: None
// Outputs: lastName, a string representing the employee last name already stored
string Employee::getLastName()
{
   return lastName;
}

// Retrieves employee's monthly salary. Note that if the employee was initialized with a negative salary
// This function should return 0 since monthly salary was never properly initialized
// Inputs: None
// Outputs: monthlySalary, a double representing the employee monthly salary already stored
double Employee::getMonthlySalary()
{
   return monthlySalary;
}

// Retrieves employee's yearly salary (just 12 times the stored monthly salary)
// Where 12 is represented here by MONTHS_PER_YEAR (hard-coded constant above)
// Inputs: None
// Outputs: yearlySalary, a double representing 12 times the monthly salary already stored
double Employee::getYearlySalary()
{
   return MONTHS_PER_YEAR * monthlySalary;
}

// Utility function to display value of a specified attribute to user
// Attribute name must be a "friendly name" corresponding to one of the private attributes in this program (see the else-if flow below)
// Or is requested in the product design doc (i.e. yearly salary in this case)
// Otherwise, an error message is printed to the console
// Inputs: attributeName, a string representing a property (or derived property) of interest to us
// Outputs: None (void return) but prints message to console

void Employee::displayAttribute( string attributeName )
{
   if (attributeName == "first name") {
      cout << "Employee's first name is " << getFirstName() << "." << endl;
   } else if (attributeName == "last name") {
      cout << "Employee's last name is " << getLastName() << "." << endl;
   } else if (attributeName == "monthly salary") {
      cout << "Employee's monthly salary is $" << setprecision(2) << fixed << getMonthlySalary() << "." << endl;
   } else if (attributeName == "yearly salary") {
      cout << "Employee's yearly salary is $" << setprecision(2) << fixed << getYearlySalary() << "." << endl;
   } else {
      cout << "Error: Invalid attribute requested." << endl;
   }
}

// Constructor implementation
// Inputs: string initialFirstName, represents employee's first name upon creation
//         string initialLastName, represents employee's last name upon creation
//         double initialMonthlySalary, represents employee's monthly salary upon creation
// Outputs: effectively void but prints message to console if monthlySalary is negative 
Employee::Employee( string initialFirstName, string initialLastName, double initialMonthlySalary )
{
    firstName = initialFirstName;
    lastName = initialLastName;
    if (initialMonthlySalary >= 0) {
      monthlySalary = initialMonthlySalary;
    } else {
      cout << "Error: Salary cannot be negative. Salary may be initialized to zero." << endl;
    }
}
