// 3-26-2018 Shawn Fries initial version


#include "LabeledJar.h"

// Because c9.io only supports single file compilation
#include "jar.cpp"
#include <iostream>

LabeledJar::LabeledJar( int n ) : JarType( n )
     {
        label = "Generic";
        cout << "\nGetting prefilled labeled jar ready" << endl;
     }
     
LabeledJar::LabeledJar( string lbl ) : JarType()
     {
        label = lbl;
        cout << "\nGetting prefilled labeled jar ready" << endl;
     }

LabeledJar::LabeledJar( string lbl, int n ) : JarType( n )
     {
        label = lbl;
        cout << "\nGetting prefilled labeled jar ready" << endl;
     }