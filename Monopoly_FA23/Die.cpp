#include "Die.h"
#include <ctime> // for std::time()
#include <cstdlib> // for std::rand()

Die::Die(int sides) : sides(sides) {
    // Initialize the random number generator
    std::srand(time(NULL));
}

int Die::roll() {
    return std::rand() % sides + 1;
}

int Die::getSides() const {
    return sides;
}
