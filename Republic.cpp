#include "Republic.h"

Republic::Republic() : State() {
	president_name = "";
}

Republic::Republic(const char* _name, const char* _president_name) : State(_name) {
	president_name = _president_name;
}

Republic::Republic(const Republic* copy) : State(copy) {	
	president_name = copy->president_name;
}

void Republic::Show() {
	std::cout << "�������� �����������: " << name << '\n';
	std::cout << "��� ���������: ����������" << '\n';
	std::cout << "��������� �����������: " << (residents_count == -1 ? "����������" : std::to_string(residents_count)) << "\n";
	std::cout << "����� �����������: " << president_name << '\n';
	std::cout << '\n';
}

Republic::~Republic() {}

void Republic::SetPresidentName(const char* _name) { president_name = _name; }
const char* Republic::GetPresidentName() const { return president_name; };
