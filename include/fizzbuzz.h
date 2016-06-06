#ifndef INCLUDE_FIZZBUZZ_H_
#define INCLUDE_FIZZBUZZ_H_

#include <string>

using std::string;

class FizzBuzz {
private:
    int fbnumber;
    string Fizz;
    string Buzz;
public:
    FizzBuzz();
    int getFizzBuzz();
    void setFizzBuzz(int input);
    explicit FizzBuzz(int explicitNumber, string inputFizz, string inputBuzz);
    explicit FizzBuzz(int explicitNumber);
    explicit FizzBuzz(string inputFizz,string inputBuzz);
    void run();

};

#endif // INCLUDE_FIZZBUZZ_H_
