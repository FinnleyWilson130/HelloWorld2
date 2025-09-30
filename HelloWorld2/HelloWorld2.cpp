// HelloWorld2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
