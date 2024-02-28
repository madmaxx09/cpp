#include <iostream>

class Form
{
private:
	const std::string _name;
	bool _signed;
	const int _signgrade;
	const int _exgrade;	
public:
	Form(const std::string name, int sign, int ex);
	~Form();
};


