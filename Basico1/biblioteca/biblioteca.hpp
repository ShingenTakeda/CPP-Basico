#pragma once
#include <iostream>

class Animal
{
    public:
        std::string PrintNome();
        std::string SomAnimal();

        Animal(uint32_t _qnt, std::string _nome, std::string _som);

    private:
        uint32_t qnt;

    protected:
        std::string nome;
        std::string som;
};