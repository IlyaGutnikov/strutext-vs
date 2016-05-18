// StrutextConsoleApplication.cpp : main project file.

#include "stdafx.h"
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
using namespace System;
using namespace strutext;
namespace m = strutext::morpho;

typedef strutext::encode::Utf8Iterator<std::string::iterator> Utf8Iterator;

int main()
{
	typedef m::Morphologist<m::RussianAlphabet> Morpher;
	Morpher morpher;

	uint32_t line_id = m::MorphoModifier::AddSuffixLine(morpher);

	std::ofstream out("out.txt");
	std::streambuf *coutbuf = std::cout.rdbuf(); //save old buf
	std::cout.rdbuf(out.rdbuf()); //redirect std::cout to out.txt!

	/**********************************************************************************************************************/

	std::string suffix = "�"; //������� "�"
	m::MorphoModifier::AddSuffix(morpher, line_id, 1, Utf8Iterator(suffix.begin(), suffix.end()), Utf8Iterator());

	suffix = "��"; //������� "��"
	m::MorphoModifier::AddSuffix(morpher, line_id, 2, Utf8Iterator(suffix.begin(), suffix.end()), Utf8Iterator());

	suffix = "�����"; //������� "����"
	m::MorphoModifier::AddSuffix(morpher, line_id, 3, Utf8Iterator(suffix.begin(), suffix.end()), Utf8Iterator());

	//��� ���� "����" � "����"
	std::string base = "���"; //������� ����� �����
	m::MorphoModifier::AddBase(morpher, 1, line_id, Utf8Iterator(base.begin(), base.end()), Utf8Iterator(), "����");

	std::string base_dad = "���"; //������� ����� �����
	m::MorphoModifier::AddBase(
		morpher, //����� ������������
		2, //������������� �����, �� ��������� ��� ���� ������� ��������� � �������
		line_id, //�������� ��������
		Utf8Iterator(base_dad.begin(), base_dad.end()), //��������� ��������
		Utf8Iterator(), //�������� ��������
		"����" //������� �����
	);
	
	/**********************************************************************************************************************/

	Morpher::LemList lem_list;
	std::string form = "����";
	morpher.Analize(form, lem_list);

	/**********************************************************************************************************************/
	std::string test_gen;
	morpher.GenMainForm((uint32_t) 2, test_gen);//�������� �����, ������ ���������� 
												//��������� ������� ��� ������ Utf-8
	cout << "Main form dad" << endl;
	cout << test_gen << endl;

	morpher.GenMainForm((uint32_t) 1, test_gen);//�������� �����, ������ ���������� 
											   //��������� ������� ��� ������ Utf-8
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
	for (string const& str : test_form_set)
	{
		cout << str << ' ';
	}

	out.flush();

	/**********************************************************************************************************************/

	for (Morpher::LemList::iterator it = lem_list.begin(); it != lem_list.end(); ++it) {

		System::Console::WriteLine("ID: {0}", it->id_); //Lemma identifier.
		System::Console::WriteLine("Attr: {0}", it->attr_); //Form attributes.

	}

	string dict_path =
		"C:/Users/igutnikov/git/strutext-vs/StrutextConsoleApplication/StrutextConsoleApplication/dict";

	std::string word = "����������";
	std::ifstream dict(dict_path);
	//morpher = std::make_shared<Morpher>();
	morpher.Deserialize(dict);

	// ���������� ��������������� ������ �����.
	strutext::morpho::MorphologistBase::LemList lemmas;
	morpher.Analize(word, lemmas);

	for (const auto& lemma : lemmas) {
		string main_form;
		cout << "Generate main form with dictionary" << endl;
		if (morpher.GenMainForm(lemma.id_, main_form)) {
			cout << main_form << "\n";
		}

		cout << "Generate all forms with dictionary" << endl;
		std::set<std::string> test_form_set;
		morpher.GenAllForms((uint32_t)lemma.id_, test_form_set);
		for (string str : test_form_set) {
			cout << str << ' ';
		}
	}

    Console::WriteLine(L"����� ������ ���������");
	Console::ReadLine();
    return 0;
}
