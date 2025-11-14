#include <iostream>

int doubleNumber(int num); //forward declaration
int getuserinput();

int main(){
    std::cout << doubleNumber(getuserinput()) << '\n';
    return 0;
}

int doubleNumber(int num){
    return num * 2;
}

int getuserinput(){
    int input{};
    std::cout << "enter an integer to double: ";
    std::cin >> input;
    return input;
}


