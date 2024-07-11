//
// Created by eyza on 11/07/24.
//

#include <iostream>
#include "AMateria.h"

AMateria::AMateria() : m_type ("default")
{
    std::cout << "Constructor of Materia of type : " << m_type << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
    std::cout << "Copy Constructor of Materia of type : " << m_type << std::endl;
    *this = copy;
}

AMateria::AMateria(std::string const &type): m_type(type)
{
    std::cout << "Copy Constructor of Materia of type : " << m_type << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "Copy Constructor of Materia of type : " << m_type << std::endl;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
    std::cout << "Operator assignment from" << rhs.m_type << std::endl;
    if(this != &rhs)
        this->m_type = rhs.m_type;
    return *this;
}

std::string const &AMateria::getType() const
{
    return this->m_type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "I am a virtual Materia - you should replace me " << std::endl;
}
