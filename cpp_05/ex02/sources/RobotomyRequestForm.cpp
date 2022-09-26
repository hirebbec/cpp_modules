//
// Created by Hilaria Rebbeca on 9/16/22.
//

#include "../includes/RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Form", 45, 72), target("default"){}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Form", 45, 72), target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) {
    *this = obj;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj) {
    (void)obj;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const {
    this->executeCheck(bureaucrat);
    std::cout << "ZZZRSHSH ZSRHHHHHHH RRRR" << std::endl;
    if (rand() % 2 == 0) {
        std::cout << target << " was robotomized" << std::endl;
    }
    else{
        std::cout << target << " was not robotomized" << std::endl;
    }
}