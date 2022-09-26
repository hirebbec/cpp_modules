//
// Created by Hilaria Rebbeca on 9/16/22.
//

#ifndef CPP05_PRESIDENTIALPARDONFORM_H
#define CPP05_PRESIDENTIALPARDONFORM_H
#include "Form.h"
#include "Bureaucrat.h"

class PresidentialPardonForm : public Form{
private:
    std::string target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &obj);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
    ~PresidentialPardonForm();
    void execute(Bureaucrat const &bureaucrat) const;
};


#endif //CPP05_PRESIDENTIALPARDONFORM_H
