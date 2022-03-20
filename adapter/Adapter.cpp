#include <iostream>
#include <string>

class Target {
public :
	virtual ~Target() = default;

	virtual std::string Request() connst {
		return "Target: The defaut target's behabior.";
	}
};