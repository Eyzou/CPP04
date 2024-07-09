//
// Created by eyza on 09/07/24.
//

#include "Brain.h"

Brain::Brain()
{
    std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(std::string *ideas) : m_ideas(ideas)
{
    std::cout << "Array Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &copy) :
{
    *this = copy;
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain const &Brain::operator=(Brain const &rhs)
{
    std::cout << "Brain copy assignment called" << std::endl;
    Animal::operator=(rhs);
    return *this;
}
std::string const &Brain::getType() const
{
    return this->m_type;
}

void Brain::setType(std::string const &type)
{
    this->m_type = type;
}

void Brain::makeSound() const
{
    std::cout << "MIAOU" << std::endl;
}