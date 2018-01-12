// Hello_World.cpp : Experiment with the different ways to say "Hello World!"
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <string.h>

int main()
{
    std::cout << "Hello World!" << std::endl;
    printf("Hello World!\n");

    std::string strHello = "Hello World!";
    std::cout << strHello << std::endl;

    char cStrHello[] = "Hello World!";
    std::cout << cStrHello << std::endl;

    return 0;
}

