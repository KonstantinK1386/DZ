#include <iostream>

#include "MyExeptions.h"

IrregularFigures::IrregularFigures(std::string messange) {
	Messange = messange;
};
std::string IrregularFigures::getMessage() { return Messange; };