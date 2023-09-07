#pragma once

#include "Snack.h"

class SnackSlot
{
public:
	//Конструктор
	SnackSlot(const size_t& size);
	//Деструктор
	~SnackSlot() = default;
	bool slotIsEmpty(const size_t& pos);
	void addSnack(Snack* snack);
	/*void clearSlot(const size_t& pos) ;*/
	void show() const;
	

private:
	size_t size_{ 0 };
	Snack** snackArrayPtr_{ nullptr };
	size_t position_{ 0 };
};