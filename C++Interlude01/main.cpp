#include "PlainBox.h"
#include <iostream>
using namespace std;


int main(void) {
    PlainBox<double> numberBox;  // A box to hold a double
    PlainBox<string> nameBox;    // A box to hold a string
    // PlainBox<MagicWand> wandBox; // A box to hold a MagicWand object
                                
    double health = 6.5;
    numberBox.setItem(health);
    string secretName = "Rumpelstiltskin";
    nameBox.setItem(secretName);
    // MagicWand elfWand;
    // wandBox.setItem(elfWand);

    return 0;
}
