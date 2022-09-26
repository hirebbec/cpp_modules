//
// Created by Hilaria Rebbeca on 9/12/22.
//

#ifndef CPP05_BUREAUCRAT_H
#define CPP05_BUREAUCRAT_H
#include <string>
#include <iostream>
#include "Form.h"

class Form;

class Bureaucrat {
private:
    const std::string name;
    int grade;
public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(int grade, const std::string name);
    Bureaucrat(const Bureaucrat &obj);
    Bureaucrat &operator=(Bureaucrat const &obj);
    int getGrade() const;
    const std::string getName() const;
    void increaseGrade(int value);
    void decreaseGrade(int value);
    void signForm(Form &form);

    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);


#endif //CPP05_BUREAUCRAT_H
