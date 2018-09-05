// Edit History
// 3-8-2018 Initial Version
// 3-12-2018 All functionality added and testing completed

#include "NumberCruncher.h"
#include <iostream>
#include <math.h>

// (Functionally) Setter (calculated) methods which change properties in NumberCruncher.h

// Inputs: unsigned int countOfUserInputNumbers, represents a number 
// Outputs: Void but prints message to console if countOfUserInputNumbers is > 100 
void NumberCruncher::createUserInputDataSet( unsigned int countOfUserInputNumbers )
{
   if (countOfUserInputNumbers > 100) {
      cout << "Error: Can only handle up to 100 numbers. Expect strange behavior/incorrect results elsewhere in the program" << endl;
      return;
   }
   for (int i = 0; i < countOfUserInputNumbers; i++) {
      float inputNumber;
      cin >> inputNumber; 
      userInputDataSet.push_back (inputNumber);
   }
}


// Calculates and sets the simple average (mean) value from the numbers in the dataset
// Inputs: None [Uses already-user-input vector]
// Outputs: None (void; changes dataSetAverage property)
void NumberCruncher::computeAverage ()
{
   float sum = 0;
   int numberCount = userInputDataSet.size();
   for (int i = 0; i < numberCount; ++i) {
      sum += userInputDataSet[i];
   }
   dataSetAverage = sum / numberCount;
}

// Sets employee's last name
// Inputs: None [Uses already-user-input vector]
// Outputs: None (void; changes dataSetStandardDeviation property)
void NumberCruncher::computeStandardDeviation()
{
   // Same as sum, but trying to keep these separate functions as in requirements.. could be simplified (don't repeat yourself)
   float sum = 0;
   int numberCount = userInputDataSet.size();
   for (int i = 0; i < numberCount; ++i) {
      sum += userInputDataSet[i];
   }
   float dataSetMean = sum / numberCount;
   
   // Standard deviation part of the formula (sum of squared differences over n - 1, all under square root sign)
   float sumOfSquaredDifferences = 0;
   int currentDifference = 0;
   for (int i = 0; i < numberCount; ++i) {
      currentDifference = userInputDataSet[i] - dataSetMean;
      sumOfSquaredDifferences += currentDifference * currentDifference;
   }
   dataSetStandardDeviation = sqrt(sumOfSquaredDifferences / (numberCount - 1));
}


// (Functionally) getter methods

// Display all numbers stored in the vector (i.e. that the user already input)
// Inputs: None
// Outputs: None (void); prints values to the console
void NumberCruncher::displayInputNumbers()
{
   int numberCount = userInputDataSet.size();
   cout << "This data set has values" << endl;
   for(int i = 0; i < numberCount; ++i) {
      cout << userInputDataSet[i] << endl;
   }
}

// Display average and standard deviation calculated for this dataset
// Inputs: None
// Outputs: None (void); prints values to console
void NumberCruncher::displaySummaryStatistics()
{
   cout << "This data set has average value " << dataSetAverage << " and standard deviation " << NumberCruncher::dataSetStandardDeviation << endl;
}
