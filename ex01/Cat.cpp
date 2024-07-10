//
// Created by eyza on 09/07/24.
//

#include "Cat.h"

Cat::Cat() : m_type("Cat")
{
	this->brain = new Brain;
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal()
{
    *this = copy;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{	
	delete [] this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat const &Cat::operator=(Cat const &rhs)
{
    std::cout << "Cat copy assignment called" << std::endl;
    Animal::operator=(rhs);
    return *this;
}
std::string const &Cat::getType() const
{
    return this->m_type;
}

void Cat::setType(std::string const &type)
{
    this->m_type = type;
}

void Cat::makeSound() const
{
    std::cout << "MIAOU" << std::endl;
}