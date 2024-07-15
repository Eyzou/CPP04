//
// Created by eyza on 11/07/24.
//

#include "MateriaSource.hpp"
#include "AMateria.h"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < m_size ; i++)
		m_content[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	*this = copy;
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < m_size ; i++)
		if(m_content[i])
				delete m_content[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for(int i = 0; i < m_size ; i++)
			m_content[i] = rhs.m_content[i];
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	for(int i = 0; i< m_size ; i++)
	{
			if(this->m_content[i] == NULL)
			{
				this->m_content[i] = m;
				break;
			}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < m_size ; i++)
	{
		if (this->m_content[i] != NULL  && this->m_content[i]->getType() == type)
			return(this->m_content[i]->clone());
	}
	return(NULL);
}