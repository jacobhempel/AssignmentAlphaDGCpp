#include <iostream>
#include "fizzbuzz.h"
#include <string>

using std::cout;

void fizzBuzz (int input);

int main (int argc, char* argv[]) {
    int input;
    cout << "Part A: \n\n Where would you like FizzBuzz to start?  ";
    std::cin >> input;
    for (; input > 0; input--) {
        cout << input << " -- ";
        fizzBuzz(input);
    }
    cout << "\nPart B \n\nDefault Contructor Run: \n";
    FizzBuzz normal;
    normal.run();
    cout << "\nRun with explicit constructor using number 13\n\n";
    FizzBuzz ex1(13);
    ex1.run();
    cout << "\nRun with explicit constructor using number 24\n\n";
    FizzBuzz ex2(24);
    ex2.run();
    cout << "\nPart C \n\nUsing Getters and Setters \n";
    normal.setFizzBuzz(32);
    cout << "Default Number -- " << normal.getFizzBuzz() << "\n";
    normal.setFizzBuzz(12);
    cout << "New number after setter -- " << normal.getFizzBuzz()<< "\n";
    normal.run();
    cout << "\nPart 4 - change the names of fizz and buzz\n\n";
    FizzBuzz bizzFuzz(16,"Bizz","Fuzz");
    bizzFuzz.run();
}

void fizzBuzz (int input) {
    int modFive = input % 5;
    int modThree = input % 3;
    if (modFive == 0 && modThree != 0) {
        cout << "Fizz!\n";
    }
    if (modThree == 0 && modFive != 0) {
        cout << "Buzz!\n";
    }
    if (modThree == 0 && modFive == 0) {
        cout << "FizzBuzz!\n";
    }
    if (modFive != 0 && modThree != 0) {
        cout << "\n";
    }
}
