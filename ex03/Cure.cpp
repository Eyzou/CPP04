//
// Created by eyza on 11/07/24.
//

#include "Cure.h"

Cure::Cure() : AMateria("Cure")
{
    std::cout << "Constructor of a Materia of type: " << m_type << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy.m_type)
{
    std::cout << "Copy Constructor of a Materia of type: " << m_type << std::endl;
    *this = copy;
}

Cure::~Cure()
{
    std::cout << "Destructor of a Materia of type: " << m_type << std::endl;
}

Cure &Cure::operator=(const Cure &rhs)
{
    std::cout << "Operator assignment from" << rhs.m_type << std::endl;
    this->m_type = rhs.m_type;
    return *this;
}

//comme la mere a cette fonction dois-je la mettre ici ?
AMateria* Cure::clone() const
{
    std::cout << "Cloning a materia of type : " << m_type << std::endl;
    return new Cure();
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() <<"'s wounds"<< std::ends;
}