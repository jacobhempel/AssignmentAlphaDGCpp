#include "fizzbuzz.h"
#include <iostream>
#include <string>

using std::cout;
using std::string;

FizzBuzz::FizzBuzz() {
    fbnumber=32;
    Fizz="Fizz";
    Buzz="Buzz";
}

FizzBuzz::FizzBuzz(int explicitNumber, string inputFizz, string inputBuzz) {
    fbnumber=explicitNumber;
    Fizz=inputFizz;
    Buzz=inputBuzz;
}

FizzBuzz::FizzBuzz(string inputFizz, string inputBuzz) {
    fbnumber=32;
    Fizz=inputFizz;
    Buzz=inputBuzz;
}

FizzBuzz::FizzBuzz(int explicitNumber) {
    fbnumber=explicitNumber;
    Fizz="Fizz";
    Buzz="Buzz";
}

int FizzBuzz::getFizzBuzz() {
    return fbnumber;
}

void FizzBuzz::setFizzBuzz(int input) {
    fbnumber=input;
}

void FizzBuzz::run (void) {
    cout << "Running...\n"
    for (; fbnumber > 0; fbnumber --) {
        int modFive = fbnumber % 5;
        int modThree = fbnumber % 3;
        cout << fbnumber << " -- ";
        if (modFive == 0 && modThree != 0) {
            cout << Fizz << "!\n";
        }
        if (modThree == 0 && modFive != 0) {
            cout << Buzz << "!\n";
        }
        if (modThree == 0 && modFive == 0) {
            cout << Fizz << Buzz << "!\n";
        }
        if (modFive != 0 && modThree != 0) {
            cout << "\n";
        }
    }
}
