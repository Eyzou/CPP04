//
// Created by eyza on 09/07/24.
//

#ifndef A_ANIMAL_H
#define A_ANIMAL_H

#include <string>
#include <iostream>

class A_Animal {

    public:
        A_Animal();
        A_Animal(const A_Animal &copy);
        virtual ~A_Animal();
        A_Animal const &operator=(A_Animal const &rhs);

        virtual void makeSound() const;
        virtual std::string const &getType() const;

    protected:
        std::string m_type;
};




#endif //A_ANIMAL_H
