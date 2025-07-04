#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

    int idade = 0;

    if (argc == 1)
    {
        cout << "Sem argumento, por favor verifique se os argumentos foram passados \n";
    }
    else if (argc == 4)
    {
        cout << "por favor verifique se os argumentos foram passados , vc passou argumentos a mais, só precisamos do seu n\n";
    }
    else
    {
        cout << "Bom dia " << argv[1] << endl;
        idade = 2023 - atoi(argv[2]);
        cout << "Sua Idade " << idade << endl;
    }
    return 0;
}