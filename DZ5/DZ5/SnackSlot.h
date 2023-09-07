#pragma once

#include "Snack.h"

class SnackSlot
{
public:
	//�����������
	SnackSlot(const size_t& size);
	//����������
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