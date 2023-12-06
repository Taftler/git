#include <iostream>

//find the firts and the last digit of a number

using namespace std;

int reversed(long number){
    long reversed = 0, remain;

    while (number != 0) {
        remain = number % 10;
        reversed = reversed * 10 + remain;
        number /= 10;
    }

    return reversed;
}

int main(){
    int number, count;

    cout << "Enter a number: ";
    cin >> number;

    cout << reversed(number)%10 <<" "<<number%10;
    
}