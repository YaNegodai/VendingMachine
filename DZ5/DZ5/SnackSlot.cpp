#include <iostream>

#include "SnackSlot.h"

SnackSlot::SnackSlot(const size_t& size)
{
	this->size_ = size;
	snackArrayPtr_ = new Snack * [size_];
	for (size_t i = 0; i < size_; ++i)
	{
		snackArrayPtr_[i] = nullptr;
	}
}

bool SnackSlot::slotIsEmpty(const size_t& pos)
{
	if (snackArrayPtr_[pos] == nullptr)
		return true;
	return false;
}

void SnackSlot::addSnack(Snack* snack)
{
	if (slotIsEmpty(position_))
	{
		if (position_ < size_)
		{
			snackArrayPtr_[position_++] = snack;
		}
		else
		{
			std::cout << "Достигнуто максимальное количество слотов для снеков, пожалуйста, освободите место в этом слоте или заполните другой слот" << "\n";
		}
	}
	else
		std::cout << "Слот заполнен, пожалуйста, освободите место" << "\n";
}

//void SnackSlot::clearSlot(const size_t& pos)
//{
//	if (!slotIsEmpty(pos))
//	{
//		
//		snackArrayPtr_[pos] = nullptr;
//	}
//	else
//		std::cout << "Невозможно очистить пустой слот" << "\n";
//}

void SnackSlot::show() const
{
	for (size_t i = 0; i < position_; ++i)
		std::cout << "Слот со снеками " << i + 1 << ": " << snackArrayPtr_[i]->getName() << "\n";
}

