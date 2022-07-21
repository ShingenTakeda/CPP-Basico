#include <folha.hpp>
#include "headers/Classe.hpp"

Folha f;

namespace Vaca
{
    void cout()
    {
        printf("Oi mundo \n");
    }

    class Boi
    {
        private:
            int x;
            int y;

        public:
            void Mugido()
            {
                std::cout << "Moo" << std::endl;
                std::cout << x << std::endl;
                std::cout << y << std::endl;
            }

            Boi(int _x, int _y) : x(_x), y(_y)
            {

            }

    };

    class Sanduiche
    {
        private:
            std::string nome;
        
        public:
            void Messensagem()
            {
                std::cout << nome << std::endl;
            }

            Sanduiche(std::string _nome) : nome(_nome) {}
    };
}

int main()
{
    InitFolha(f);

    Vaca::Sanduiche misto("misto");

    misto.Messensagem();

    Vaca::Boi boi(12, 50);
    boi.Mugido();
    std::cout << "Hello world!" << std::endl;
    Vaca::cout();

    MatematicaBasica mtb;

    std::cout << mtb.Somar(60, 9) << std::endl;

    std::cout << f.nomeArvore << " " << f.qntFolhas << std::endl;

    return 0;
}