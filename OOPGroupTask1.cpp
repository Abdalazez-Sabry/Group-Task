#include <iostream>
#include <vector>
#include <string>
using namespace std;

class BigDecimalInt {
    private:
        string number;

    public:
        BigDecimalInt(int inputInt){
            number = to_string(inputInt);
        }

        BigDecimalInt(string inputString){
            number = inputString;
            checkStrInput(number);
        }
        
        bool isInteger(string toCheck){
            if (toCheck.find_first_not_of("-+123456789") != string::npos){
                return false;
            }
            if(toCheck.substr(1).find_first_not_of("123456789") != string::npos){
                return false;
            }
            return true;
        }

        void checkStrInput(string toCheck){
            if (isInteger(toCheck)){
                return;
            }else{
                number = "0";
                cout << "\n\t--The input is not a number--\n";
            }
        }

};



int main() {
    BigDecimalInt hello("hello");
}