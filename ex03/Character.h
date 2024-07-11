//
// Created by eyza on 11/07/24.
//

#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>
#include "ICharacter.h"

class Character : public ICharacter {

    public:
        Character();
        Character(std::string name);
        Character(Character const &copy);
        virtual ~Character();
        Character &operator=(const Character &rhs);

        //getter
        virtual std::string const & getName() const;

        // member function
        virtual void equip(AMateria *m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);

    private:
        static const int m_invSize = 4;
        std::string m_name;
        AMateria *m_inventory[m_invSize];

};



#endif //CHARACTER_H
