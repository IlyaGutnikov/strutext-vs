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

typedef strutext::encode::Utf8Iterator<std::string::iterator> Utf8Iterator;

int main()
{
	typedef m::Morphologist<m::RussianAlphabet> Morpher;
	Morpher morpher;

	Morpher::LemList lem_list;
	std::string form = "мамы";
	morpher.Analize(form, lem_list);

	bool one_done = false, three_done = false;
	for (Morpher::LemList::iterator it = lem_list.begin(); it != lem_list.end(); ++it) {

		System::Console::WriteLine("ID: {0}", it->id_);
		System::Console::WriteLine("Attr: {0}", it->attr_);

	}
    Console::WriteLine(L"Hello World");
	Console::ReadLine();
    return 0;
}
