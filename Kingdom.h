#ifndef KINGDOM_H
#define KINGDOM_H

#include "Monarchy.h"

class Kingdom : protected Monarchy
{
public:
	Kingdom(const Kingdom* copy);
	Kingdom();
	Kingdom(const char* _name, const char* _royal_palace);
	Kingdom(const char* _name, const char* _monarch_name, const char* _royal_palace);

protected:
	const char* royal_palace; // название королевского дворца
	virtual void Show();
	void SetRoyalPlace(const char* royal_palace);
	const char* GetRoyalPlace() const;
};

#endif

