// This is a single file program which reads and displays each row of a text file containing flight data, with virtual columns separated by commas
// The program displays records one row at a time, prompting the user to display the next record or exit
// Until the end of the file is reached or EOF is input (ending the program and displaying a message)
//
// Author: Shawn Fries
// CS231
// Due 04-23-18
// One input file 

// Edit History
// 4-17-18 Shawn Fries initial version
// 4-19-18 Shawn Fries got end-of-file loop working
// 4-20-18 Shawn Fries added error handling around file not found/not opened
// 4-23-18 Shawn Fries added outputRecord functionality, by each row
// 4-29-18 Shawn Fries added/finished core functionality
// 4-30-18 Shawn Fries added message upon program completion, changed to while-true loop

#include <iostream>
#include <fstream> // file stream
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

int main()
{
    auto a1{"5"};

    vector <vector <string> > flightData; //vector of vectors (entire file before processing)
    int character; // use int, because char cannot represent EOF
    unsigned int currentRecordNumber{0}; // current record number when displaying each flight record
    string line; // for demarcating line which will have entries separated by commas/placeholder for getline
    
    // Cell values within each line (columns of our data) will be represented purely as strings in this program (abstract property flightValue here)
    string flightValue;
    
    // Open the file with ifstream
    ifstream inFlightDataFile("flightdata.txt", ios::in);
   // ifstream testFakeDataFile("fightdata.txt", ios::in);
    
    // exit program if ifstream could not open file
    if (!inFlightDataFile) {
        cerr << "File not found or could not be opened" << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Welcome to the flight record displayer. Please press enter to view the first record." << endl;
    
    // Read and process file
    while (getline(inFlightDataFile, line)) // Read one line at a time (separated by newline, default behavior)
    {
        istringstream ss (line);
        vector <string> flightRecord;
    
        while (getline(ss, flightValue, ',')) // Demarcate "lines" by commas using optional argument to getline, thus breaking each line into cells
            flightRecord.push_back(flightValue); // push cell value to current line (individual record)
        flightData.push_back(flightRecord); // push entire row to set of all records so far
    }
    
    unsigned int numberOfFlightRecords = flightData.size(); // number of rows in flightData
    
    // Print file one record at a time as requested by user
    while (true)
    {
        if (character = cin.get() == EOF) {
            cout << "EOF input. Exiting program." << endl;
            break;
        } else if (currentRecordNumber >= numberOfFlightRecords) { // Only really need to check strict equality but just in case something weird happens
            cout << "End of file reached. Exiting program." << endl;
            break;
        }
        vector <string> currentRecord;
        
        currentRecord = flightData[currentRecordNumber]; // Using this to access each row to be displayed iteratively

        cout << left << setw(10) << "Flight Number: " << currentRecord[0] << endl << setw(13) << "Origin Airport: " << currentRecord[1] << endl
        << "Destination Airport: " << currentRecord[2] << endl << "Number of Passengers: " << currentRecord[3] << endl
        << "Average Price: " << currentRecord[4] << fixed << showpoint << endl;
        
        cout << "Press enter to view another record, or enter EOF to end." << endl;
        
        currentRecordNumber++;
    }
    
    return 0;
}