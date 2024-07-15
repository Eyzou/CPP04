//
// Created by eyza on 11/07/24.
//

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include "AMateria.h"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &copy);
        virtual ~MateriaSource();
        MateriaSource &operator=(MateriaSource const &rhs);

        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);

	private:
		static const int m_size = 4;
		AMateria *m_content[m_size];
};

#endif //MATERIASOURCE_HPP
