#include <iostream>
#include <vector>
#include <string>
using namespace std;


class BigDecimalInt {
    public:
    string classString;
    vector<string> inputVector;
    BigDecimalInt(int inputInt){
        classString = to_string(inputInt);
    }
    BigDecimalInt(string inputString){
        classString = inputString;
    }
};
BigDecimalInt operator+ (BigDecimalInt anotherDec) {

}


int main() {
    string input;
    cin >> input;
    BigDecimalInt bigInteger(input);
}