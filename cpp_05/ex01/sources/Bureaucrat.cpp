//
// Created by Hilaria Rebbeca on 9/12/22.
//

#include "../includes/Bureaucrat.h"

Bureaucrat::Bureaucrat() : name("default") {
    this->grade = 150;
}

Bureaucrat::Bureaucrat(int grade, std::string name) : name(name){
    this->grade = grade;
    if (grade > 150 ){
        throw Bureaucrat::GradeTooLowException();
    }
    else if (grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name), grade(obj.grade){
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj) {
    if (this == &obj)
        return (*this);
    this->grade = obj.grade;
    return (*this);
}

int Bureaucrat::getGrade() const {
    return grade;
}

const std::string Bureaucrat::getName() const{
    return name;
}

void Bureaucrat::decreaseGrade(int value){
    grade -= value;
    if (grade > 150 ){
        throw Bureaucrat::GradeTooLowException();
    }
    else if (grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
}

void Bureaucrat::increaseGrade(int value){
    grade += value;
    if (grade > 150 ){
        throw Bureaucrat::GradeTooLowException();
    }
    else if (grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return " grade is too Low!";
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return " grade is too High!";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
    os << "name: " << bureaucrat.getName() << "; grade: " << bureaucrat.getGrade();
    return os;
}

void Bureaucrat::signForm(Form &form) {
    try {
        form.beSigned(*this);
        std::cout  << this->getName() << " signs " << form.getName() << std::endl;
    }
    catch (const std::exception &e){
        std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}