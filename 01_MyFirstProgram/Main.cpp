#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <cstdlib>
using namespace std;
int main() 
{
	cout << "Hi there!\nThis is my very first program!\nI am trying to teach myself C++ to serve clients!";
	Sleep(5000);
	return 0;
}
