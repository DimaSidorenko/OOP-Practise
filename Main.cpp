#include "Republic.h"
#include "Kingdom.h"
#include "Monarchy.h"
#include "State.h"

//Не получается явно указать State - абстрактным из данного объявления
State* State::begin = new State;

int main() {
	setlocale(LC_ALL, "Russian");

	auto Republic1 = new Republic("Греция", "Гибискус");
	State::Print();
}