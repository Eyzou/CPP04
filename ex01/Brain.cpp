//
// Created by eyza on 09/07/24.
//

#include "Brain.h"

Brain::Brain()
{
	this->m_ideas = new std::string[100];
	for (int i; i < 100; i++)
		m_ideas[i] = "Brain is full of ideas";
    std::cout << "Default Brain constructor called" << std::endl;
}


Brain::Brain(const Brain &copy)
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
	this->m_ideas = rhs.getIdeas();
    return *this;
}

std::string const &Brain::getIdeas() const
{
    return this->m_ideas;
}

