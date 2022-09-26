//
// Created by Hilaria Rebbeca on 9/11/22.
//

#ifndef CPP04GIT_BRAIN_H
#define CPP04GIT_BRAIN_H
#include "Animal.hpp"


class Brain {
protected:
    std::string *ideas;
public:
    Brain();
    ~Brain();
    Brain(const Brain &obj);
    Brain   &operator=(const Brain &obj);
    void getIdeas() const;
    void setIdea(std::string idea);
};


#endif //CPP04GIT_BRAIN_H
