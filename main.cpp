#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
    string consoleTitle = "Console title";

    SetConsoleTitleA(consoleTitle.c_str());
    std::system("CLS");
	std::cout << "Simple folder locker program just started...";
    std::cout << "Enter a number you would like to count up to and press any key to start" << endl;

    int choice = 0;
    cin >> choice;
	return 0;
}