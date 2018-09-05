// Edit History
// 3-7-2018 Shawn Fries initial version
// 3-7-2018 Shawn Fries corrected data types of array, provided definitions for complete functions, provided private summary statistic properties of dataset
// 3-12-2018 Shawn Fries changed to vector, unsigned int for createUserInputDataSet, changed all functions to void

#ifndef NUMBER_CRUNCHER_H
#define NUMBER_CRUNCHER_H

#include <string>
#include <vector>

using namespace std;

class NumberCruncher {
public:
    void createUserInputDataSet(unsigned int countOfUserInputNumbers=100);
    void computeAverage();
    void computeStandardDeviation();
    void displayInputNumbers();
    void displaySummaryStatistics();

private:
    vector<float> userInputDataSet;
    float dataSetAverage;
    float dataSetStandardDeviation;
};

#endif
