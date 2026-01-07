#pragma once

class Figures {
protected:
	std::string Name;
	int NumbersSides;
public:
	Figures();
	virtual void get_print();
};