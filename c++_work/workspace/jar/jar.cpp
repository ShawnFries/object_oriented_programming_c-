// Edit History
// 1-29-2018 Shawn Fries initial version
// 1-30-2018 Shawn Fries added "Rinsing jar..." statement on construct, add methods
// 1-30-2018 Shawn Fries adds destructor
// 2-5-2018 Shawn Fries avoid repeating self by refactoring with namespace
// 2-5-2018 Shawn Fries make add method use unsigned int, check that user submits nonnegative value
// 2-5-2018 Shawn Fries revert to int for add function, realized unsigned int causes a peculiar error if declared as type for parameter
// 2-5-2018 Shawn Fries add subtract function, for this and add function make sure not negative number
// 2-5-2018 Shawn Fries TODO: check if user input is a character or other non numerical value?
// 2-5-2018 Shawn Fries add second constructor
// 2-5-2018 Shawn Fries expand second constructor with switch statement; TODO: Should other characters print invalid request?
// 2-12-2018 Shawn Fries change subtract method to not allow units subtracted to be greater than numUnits
// 3-12-2018 Shawn Fries Add third constructor, implement jarCount property in all constructors and destructors, add getJarCount() function
// 3-19-2018 Shawn Fries Change printed error to thrown invalid argument errors
// 3-19-2018 Shawn Fries add error throwing/catching, overload operators, use unique_ptrs

#include "jar.h"
#include <iostream>
#include <stdexcept>

using namespace std;

void JarType::initToEmpty()
{
    numUnits = 0;
}

void JarType::add( int n )
{
    if ( n >= 0 )
       numUnits += n;
    else
       throw invalid_argument("Invalid value to add");
}

JarType::operator int()
{
  return numUnits;
}

void JarType::subtract( int n )
{
    if (n >= 0 || n > numUnits)
        numUnits -= n;
    else
        throw invalid_argument("Error: resulting units cannot be negative");
}

int JarType::quantity() const
{
    return numUnits;
}

int JarType::getJarCount()
{
    return jarCount;
}

ostream &operator<<( ostream &os, const JarType &j )
{
  os << "The supplied jar contains " << j.numUnits << " units." << endl;
  return os;
}

JarType JarType::operator+( const JarType &j)
{
  JarType tmpJar;

  tmpJar.add ( this->numUnits + j.numUnits );
  
  return tmpJar;
}

// Constructor implementation
JarType::JarType()
{
    numUnits = 0;
    cout << "Rinsing jar..." << endl;
    jarCount++;
}

// Second constructor implementation; may also take a char value but this is technically also (stored as) int internally. TODO: Consider using a different type or splitting this function
JarType::JarType ( int n )
{
    switch(n) {
        case 'p': {
            numUnits = 16;
            break;
        }
        case 'q': {
            numUnits = 32;
            break;
        }
        case 'a': {
            throw invalid_argument("Error: Invalid request");
        }
        default: numUnits = n;
    }
    jarCount++;
    cout << "Prefilled jar with " << numUnits << " units created" << endl;
}

// Third constructor implementation
JarType::JarType( JarType &j )
{
  cout << "In Copy Constructor" << endl;
  numUnits = j.numUnits;
  jarCount++;
}

// Destructor implementation
JarType::~JarType()
{
    jarCount--;
    cout << "Destroying jar" << endl;
}
