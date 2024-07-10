//
// Created by eyza on 09/07/24.
//

#include "A_Animal.h"

A_Animal::A_Animal() : m_type("undefined A_Animal")
{
    std::cout << "A_Animal constructor called" << std::endl;
}

A_Animal::A_Animal(A_Animal const &copy)
{
    *this = copy;
    std::cout << "A_Animal copy constructor called" << std::endl;
}

A_Animal::~A_Animal()
{
    std::cout << "A_Animal destructor called" << std::endl;
}

A_Animal const &A_Animal::operator=(A_Animal const &rhs)
{
    std::cout << "A_Animal copy assignment called" << std::endl;
    if (this != &rhs)
        this->m_type = rhs.getType();
    return *this;
}

std::string const &A_Animal::getType() const
{
    return m_type;
}

void A_Animal::makeSound() const
{
    std::cout << "An A_Animal " << this->m_type << " made a sound!" << std::endl;
}