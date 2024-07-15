//
// Created by eyza on 11/07/24.
//

#include "Character.h"

Character::Character() : m_name("Default")
{

    for (int i = 0; i < m_invSize; i++)
        this->m_inventory[i] = NULL;
    std::cout << "Constructor of the Character named : " << m_name << std::endl;
}

Character::Character(std::string name): m_name(name)
{
    for (int i = 0; i < m_invSize; i++)
        this->m_inventory[i] = NULL;
    std::cout << "Parametric constructor of the Character named : " << m_name << std::endl;
}

Character::Character(Character const &copy)
{
    for (int i = 0; i < m_invSize; i++)
        this->m_inventory[i] = copy.m_inventory[i];
    this->m_name = copy.m_name;
    std::cout << "Copy Constructor of the Character named : " << m_name << std::endl;
}

Character::~Character()
{
    for (int i = 0; i < m_invSize; i++)
        delete this->m_inventory[i];
    std::cout << "Destructor of the Character named : " << m_name << std::endl;
}

Character &Character::operator=(const Character &rhs)
{
    std::cout << "Assignemnt operator from : " << rhs.m_name << std::endl;
    if (this != &rhs) {
        this->m_name = rhs.m_name;
        for(int i = 0; i < 4; i++)
            this->m_inventory[i]  = rhs.m_inventory[i];
    }
    return *this;
}

std::string const & Character::getName() const
{
    return this->m_name;
}

void Character::equip(AMateria *m)
{
    if(!m)
    {
        std::cout << "Attempted to equip a null Materia." << std::endl;
        return;
    }
    for(int i = 0; i < m_invSize ; i++)
    {
        if (this->m_inventory[i] == NULL)
        {
            this->m_inventory[i] = m;
            std::cout << "Materia of type " << this->m_inventory[i]->getType() << " added to inventory" << std::endl;
            return;
        }
    }
        std::cout << "This materia does not exist" << std::endl;
}

void Character::unequip(int idx)
{
    for(int i = 0; i < m_invSize ; i++)
        if(i == idx && this->m_inventory[idx] != NULL)
                this->m_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    for(int i = 0; i < m_invSize ; i++)
        if(i == idx && this->m_inventory[idx] != NULL)
            this->m_inventory[idx]->use(target);
}
