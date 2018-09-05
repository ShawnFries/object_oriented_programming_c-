// 3-26-2018 Shawn Fries initial version

#include "jar.h"
#include <string>

using namespace std;

#ifndef LABELEDJAR_H
#define LABELEDJAR_H

class LabeledJar : public JarType {
public:
     LabeledJar( int n ); // Constructor
     LabeledJar( string lbl ); // Constructor
     LabeledJar( string lbl, int n ); // Constructor
private:
    string label;
};
#endif
