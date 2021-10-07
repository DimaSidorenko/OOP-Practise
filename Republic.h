#ifndef REPUBLIC_H
#define REPUBLIC_H

#include "State.h"

class Republic : protected State
{
public:
	Republic();
	Republic(const char* _name, const char* _president_name);
	Republic(const Republic* copy);
	~Republic();
protected: 
	virtual void Show();
	const char* president_name; // название избранного главы государства
	void SetPresidentName(const char* _name);
	const char* GetPresidentName() const;
};

#endif