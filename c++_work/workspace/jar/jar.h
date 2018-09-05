// Edit History
// 1-29-2018 Shawn Fries initial version
// 1-30-2018 Shawn Fries added specifications for JarType, constructor/destructor
// 2-5-2018 Shawn Fries change add definition to use unsigned int
// 2-5-2018 Shawn Fries revert to int for add definition, realized unsigned int causes a peculiar error if declared as type for parameter
// 2-5-2018 Shawn Fries add subtract definition
// 2-5-2018 Shawn Fries add second constructor
// 2-5-2018 Shawn Fries TODO: Should I check if nonnegative input for second constructor? Not specified
// 2-5-2018 Shawn Fries Add comment around supporting char in 2nd constructor
// 3-12-2018 Shawn Fries add jarCount property and function, add friend int reveal function

#ifndef JAR_H
#define JAR_H

class JarType {
public:
    JarType();
    void initToEmpty();
    
    void add( int n );
    void subtract ( int n );
    int quantity() const;
    ~JarType();
    
    // May also take a char value but this is technically also (stored as) int internally. TODO: Consider using a different type or splitting this function
    JarType( int n );
    
    // Constructor with reference parameter
    JarType( JarType &j );
    
    // Expand capabilities of JarType
    static int getJarCount();

friend int reveal( JarType j);

private:
    int numUnits;
    static int jarCount;
};

#endif
