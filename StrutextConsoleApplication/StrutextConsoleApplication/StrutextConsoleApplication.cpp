// StrutextConsoleApplication.cpp : main project file.

#include "stdafx.h"
#include <boost/regex.hpp>
#include <iostream>
#include <string>

using namespace std;
using namespace System;

int main()
{
	std::string line;
	line = "124124124";
	boost::regex pat("^Subject: (Re: |Aw: )*(.*)");
	boost::smatch matches;

	if (boost::regex_match(line, matches, pat)) {
		Console::WriteLine(L"String match!");
		std::cout << matches[2] << std::endl;
	}
	else {
		Console::WriteLine(L"String dont match!");
	}
    Console::WriteLine(L"Hello World");
	Console::ReadLine();
    return 0;
}
