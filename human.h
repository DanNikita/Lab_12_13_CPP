// human.h
#include <string>
#include <sstream>
#pragma once /* ������ �� �������� ����������� ������������� ����� */
class human {
public:
	// ����������� ������ human
	human(std::string last_name, std::string name, std::string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	// ��������� ��� ��������
	std::string get_full_name()
	{
		std::ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}
	void get_total_info()
	{
		std ::cout << "Name: " << name << "\nSurname: " << last_name << "\nFathers name: " << second_name;
	}
private:
	std::string name; // ���
	std::string last_name; // �������
	std::string second_name; // ��������
};
