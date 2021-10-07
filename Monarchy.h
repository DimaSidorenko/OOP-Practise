#ifndef MONARCHY_H
#define MONARCHY_H

#include "State.h"

class Monarchy : protected State
{
public:
	Monarchy(const Monarchy* copy);
	Monarchy();
	Monarchy(const char* _name);
	Monarchy(const char* _name, const char* _king_name);

protected:
	const char* monarch_name; // Имя монарха
	virtual void Show();
	void SetPresidentName(const char* name);
	const char* GetPresidentName() const;
};

#endif