// This is a single file program which reads and displays each row of a CSV file containing an abstract dataset, with columns separated by commas
// The program writes a random number to a new, last column of the file
// One possible application might be simulating which warehouse fulfills a given customer order (given a customer zipcode, order quantity,
// total order weight, and list of possible warehouses to fulfill the order)
//
// Author: Shawn Fries
// CS231
// Due 04-30-18
// One input file 

// Edit History
// 5-2-18 Shawn Fries initial version
// 5-4-18 Shawn Fries Began to implement random number adding functionality
// 5-7-18 Shawn Fries Bugfixed/simplified code to remove a lot of complicated vector of vector functionality
// 5-7-18 Shawn Fries added multithreading library but left commented out of full version 

#include <iostream>
#include <fstream> // file stream
#include <sstream>
#include <string>
#include <vector>
//#include <thread> // multithreading, currently unused but would be added in a future version.
#include <cstdlib> // for random number generation
using namespace std;

int main()
{
    //const unsigned int numThreads = 4; // number of threads for multithreading if used TODO: Dynamically set based on user CPU
    string line; // for demarcating line which will have entries separated by commas/placeholder for getline
    
    // Open the file with ifstream
    ifstream inSimulationDataFile("simulationdata.csv", ios::in);
    
    // exit program if ifstream could not open file
    if (!inSimulationDataFile) {
        cerr << "File not found or could not be opened" << endl;
        exit(EXIT_FAILURE);
    }
    
    // Read and process file line by line
    while (getline(inSimulationDataFile, line)) // Read one line at a time (separated by newline, default behavior)
    {
        //create random number
        int random_simulation_value;
        random_simulation_value = rand(); // declared (pseudo-)random integer (can have any integer value with roughly equal probability)
        
        // Edit end of string
        line.append(string(1, ',')); // Needed to convert char to string and append comma after last value of row
        line.append(to_string(random_simulation_value)); // append random value to end of row
        
        // print to console/display to user
        cout << line << endl;
    }
    
    return 0;
}