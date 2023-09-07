#pragma once
#include <string>

class Snack
{
public:
	//Конструктор
	Snack(const std::string& name);
	//Деструтор
	~Snack() = default;
	//Функции
	std::string getName() const;
private:
	 std::string name_;
};