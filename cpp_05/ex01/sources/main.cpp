//
// Created by Hilaria Rebbeca on 9/12/22.
//

#include "./../includes/Bureaucrat.h"
#include "./../includes/Form.h"

int main(){
    Bureaucrat bureaucrat1(1, "lol");
    Bureaucrat bureaucrat2(150, "kek");
    Form form("form", 1, 15);
    std::cout << form << std::endl;
    bureaucrat1.signForm(form);
    getchar();
    bureaucrat2.signForm(form);
    return (0);
}