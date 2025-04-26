#include <iostream>
using namespace std;

// Prototype Declarations
void getTwoValues(int &, int &);
int getNextPrime(int);
int getPrevPrime(int);
bool isPrime(int);

// Function Definitions
void getTwoValues(int &begin, int &end) {
    do {
        cout << "Enter two integers (first smaller than second): ";
        cin >> begin >> end;
    } while (begin >= end);
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int getNextPrime(int begin) {
    int num = begin + 1;
    while (!isPrime(num)) {
        num++;
    }
    return num;
}

int getPrevPrime(int end) {
    int num = end - 1;
    while (num > 1 && !isPrime(num)) {
        num--;
    }
    return num;
}
