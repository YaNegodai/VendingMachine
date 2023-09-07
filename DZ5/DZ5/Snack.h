#pragma once
#include <string>

class Snack
{
public:
	//�����������
	Snack(const std::string& name);
	//���������
	~Snack() = default;
	//�������
	std::string getName() const;
private:
	 std::string name_;
};