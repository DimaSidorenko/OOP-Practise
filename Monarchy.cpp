#ifndef MONARCHYH
#define MONARCHYH

#include "Monarchy.h"



Monarchy::Monarchy() : State() {
	monarch_name = "";
}

Monarchy::Monarchy(const Monarchy* copy) : State(copy) {
	monarch_name = copy->monarch_name;
}

Monarchy::Monarchy(const char* _name) : State(_name) {
	monarch_name = "�� ������";
};

Monarchy::Monarchy(const char* _name, const char* _king_name) : State(_name) {
	monarch_name = _king_name;
}

void Monarchy::Show() {
	std::cout << "�������� �����������: " << name << '\n';
	std::cout << "��� �����������: ��������" << '\n';
	std::cout << "��������� �����������: " << (residents_count == -1 ? "����������" : std::to_string(residents_count)) << "\n";
	std::cout << "�������� ���������: " << monarch_name << '\n';
	std::cout << '\n';
}

void Monarchy::SetPresidentName(const char* name) { monarch_name = name; }
const char* Monarchy::GetPresidentName() const { return monarch_name; }


#endif