//
// Created by Hilaria Rebbeca on 9/12/22.
//

#include "./../includes/Bureaucrat.h"

int main(){
    try {
        Bureaucrat bureaucrat1(111, "hirebbec");
        Bureaucrat bureaucrat2(bureaucrat1);
        Bureaucrat bureaucrat3 = bureaucrat1;
        std::cout << bureaucrat1 << std::endl;
        std::cout << bureaucrat2 << std::endl;
        std::cout << bureaucrat3 << std::endl;
        bureaucrat1.decreaseGrade(1000);
    }
    catch (std::exception &e) {
        std::cout << e.what();
    }
    return (0);
}