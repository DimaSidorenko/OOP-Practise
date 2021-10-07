#ifndef STATE_H
#define STATE_H

#include<iostream>
#include <string>

class State
{
public: 	
	static void Print();
	State(const char* _name);
	State(const char* _name, int _residents_count);
	State(const State* copy);
	
	void SetName(const char* _name);
	void SetResidentsCount(int count);
	const char* GetName() const;
	int GetResidentsCount() const;

	~State();	
	virtual void Show();

protected:
	State();
	static State* begin; // ссылка на начало списка
	State* next; // ссылка на следующего в списке
	const char* name; // название государства
	int residents_count; //число жителей в государстве
};

#endif;


