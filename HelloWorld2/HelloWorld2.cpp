
#include <iostream>
#include <string>

int main()
{
    std::string operation;

    std::cout << "Hello World!\n";

    int a = 0;
    int b = 0;
    

    std::cout << "enter operation (add, sub, mul or div): ";
    std::cin >> operation;

    std::cout << "please enter a the first number : ";

    std::cin >> a;

    std::cout << "please enter a the second number : ";

    std::cin >> b;

    if (operation == "add") {
        std:: cout << "result:" << a + b << std::endl;
    }

    else if (operation == "sub") {
        std::cout << "result:" << a - b << std::endl;
    }

    else if (operation == "div") {
        if (b != 0)
            std::cout << "result:" << a / b << std::endl;
        else
            std::cout << "Error: division by 0" << std::endl;
    }
     else if (operation == "mul") {
        std::cout << "result:" << a * b << std::endl;
    }
     else {
        std::cout << "Unkown Operation!" << std::endl;
    }

    return 0;
}
