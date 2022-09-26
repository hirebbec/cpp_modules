//
// Created by Hilaria Rebbeca on 9/12/22.
//

#include "./../includes/Bureaucrat.h"
#include "./../includes/Form.h"
#include "./../includes/ShrubberyCreationForm.h"
#include "./../includes/RobotomyRequestForm.h"
#include "./../includes/PresidentialPardonForm.h"
#include "../includes/Intern.h"

int main(){
    Intern someRandomIntern;
    Bureaucrat bureaucrat(1, "hirebbec");
    Form* rrf;
    try {
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        bureaucrat.executeForm(*rrf);
        delete rrf;
        getchar();
        rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
        bureaucrat.executeForm(*rrf);
        delete rrf;
        getchar();
        rrf = someRandomIntern.makeForm("presidential request", "Bender");
        bureaucrat.executeForm(*rrf);
        delete rrf;
        getchar();
        rrf = someRandomIntern.makeForm("lol", "Bender");
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}