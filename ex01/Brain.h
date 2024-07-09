//
// Created by eyza on 09/07/24.
//

#ifndef BRAIN_H
#define BRAIN_H

#include <string>
#include <iostream>

class Brain {

    public:
         Brain();
         Brain(std::string *ideas);
         Brain(Brain const &copy);
         ~Brain();
         Brain const &operator=(Brain const &rhs);

    private:
        std::string *m_ideas;
};




#endif //BRAIN_H
