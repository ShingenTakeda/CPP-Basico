#include <iostream>

/*PASSANDO POR REFERENCIA
*passa o valor da referencia para a variavel/objeto sem precisar da criaçâo de uma nova variavel
*/
void FuncaoDeReferencia(int &val)
{
    val += 5;
}

/*TEMPLATE DE FUNÇÂO
*declara-se com template <typename T>
*onde o T e o substituto para o tipo de dado que for passado no futuro.
*/
template <typename T>
void gprint(T val)
{
    std::cout << val << std::endl;
}

int main()
{
    int refTest = 5;
    std::cout << "valor inicial: " << refTest << std::endl;
    FuncaoDeReferencia(refTest);
    std::cout << "valor depois de incrementacao atraves de referencia: " << refTest << std::endl; 

    /*POINTER
    *pointer indica o endereço na memoria onde a variavel esta.
    *passa-se a variavel desejada por referencia
    */
    int *pointerTest = &refTest;

    std::cout << "onde na memoria o refTest esta: " << pointerTest << std::endl;
    std::cout << "o valor da variavel que o pointerTest esta apontando: " << *pointerTest << std::endl;

    gprint<std::string>("Print generico comeca aqui");
    gprint<int>(refTest);
    gprint<int*>(pointerTest);

    gprint<float>(6.0f);

    uint64_t num = 0;

    std::cin >> num;

    switch(num)
    {
        case 0:
            gprint<int>(num);
            break;

        case 1:
            gprint<int>(num);
            break;
    
        default:
            break;
    }

    return 0;
}