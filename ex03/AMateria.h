//
// Created by eyza on 11/07/24.
//

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include "ICharacter.h"

//Forward declaration to resolve the fact that the compiler does know about this class.
class ICharacter;

class AMateria {

    public:
        AMateria();
        AMateria(const AMateria &copy);
        AMateria(std::string const &type);
        virtual ~AMateria();
        AMateria &operator=(AMateria const &rhs);

        std::string const &getType() const;

        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter& target);

    protected:
        std::string m_type;

};

#endif //AMATERIA_H
