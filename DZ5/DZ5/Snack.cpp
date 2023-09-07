#include "Snack.h"

Snack::Snack(const std::string& name)
{
	this->name_ = name;
}

std::string Snack::getName() const
{
	return this->name_;
}
