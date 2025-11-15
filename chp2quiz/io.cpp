#include <iostream>



int readNumber(){
    int userNum{};
    std::cout << "Enter Number to add: ";
    std::cin >> userNum;

    return userNum;

}

void writeAnswer(int output){
    std::cout << "The Answer is: " << output << "\n";
}
