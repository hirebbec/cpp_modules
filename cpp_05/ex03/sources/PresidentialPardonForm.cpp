//
// Created by Hilaria Rebbeca on 9/16/22.
//

#include "../includes/PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidental form", 5, 25), target("default target"){}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidental form", 5, 25), target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) {
    *this = obj;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj) {
    (void)obj;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const {
    this->executeCheck(bureaucrat);
    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}