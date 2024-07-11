//
// Created by eyza on 11/07/24.
//

#ifndef ICE_H
#define ICE_H

#include <string>
#include <iostream>
#include "AMateria.h"

class Ice : public AMateria {

    public:
        Ice();
        Ice(const Ice &copy);
        virtual ~Ice();
        Ice &operator=(const Ice &rhs);

        AMateria* clone() const;
        virtual void use(ICharacter& target);

};



#endif //ICE_H
