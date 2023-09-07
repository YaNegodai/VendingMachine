#pragma once

#include "SnackSlot.h"

class VendingMachine
{
public:
	//Конструктор
	VendingMachine(const size_t& slotSize);
	//Деструктор
	~VendingMachine() = default;
	bool venSlotIsEmpty(const size_t& pos);
	void addSlot(SnackSlot* snackSlot);
	size_t getEmptySlotsCount() const;
	void show() const;

private:
	size_t slotSize_{ 0 };
	SnackSlot** slotArrayPtr_{ nullptr };
	size_t slotPosition_{ 0 };
};