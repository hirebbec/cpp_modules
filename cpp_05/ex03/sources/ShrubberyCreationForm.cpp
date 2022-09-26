//
// Created by Hilaria Rebbeca on 9/16/22.
//

#include "../includes/ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery form", 137, 145), name("Shrubbery_default_form"){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) {
    *this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj) {
    (void)obj;
    return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form("Shrubbery form", 137, 145), name(name){}

void ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const {
    std::ofstream file;

    this->Form::executeCheck(bureaucrat);
    file.open(name + "_shrubbery");
    if (file.good() == false){
        throw Form::fileDidNotOpened();
    }
    file << "            @" << std::endl;
    file << "      @ @ @  @ @ @" << std::endl;
    file << "    @  @\\/@ @ /__@" << std::endl;
    file << "    @@@ @\\ / @/  @ @" << std::endl;
    file << "   @\\  \\/@| @ | @" << std::endl;
    file << "  @__\\@ \\ |/ \\| / @" << std::endl;
    file << "     __\\|@|  ||/__/@" << std::endl;
    file << "    /  \\ \\\\  / /__" << std::endl;
    file << "   @    \\  \\/ /   @" << std::endl;
    file << "         |\" '|" << std::endl;
    file << "         |\"  |" << std::endl;
    file << "         |\"  |" << std::endl;
    file << "        ~|\"  |~" << std::endl;
    file << "    ~~~~       ~~~~" << std::endl;
    file << "  ~~               ~~~";
    file.close();
}