#pragma once

class IrregularFigures : public std::exception {
private:
	std::string Messange;
public:
	IrregularFigures(std::string messange);
	std::string getMessage();
};

