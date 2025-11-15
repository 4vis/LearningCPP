#include <iostream>

int readNumber();
void writeAnswer(int outut);

int main(){
    int num1{readNumber()},num2{readNumber()};

    int output{num1+num2};
    writeAnswer(output);

    return 0;
}




