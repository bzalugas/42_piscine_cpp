#include <iostream>

class CopyTest {
public:
	std::string	&getStr() {
		return this->_s;
	}
	void				setStr(const std::string &s) {
		this->_s = s;
	}
private:
	std::string	_s;
};


int main()
{
	CopyTest c;

	c.setStr("Hello");
	std::cout << c.getStr() << std::endl;
	std::string &s = c.getStr();
	s = "ABC";
	std::cout << c.getStr() << std::endl;
	return 0;
}
