//============================================================================
// Name        : strutext-lib.cpp
// Author      : IlyaGutnikov
// Version     :
// Copyright   : IlyaGutnikov
// Description : Strutext-library implementation in C++, Ansi-style
//============================================================================

#include <iostream>
#include <boost/regex.hpp>
#include <fstream>
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
#include <fstream>

#include "strutext-linux.h"

using namespace std;
using namespace strutext;
namespace m = strutext::morpho;

typedef strutext::encode::Utf8Iterator<std::string::iterator> Utf8Iterator;
using namespace std;

/**
 * \brief Analyze word and get main form.
 *
 * \param      dict_path    Path to dictionary
 * \param 	   word The main form's text (UTF-8).
 */
void analyzeWord (string dict_path, string word) {

	typedef m::Morphologist<m::RussianAlphabet> Morpher;
	Morpher morpher;

	std::ifstream dict(dict_path);
	if (not dict.is_open()) {
		throw std::invalid_argument(
				"Cannot open russian dictionary: " + dict_path);
	}

	morpher.Deserialize(dict);

	// Производим морфологический анализ формы.
	strutext::morpho::MorphologistBase::LemList lemmas;
	morpher.Analize(word, lemmas);

	for (const auto& lemma : lemmas) {
		string main_form;
		cout << "Generate main form with dictionary" << endl;
		if (morpher.GenMainForm(lemma.id_, main_form)) {
			cout << main_form << "\n";
		}
	}
}
