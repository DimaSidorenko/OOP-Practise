#include "State.h"

void State::Print() {
	State* cur = begin->next;
	while (cur != NULL) {
		cur->Show();
		cur = cur->next;
	}
}


State::State() {
	if (begin != nullptr) {
		State* cur = begin;
		while (cur->next != NULL) {
			cur = cur->next;
		}
		cur->next = this;
	}
}


State::State(const char* _name) : State() {
	name = _name;
	residents_count = -1;
	next = nullptr;
}


State::State(const char* _name, int _residents_count): State() {
	name = _name;
	residents_count = _residents_count;
	next = nullptr;
}


State::State(const State* copy) {
	name = copy->name;
	residents_count = copy->residents_count;
	next = nullptr;
}

State::~State() {	
	State cur = State::begin;
	while (cur.next != this) {
		cur = cur.next;
	}
	cur.next = this->next;

	delete[]name;
}

void State::Show(){
	std::cout << "Название государства: " << name << '\n';
	std::cout << "Население государство: "<< (residents_count == -1 ? "неизвестно" : std::to_string(residents_count)) << "\n";
	std::cout << '\n';
}

void State::SetName(const char* _name) { name = _name; }
void State::SetResidentsCount(int count) {	residents_count = count; }
int State::GetResidentsCount() const { return residents_count; }
const char* State::GetName() const { return name; }
