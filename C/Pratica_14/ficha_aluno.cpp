#include <iostream>
#include <vector>
#include <regex>

using namespace std;


struct Aluno {
    string nome;
    string data_nascimento;
    string telefone;
};

struct Ficha_aluno{
    Aluno aluno;
    string num_matricula;
    string serie;
};
void add_aluno(vector <Ficha_aluno> &ficha_aluno);
void lista_alunos(vector <Ficha_aluno> &ficha_aluno);
bool valida_telefone(string& telefone);

int main() {
    vector <Ficha_aluno> al;
        add_aluno(al);
        lista_alunos(al);
    return 0;
}

void add_aluno(vector <Ficha_aluno> &ficha_aluno){
    Ficha_aluno al;
    char resposta;
    string telefone;

    do{
        cout << "digite o nome" << endl;
        cin.ignore();
        getline(cin, al.aluno.nome);

        cout << "digite data de nascimento" << endl;
        cin >> al.aluno.data_nascimento;

        do{
            cout << "digite o telefone (xx-xxxxxxxxx)" << endl;
            cin >> telefone;

        }while(!valida_telefone(telefone));

    

        cout << "digite o numero da matricula " << endl;
        cin >> al.num_matricula;

        cout << "digite a serie que o aluno será matriculado" << endl;
        cin.ignore();
        getline(cin, al.serie);

        ficha_aluno.push_back(al);

        cout << "deseja adicionar outro aluno?" << endl;
        cin >> resposta;

    }while(resposta == 's');
    

}

void lista_alunos(vector <Ficha_aluno> &ficha_aluno){
    for(Ficha_aluno al : ficha_aluno){
        cout << "----------------------------";
        cout << "Nome: "<< al.aluno.nome <<
        "\nData de nascimento: "<< al.aluno.data_nascimento <<
        "\nTelefone: "<< al.aluno.telefone <<
        "\nNumero de matricula: "<< al.num_matricula <<
        "\nSerie:" << al.serie << endl;
    }
}

// void busca_alunos(Ficha_aluno &al){

// }

// void remove_alunos(Ficha_aluno &al){

// }

// void alterar_alunos(Ficha_aluno &al){

// }


bool valida_telefone(string& telefone) {
        /**
         * valida_telefone: Esta função valida o telefone utilizando um regex.
         * Paramentro telefone do tipo string .
         * retorna true ou false.
         */
    regex datePattern(R"(\d{2}-\d{9})");

    return regex_match(telefone, datePattern);
};