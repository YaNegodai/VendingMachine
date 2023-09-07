#include <iostream>

#include "VendingMachine.h"

VendingMachine::VendingMachine(const size_t& slotSize)
{
	this->slotSize_ = slotSize;
	slotArrayPtr_ = new SnackSlot* [slotSize_];
	for (size_t i = 0; i < slotSize_; ++i)
	{
		slotArrayPtr_[i] = nullptr;
	}
}

bool VendingMachine::venSlotIsEmpty(const size_t& pos)
{
	if (slotArrayPtr_[pos] == nullptr)
		return true;
	return false;
}



void VendingMachine::addSlot(SnackSlot* snackSlot)
{
	if (venSlotIsEmpty(slotPosition_))
	{
		if (slotPosition_ < slotSize_)
		{
			slotArrayPtr_[slotPosition_++] = snackSlot;
		}
		else
		{
			std::cout << "Достигнуто максимальное количество слотов в машине, пожалуйста, освободите место" << "\n";
		}
	}
	else
	{
		std::cout << "Слот заполнен, пожалуйста, совободите место или заполните другой слот" << "\n";
	}
}

size_t VendingMachine::getEmptySlotsCount() const
{
	return slotSize_ - slotPosition_;
}

void VendingMachine::show() const
{
	for (size_t i = 0; i < slotPosition_; ++i)
	{
		std::cout << "Слот вендингового аппарата " << i + 1 << ":" << "\n";
		slotArrayPtr_[i]->show();
	}
}
