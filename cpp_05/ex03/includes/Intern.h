//
// Created by Hilaria Rebbeca on 9/16/22.
//

#ifndef CPP05_INTERN_H
#define CPP05_INTERN_H
#include "Form.h"
#include "Bureaucrat.h"


class Intern {
public:
    Intern();
    ~Intern();
    Intern(const Intern &intern);
    Intern &operator=(const Intern &intern);
    Form *makeForm(std::string target, std::string name);
};


#endif //CPP05_INTERN_H
