#include "Form.hpp"

Form::Form(const std::string name, int sign, int ex) : _name(name), _signgrade(sign), _exgrade(ex)
{
	this->_signed = false;
}

Form::~Form()
{
}



