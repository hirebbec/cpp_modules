//
// Created by Hilaria Rebbeca on 9/16/22.
//

#ifndef CPP05_ROBOTOMYREQUESTFORM_H
#define CPP05_ROBOTOMYREQUESTFORM_H
#include "Form.h"
#include "Bureaucrat.h"

class RobotomyRequestForm : public Form{
private:
    std::string target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &obj);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
    void execute(Bureaucrat const &bureaucrat) const;
};


#endif //CPP05_ROBOTOMYREQUESTFORM_H
