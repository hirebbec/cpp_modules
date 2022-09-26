//
// Created by Hilaria Rebbeca on 9/13/22.
//

#include "../includes/Form.h"
#include "../includes/Bureaucrat.h"

Form::Form() : name("default"), indicator(false), signGrade(1), executeGrade(1){}

Form::~Form() {}

Form::Form(const std::string name, int executeGrade, int signGrade)
: name(name), indicator(false), signGrade(signGrade), executeGrade(executeGrade){}

bool Form::getIndicator() const{
    return indicator;
}

void Form::beSigned(Bureaucrat bureaucrat) {
    if (bureaucrat.getGrade() <= signGrade){
        indicator = true;
    }
    else throw Bureaucrat::GradeTooLowException();
}

const std::string Form::getName() const{
    return name;
}

Form &Form::operator=(const Form &form) {
    if (this == &form)
        return (*this);
    return (*this);
}

int Form::getExecuteGrade() const {
    return executeGrade;
}

int Form::getSignGrade() const{
    return signGrade;
}

std::ostream	&operator<<(std::ostream &o, const Form &form)
{
    o << "[" << form.getName() << "]" << std::endl;
    o << "\t" << "signed status : " << form.getIndicator() << std::endl;
    o << "\t" << "grade needed to sign : " << form.getSignGrade() << std::endl;
    o << "\t" << "grade needed to execute : " << form.getExecuteGrade() << std::endl;
    return (o);
};

void Form::executeCheck(const Bureaucrat &bureaucrat) const{
    if (this->getIndicator() == false){
        throw Form::formNotSignedException();
    }
    if (this->getExecuteGrade() < bureaucrat.getGrade()){
        throw Bureaucrat::GradeTooLowException();
    }
}

const char *Form::formNotSignedException::what() const throw() {
    return " Form is not Signed";
}

const char *Form::fileDidNotOpened::what() const throw() {
    return " File did not opened";
}