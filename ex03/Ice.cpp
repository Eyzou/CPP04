//
// Created by eyza on 11/07/24.
//

#include "Ice.h"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Constructor of a Materia of type: " << m_type << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy.m_type)
{
    std::cout << "Copy Constructor of a Materia of type: " << m_type << std::endl;
    *this = copy;
}

Ice::~Ice()
{
    std::cout << "Destructor of a Materia of type: " << m_type << std::endl;
}

Ice &Ice::operator=(const Ice &rhs)
{
    std::cout << "Operator assignment from" << rhs.m_type << std::endl;
    this->m_type = rhs.m_type;
    return *this;
}

AMateria* Ice::clone() const
{
    std::cout << "Cloning a materia of type : " << m_type << std::endl;
    return new Ice();
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}