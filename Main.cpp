#include "Republic.h"
#include "Kingdom.h"
#include "Monarchy.h"
#include "State.h"

//�� ���������� ���� ������� State - ����������� �� ������� ����������
State* State::begin = new State;

int main() {
	setlocale(LC_ALL, "Russian");

	auto Republic1 = new Republic("������", "��������");
	State::Print();
}