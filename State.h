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
	static State* begin; // ������ �� ������ ������
	State* next; // ������ �� ���������� � ������
	const char* name; // �������� �����������
	int residents_count; //����� ������� � �����������
};

#endif;


