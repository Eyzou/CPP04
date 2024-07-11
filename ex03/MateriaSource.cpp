//
// Created by eyza on 11/07/24.
//

#include "IMateriaSource.hpp"
//TODO

MateriaSource();
MateriaSource(MateriaSource const &copy);
virtual ~MateriaSource();
MateriaSource &operator=(MateriaSource const &rhs);

virtual ~IMateriaSource();
virtual void learnMateria(AMateria*) = 0;
virtual AMateria* createMateria(std::string const & type) = 0;