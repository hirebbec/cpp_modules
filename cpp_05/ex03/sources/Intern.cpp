//
// Created by Hilaria Rebbeca on 9/16/22.
//

#include "../includes/Intern.h"
#include "../includes/Form.h"
#include "../includes/ShrubberyCreationForm.h"
#include "../includes/RobotomyRequestForm.h"
#include "../includes/PresidentialPardonForm.h"
#include "../includes/Bureaucrat.h"

Intern::Intern() {}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &intern) {
    (void)intern;
    return *this;
}

Intern::Intern(const Intern &intern) {
    *this = intern;
}

Form *Intern::makeForm(std::string target, std::string name) {
    Form *forms[3] = {
            new ShrubberyCreationForm(name),
            new RobotomyRequestForm(name),
            new PresidentialPardonForm(name)
    };
    std::string form_names_arr[3] = {
            "shrubbery request",
            "robotomy request",
            "presidential request"
    };

    for (int i = 0; i < 3; i++) {
        if (form_names_arr[i] == target) {
            std::cout << "Intern has successfully created form " << forms[i]->getName() << std::endl;
            {
                for (int j = 0; j < 3; j++) {
                    if (j != i)
                        delete forms[j];
                }
                return (forms[i]);
            }
        }
    }
    for (size_t j = 0; j < 3; j++)
        delete forms[j];
    std::cout << "Intern can't create form " << target << " because:";
    throw Form::UnknownFormName();
}
