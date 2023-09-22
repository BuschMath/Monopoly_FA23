#ifndef DIE_H
#define DIE_H

class Die {
public:
    Die(int sides = 6); // Constructor with default value of 6 sides
    int roll();         // Roll the die and return the result
    int getSides() const; // Get the number of sides on the die
private:
    int sides;          // Number of sides on the die
};

#endif // DIE_H

