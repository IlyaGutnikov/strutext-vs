// StrutextConsoleApplication.cpp : main project file.

#include "stdafx.h"
#include <boost/regex.hpp>
#include <iostream>
#include <string>
#include "morpho/morpho.h"
#include "encode/utf8_iterator.h"
#include "alphabets/rus_alphabet.h"
#include "alphabets/eng_alphabet.h"
#include "morpho/morpho_modifier.h"
#include "models/rus_model.h"
#include "models/eng_model.h"
#include "models/rus_model_description.h"
#include "models/eng_model_description.h"

using namespace std;
using namespace System;
using namespace strutext;
namespace m = strutext::morpho;

int main()
{
	std::string line;
	line = "Re: 124124124";
	boost::regex pat("^Subject: (Re: |Aw: )*(.*)");
	boost::smatch matches;

	if (boost::regex_match(line, matches, pat)) {
		Console::WriteLine(L"String match!");
		std::cout << matches[2] << std::endl;
	}
	else {
		Console::WriteLine(L"String dont match!");
	}


	typedef m::Morphologist<m::RussianAlphabet> Morpher;
	Morpher morpher;
	Morpher::LemList lem_list;
	std::string testStr = "мамы";
	morpher.Analize(testStr, lem_list);

	for (Morpher::LemList::iterator it = lem_list.begin(); it != lem_list.end(); ++it) {
	
		Console::WriteLine(L"123412");
	
	}

    Console::WriteLine(L"Hello World");
	Console::ReadLine();
    return 0;
}
