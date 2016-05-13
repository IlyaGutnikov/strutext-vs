//============================================================================
// Name        : strutext-linux.cpp
// Author      : IlyaGutnikov
// Version     :
// Copyright   : 123
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <boost/regex.hpp>
#include <fstream>
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
using namespace strutext;
namespace m = strutext::morpho;

typedef strutext::encode::Utf8Iterator<std::string::iterator> Utf8Iterator;
using namespace std;

int main() {
	typedef m::Morphologist<m::RussianAlphabet> Morpher;
		Morpher morpher;

		uint32_t line_id = m::MorphoModifier::AddSuffixLine(morpher);

		/**********************************************************************************************************************/

		std::string suffix = "а";
		m::MorphoModifier::AddSuffix(morpher, line_id, 1, Utf8Iterator(suffix.begin(), suffix.end()), Utf8Iterator());

		suffix = "ой";
		m::MorphoModifier::AddSuffix(morpher, line_id, 2, Utf8Iterator(suffix.begin(), suffix.end()), Utf8Iterator());

		suffix = "енька";
		m::MorphoModifier::AddSuffix(morpher, line_id, 3, Utf8Iterator(suffix.begin(), suffix.end()), Utf8Iterator());


		std::string base = "мам";
		m::MorphoModifier::AddBase(morpher, 1, line_id, Utf8Iterator(base.begin(), base.end()), Utf8Iterator(), "мама");

		std::string base_dad = "пап";
		m::MorphoModifier::AddBase(
			morpher,
			2,
			line_id,
			Utf8Iterator(base_dad.begin(), base_dad.end()),
			Utf8Iterator(),
			"папа"
		);

		/**********************************************************************************************************************/

		Morpher::LemList lem_list;
		std::string form = "мама";
		morpher.Analize(form, lem_list);

		/**********************************************************************************************************************/
		std::string test_gen;
		morpher.GenMainForm((uint32_t) 2, test_gen);

		cout << "Main form dad" << endl;
		cout << test_gen << endl;

		morpher.GenMainForm((uint32_t) 1, test_gen);

		cout << "Main form mom" << endl;
		cout << test_gen << endl;

		/**********************************************************************************************************************/

		std::string test_gen_mom;
		test_gen_mom = morpher.Generate((uint32_t) 2, (uint32_t) 3);
		cout << "Generate form dad" << endl;
		cout << test_gen_mom << endl;

		/**********************************************************************************************************************/

		cout << "Generate all forms test for mom" << endl;
		std::set<std::string> test_form_set;
		morpher.GenAllForms((uint32_t)1, test_form_set);
		for (string str : test_form_set)
		{
			cout << str << ' ';
		}

		/**********************************************************************************************************************/

		for (Morpher::LemList::iterator it = lem_list.begin(); it != lem_list.end(); ++it) {

			//cout << ("ID: {0}", it->id_); //Lemma identifier.
			//cout << ("Attr: {0}", it->attr_); //Form attributes.

		}
	    return 0;

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
