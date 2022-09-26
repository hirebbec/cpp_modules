//
// Created by Hilaria Rebbeca on 9/16/22.
//

#ifndef CPP05_SHRUBBERYCREATIONFORM_H
#define CPP05_SHRUBBERYCREATIONFORM_H
#include "Form.h"
#include "Bureaucrat.h"


class ShrubberyCreationForm : public Form{
private:
    const std::string name;
public:
    ShrubberyCreationForm();
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &obj);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
    void execute(Bureaucrat const &bureaucrat) const;
    ShrubberyCreationForm(std::string name);
};


#endif //CPP05_SHRUBBERYCREATIONFORM_H
