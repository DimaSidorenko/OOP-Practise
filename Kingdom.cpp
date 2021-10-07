#include "Kingdom.h"


Kingdom::Kingdom(const Kingdom* copy) : Monarchy(copy) {
	royal_palace = copy->royal_palace;
}

Kingdom::Kingdom() : Monarchy() {
	royal_palace = "";
}

Kingdom::Kingdom(const char* _name, const char* _royal_palace) : Monarchy(_name) {
	royal_palace = _royal_palace;
}

Kingdom::Kingdom(const char* _name, const char* _monarch_name, const char* _royal_palace) : Monarchy(_name, _monarch_name) {
	royal_palace = _royal_palace;
}

void Kingdom::Show() {
	std::cout << "�������� �����������: " << name << '\n';
	std::cout << "��� �����������: ����������� ��������" << '\n';
	std::cout << "��������� �����������: " << (residents_count == -1 ? "����������" : std::to_string(residents_count)) << "\n";
	std::cout << "��� �������: " << monarch_name << '\n';
	std::cout << "�������� ������������ ������" << '\n';
	std::cout << '\n';
}

void Kingdom::SetRoyalPlace(const char* palace) { royal_palace = palace; }
const char* Kingdom::GetRoyalPlace() const { return royal_palace; }

