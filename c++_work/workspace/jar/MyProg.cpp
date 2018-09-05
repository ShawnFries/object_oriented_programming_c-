// Edit History
// 1-29-2018 Shawn Fries initial version
// 1-30-2018 Shawn Fries manipulate jar objects
// 2-5-2018 Shawn Fries separate out jar1/2 creation, add commented out numUnits call
// 2-5-2018 Shawn Fries create jar3, test changes to other files
// 2-5-2018 Shawn Fries add jar4-6 test statements
// 2-5-2018 Shawn Fries add getInput; TODO: remove std:: calls (already using std namespace)
// 2-12-2018 Shawn Fries tried doing getInput by value instead of by reference. Didn't work because that only changes the value of the parameter passed in and not the actual variable passed in in that case.
// 2-12-2018 Shawn Fries reverted to passing by reference for getInput
// 2-12-2018 Shawn Fries changed getInput to template function
// 2-23-2018 Shawn Fries add shelf array declare/printing of quantities
// 2-23-2018 Shawn Fries add pointer variable for jar1 experiment
// 3-12-2018 Shawn Fries Test reveal() function, add jarCount property, add jarType that's copy of other
// 3-19-2018 Shawn Fries add error throwing/catching, overload operators, use unique_ptrs
// 3-26-2018 Shawn Fries add LabeledJar, int pointing to JarType, JarType pointing to declared int

#include "jar.cpp"
#include "LabeledJar.cpp"

#include <memory> // for unique_ptr

#include <iomanip>

template <typename T>
int getInput( T & n );
int JarType::jarCount = 0; // Initialize the jar counter

int reveal( JarType j )
{
    // Has direct access to all properties of JarType
    return j.numUnits;
}

int main()
{
  
    cout << "Count of jars is: " << JarType::getJarCount() << endl;
    JarType jar1;
    
    cout << "After jar1 and jar2, count of jars is: " << JarType::getJarCount() << endl;
    // Removed the next line as it causes a compilation error
    //jar1.numUnits = 10000;
    
    reveal ( jar1 );
    
    JarType jar2;
    
    jar1.initToEmpty();
    jar2.initToEmpty();
    
    jar1.add( 10 );
    jar2 = jar1;
    jar2.add( 5 );
    
    // Catch and display error from adding negative number
    try
    {
      jar1.add( -5000 );
    }
    catch(const invalid_argument& e1) {
      cerr << e1.what() << endl;
    }
    jar1.subtract( 5 );
    
    // Catch and display error from subtracting negative number
    try
    {
    jar2.subtract( -1 );
    }
    catch(const invalid_argument& e2) {
      cerr << e2.what() << endl;
    }
    
    JarType jar3(50);
    
    JarType jar4( 'p' );	// Prefill with 16 ounces
    JarType jar5( 'q' );	// Prefill with 32 ounces
    try
    {
    JarType jar6( 'a' );	// Should print invalid request.
    }
    catch(const invalid_argument& e3) {
      cerr << e3.what() << endl;
    }
    
    JarType jar7;
    int value = 0;
    int status = getInput( value );
    if ( status == 0 )
    {
        jar7.add( value );
    }
    cout << "\nJar7 contains " << jar7.quantity();
    
    cout << "\nJar1 contains " << jar1.quantity();
    cout << "\nJar2 contains " << jar2.quantity();
    cout << endl;
    
    // Array declaration and printing of values
    
    JarType shelf[3];
   
    shelf[0] = jar1;
    shelf[1] = jar2;
    shelf[2] = jar5;
   
    for (int i = 0; i < 3; i++)
     shelf[i].add( (i+1) * 10 );
     
    for (int i = 0; i < 3; i++)
      cout << shelf[i].quantity() << endl;
    
    // Trying to use pointers
    
    JarType * jarPtr = nullptr;	// Define the pointer variable
    jarPtr = &jar1;	// Get address of jar1 -- a good statement (pointer to == address of)
    cout << "Showing quantities in jar1 via a pointer variable: " << jarPtr->quantity() << endl;
    
    // exact copy of another jar
    JarType jar31 = jar1;
    
    JarType * rack = new JarType[5];
    
    delete [] rack;
    
    const int arraySize = 10;
    unique_ptr< JarType[] > wareHouse( new JarType[arraySize] );
    
    // Add a few units to each jar

    // Show the quantities in each jar
    for ( int i = 0; i < arraySize; i++ )
      cout << "  Item " << i << " has: " << wareHouse[i].quantity() << endl;
      
    cout << jar1;
    
    JarType jar30;
    jar30 = jar1 + jar2;
    
    int xyz = jar1;
    
    jar2 = xyz;
    
    LabeledJar pickles(25);  // Prefill 
    LabeledJar candy("Kit Kat"); // Create jar with label Kit Kat
    LabeledJar abc("Kit Kat", 25); // Create jar with label Kit Kat and prefill
    
    cout << jar1 << tab << jar2;
    
    cout << bell << jar1 << jar2;
    
    return 0;
}

// Description:  A function to ask user for a value
// Return status: 0  a valid number is entered
//                1  a valid number is not entered   
template <typename T>
int getInput( T & n )
{
  T temp;

  std::cout << "Please enter number of units: ";

  std::cin >> temp;

  if ( temp > 0 )
  {
    n = temp;
    return 0;
  }
  return 1;
} // end of getInput()  
