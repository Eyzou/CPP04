//
// Created by eyza on 11/07/24.
//

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &copy);
        virtual ~MateriaSource();
        MateriaSource &operator=(MateriaSource const &rhs);

        virtual ~IMateriaSource();
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
}

#endif //MATERIASOURCE_HPP
