#include "biblioteca.hpp"

Animal::Animal(uint32_t _qnt, std::string _nome, std::string _som) : 
qnt(_qnt), nome(_nome), som(_som) 
{
    std::cout << qnt << "," << nome << "," << som << std::endl;
}

std::string Animal::PrintNome()
{
    return  "Nome do animal:" + nome +  "%\"";
}

std::string Animal::SomAnimal()
{
    return  "Meu som:" + nome +  "%\"";
}