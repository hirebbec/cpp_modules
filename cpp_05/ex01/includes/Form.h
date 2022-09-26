//
// Created by Hilaria Rebbeca on 9/13/22.
//

#ifndef CPP05_FORM_H
#define CPP05_FORM_H
#include <string>
#include <iostream>
#include "Bureaucrat.h"

class Bureaucrat;

class Form {
private:
    const std::string name;
    bool indicator;
    const int signGrade;
    const int executeGrade;
public:
    void beSigned(Bureaucrat bureaucrat);
    Form();
    ~Form();
    Form(const Form &form);
    Form &operator=(const Form &form);
    Form(const std::string name, int executeGrade, int signGrade);
    bool getIndicator() const;
    const std::string getName() const;
    int getSignGrade() const;
    int getExecuteGrade() const;
};

std::ostream	&operator<<(std::ostream &o, const Form &form);

#endif //CPP05_FORM_H
