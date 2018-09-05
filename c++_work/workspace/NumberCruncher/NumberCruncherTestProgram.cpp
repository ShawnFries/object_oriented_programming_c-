// This program is a simple employee number entry (database) system which incorporates the class NumberCruncher
// To update and maintain a list of numbers and compute and report simple summary statics (mean and standard deviation)
//
// Author: Shawn Fries
// CS231
// Due 03-05-18
// No input/output files

// Edit History
// 3-12-2018 Shawn Fries Initial Version


// Note: Doing it this way because I'm choosing to write this in c9.io which doesn't natively support compilation of entire folders/projects
// Instead only single file compilation is supported which requires chaining all these files together with #include statements
// Instead of just including the header file in both this and NumberCruncher.cpp (implementation file)
#include "NumberCruncher.cpp"
#include <iostream>

int main()
{
    // Initialize a dataset for testing, then run through each function in order
    NumberCruncher dataSet;
    
    cout << "How many numbers would you like to enter?" << endl;
    int sizeOfDataSet;
    cin >> sizeOfDataSet;
    cout << "Please enter " << sizeOfDataSet << " numbers, following each with the enter key" << endl;
    
    dataSet.createUserInputDataSet(sizeOfDataSet);
    
    dataSet.computeAverage();
    
    dataSet.computeStandardDeviation();
    
    dataSet.displayInputNumbers();
    
    dataSet.displaySummaryStatistics();
    
    return 0;
}
