//
// Created by eyza on 11/07/24.
//

#ifndef CURE_H
#define CURE_H

#include <string>
#include <iostream>
#include "AMateria.h"

class Cure : public AMateria {

    public:
        Cure();
        Cure(const Cure &copy);
        virtual ~Cure();
        Cure &operator=(const Cure &rhs);

        AMateria* clone() const;
        virtual void use(ICharacter& target);

};

#endif //CURE_H
