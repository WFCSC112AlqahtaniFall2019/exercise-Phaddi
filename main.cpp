#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int NUM_ELEMENTS = 8;   // Number of elements
    int revVctr[8];// User values
    vector <int> reverseVector(NUM_ELEMENTS);
    int i;                        // Loop index
    int temp; //for variable swapping

    cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cin >> revVctr[i];
    }

    // Reverse
    for (i = 0; i < NUM_ELEMENTS / 2; i++) {
        temp = revVctr[i];
        revVctr[i] = revVctr[NUM_ELEMENTS - i - 1];
        revVctr[NUM_ELEMENTS - i - 1] = temp;
    }

    // Print values
    cout << endl << "New values in the form of an array:";
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cout << " " << revVctr[i];
    }
    cout << endl;

    //change array to vector
    for(i = 0; i < NUM_ELEMENTS; i++)
    {
        reverseVector.at(i) = revVctr[i];
    }

    //print values part 2
    cout << "New values in the form of a vector: ";
    for(i = 0; i < reverseVector.size(); i++)
    {
        cout << reverseVector.at(i) << " ";
    }
    cout << endl;

    return 0;
}