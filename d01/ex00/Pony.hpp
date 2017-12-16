#ifndef PONY_CLASS_H
#define PONY_CLASS_H

#include <iostream>
#include <string>

class Pony {
	public:
		std::string	getName(void);
		int			getAge(void);
		void		setName(std::string name);
		void		setAge(int age);

		Pony(std::string name, int age);
		~Pony();

	private:
		std::string	_name;
		int			_age;
};

#endif