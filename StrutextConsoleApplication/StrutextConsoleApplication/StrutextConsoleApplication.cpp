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

	uint32_t line_id = m::MorphoModifier::AddSuffixLine(morpher);

	/**********************************************************************************************************************/

	std::string suffix = "�"; //������� "�"
	m::MorphoModifier::AddSuffix(morpher, line_id, 1, Utf8Iterator(suffix.begin(), suffix.end()), Utf8Iterator());

	suffix = "��"; //������� "��"
	m::MorphoModifier::AddSuffix(morpher, line_id, 2, Utf8Iterator(suffix.begin(), suffix.end()), Utf8Iterator());

	suffix = "����"; //������� "����"
	m::MorphoModifier::AddSuffix(morpher, line_id, 3, Utf8Iterator(suffix.begin(), suffix.end()), Utf8Iterator());

	//��� ���� "����" � "����"
	std::string base = "���"; //������� ����� �����
	m::MorphoModifier::AddBase(morpher, 1, line_id, Utf8Iterator(base.begin(), base.end()), Utf8Iterator(), "����");

	base = "���"; //������� ����� �����
	m::MorphoModifier::AddBase(
		morpher, //����� ������������
		2, //������������� �����, �� ��������� ��� ���� ������� ��������� � �������
		line_id, //�������� ��������
		Utf8Iterator(base.begin(), base.end()), //��������� ��������
		Utf8Iterator(), //�������� ��������
		"����" //������� �����
	);
	
	/**********************************************************************************************************************/

	Morpher::LemList lem_list;
	std::string form = "�����";
	morpher.Analize(form, lem_list);

	string test_gen;
	morpher.GenMainForm((uint32_t) 2, test_gen);

	Console::WriteLine(L"Main form");
	cout << test_gen << endl;

	for (Morpher::LemList::iterator it = lem_list.begin(); it != lem_list.end(); ++it) {

		System::Console::WriteLine("ID: {0}", it->id_); //Lemma identifier.
		System::Console::WriteLine("Attr: {0}", it->attr_); //Form attributes.

	}

	//�������� �����
	// ID: 1
	// Attr : 1
	// ID : 1
	// Attr : 2
	// ID : 1
	// Attr : 3
	// Hello World
    Console::WriteLine(L"Hello World");
	Console::ReadLine();
    return 0;
}
