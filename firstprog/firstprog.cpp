#include <iostream>

/*int main(){
    int x{};
    std::cout << "Hey There! \n";
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << "Double " << x << " is: " << 2 * x << "\n";
    std::cout << "Triple " << x <<  " is: " << 3 * x << "\n";
    return 0;
}*/

int main(){
    int num{}, num2{};
    std::cout << "Enter 2 integers to sum and differ:";
    std::cin >> num >> num2;
    std::cout << num << " + " << num2 << " i: " << num+num2 << ".\n";
    std::cout << num << " - " << num2 << " is " << num-num2 << ".\n";


    return 0;
}
