#include <iostream>

using namespace std;

int main() {
    const int MAX_SIZE = 20; 
    int uniqueNumbers[MAX_SIZE]; 
    int numCount = 0; 
    int inputNumber;

    cout << "Enter up to 20 numbers between 10 and 100 (inclusive):" << endl;

    while (numCount < MAX_SIZE) {
        cout << "Number " << (numCount + 1) << ": ";
        cin >> inputNumber;


        if (inputNumber < 10 || inputNumber > 100) {
            cout << "Number out of range. Please enter a number between 10 and 100." << endl;
            continue;
        }


        bool isDuplicate = false;
        for (int i = 0; i < numCount; i++) {
            if (uniqueNumbers[i] == inputNumber) {
                isDuplicate = true;
                break;
                
            }
        }
        if (!isDuplicate) {
            uniqueNumbers[numCount] = inputNumber;
            numCount++;
        }
        else {
            cout << "Number " << inputNumber << " is a duplicate, pelase enter another number" << endl;
        }
    }
    cout << "\nUnique numbers entered:" << endl;
    for (int i = 0; i < numCount; i++) {
        cout << uniqueNumbers[i] << endl;
    }

    return 0;
}