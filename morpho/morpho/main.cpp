// morpho.cpp : main project file.

#include <sstream>
#include "stdafx.h"
#include "morpho.h"
#include <iostream>
#include "encode/utf8_iterator.h"
#include "alphabets/rus_alphabet.h"
#include "alphabets/eng_alphabet.h"
#include "morpho_modifier.h"
#include "morpho.h"
#include "models/rus_model.h"
#include "models/eng_model.h"
#include "models/rus_model_description.h"
#include "models/eng_model_description.h"


using namespace System;
using namespace strutext;
using namespace strutext::morpho;

int main(array<System::String ^> ^args)
{

	Morphologist<RussianAlphabet> morphologist;
	MorphologistBase::LemList lem_list;
	std::string testStr = "мамы";
	morphologist.Analize(testStr, lem_list);

    Console::WriteLine(L"Hello World");
	Console::ReadLine();
    return 0;
}
