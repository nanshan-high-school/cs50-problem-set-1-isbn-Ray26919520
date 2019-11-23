#include <iostream>
using namespace std;

int main(){
    long long isbn;
    cout << "isbn:";
    cin >> isbn;
    
    int number;
    int AnotherNumber;
    AnotherNumber = isbn / 10;
    number += AnotherNumber / 100000000;
    AnotherNumber = AnotherNumber % 100000000;

    number += AnotherNumber / 10000000 * 2;
    AnotherNumber = AnotherNumber % 10000000;

    number += AnotherNumber / 1000000 * 3;
    AnotherNumber = AnotherNumber % 1000000;

    number += AnotherNumber / 100000 * 4;
    AnotherNumber = AnotherNumber % 100000;

    number += AnotherNumber / 10000 * 5;
    AnotherNumber = AnotherNumber % 10000;

    number += AnotherNumber / 1000 * 6;
    AnotherNumber = AnotherNumber % 1000;

    number += AnotherNumber / 100 * 7;
    AnotherNumber = AnotherNumber % 100;

    number += AnotherNumber / 10 * 8;
    AnotherNumber = AnotherNumber % 10;

    number += AnotherNumber * 9;
    AnotherNumber = AnotherNumber % 1;

        if (number % 11 == isbn % 10){
            cout << "yes";
        } else {
            cout << "no";
        }
    }
