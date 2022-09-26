//
// Created by Hilaria Rebbeca on 9/24/22.
//


#include "./../includes/Base.h"
#include "./../includes/B.h"
#include "./../includes/A.h"
#include "./../includes/C.h"

Base *generate(void){
    std::srand((unsigned)time(NULL));
    int i = (rand()%3)+1;
    if (i == 1){
        std::cout << "A class created" << std::endl;
        return new A;
    }
    else if (i == 2) {
        std::cout << "B class created" << std::endl;
        return new B;
    }
    else {
        std::cout << "C class created" << std::endl;
        return new C;
    }
}

void identify(Base& p){
    try
    {
        (void)dynamic_cast<A &>(p);
        std::cout << "it's A" << std::endl;
    }
    catch(const std::exception& e) {}
    try
    {
        (void)dynamic_cast<B &>(p);
        std::cout << "it's B" << std::endl;
    }
    catch(const std::exception& e) {}

    try
    {
        (void)dynamic_cast<C &>(p);
        std::cout << "it's C" << std::endl;
    }
    catch(const std::exception& e) {}
}

void identify(Base* p){
    if (dynamic_cast<A *>(p) != NULL)
    {
        std::cout << "it's A" << std::endl;
        return ;
    }
    if (dynamic_cast<B *>(p) != NULL)
    {
        std::cout << "it's B" << std::endl;
        return ;
    }
    if (dynamic_cast<C *>(p) != NULL)
    {
        std::cout << "it's C" << std::endl;
        return ;
    }
}

int main(){
    Base *p = generate();
    identify(p);
    identify(*p);
    delete p;
}
