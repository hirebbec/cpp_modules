//
// Created by Hilaria Rebbeca on 9/12/22.
//

#include "./../includes/Bureaucrat.h"
#include "./../includes/Form.h"
#include "./../includes/ShrubberyCreationForm.h"
#include "./../includes/RobotomyRequestForm.h"
#include "./../includes/PresidentialPardonForm.h"

int main(){
    Form *form1 = new ShrubberyCreationForm("lol");
    Bureaucrat bureaucrat(50, "hirebbec");
    bureaucrat.signForm(*form1);
    getchar();
    bureaucrat.executeForm(*form1);
    /////////////////
    ////////////////
    ///////////////
    Form *form2 = new RobotomyRequestForm("kek");
    getchar();
    bureaucrat.signForm(*form2);
    getchar();
    bureaucrat.executeForm(*form2);
    bureaucrat.executeForm(*form2);
    bureaucrat.executeForm(*form2);
    bureaucrat.executeForm(*form2);
    ////////
    ///////
    /////
    Form *form3 = new PresidentialPardonForm("LOL");
    getchar();
    bureaucrat.signForm(*form3);
    bureaucrat.executeForm(*form3);
    delete(form1);
    delete(form2);

}