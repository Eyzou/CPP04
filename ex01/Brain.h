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
        Brain(Brain const &copy);
        ~Brain();
        Brain const &operator=(Brain const &rhs);

		std::string const &getIdeas() const;

    private:
        std::string *m_ideas;
};




#endif //BRAIN_H
