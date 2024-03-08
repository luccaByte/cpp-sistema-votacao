#include "stdafx.h"
#include <list>
#include <string>
#include <map>

/*
Seu programa deverá armazenar, para um candidato, os seguintes dados:

Nome do candidato;
Código do candidato;
Partido;
Cargo.
*/

class Candidato {
public:
    std::string candidato;
    int codigo;
    std::string partido;
    std::string cargo;

    Candidato(std::string n, int cod, std::string part, std::string c) : candidato(n), codigo(cod), partido(part), cargo(c) {}
};

/*
Seu programa deverá armazenar, para um voto, os seguintes dados:

Cargo;
Código do candidato;
Então crie 2 listas, uma para conter os candidatos cadastrados; outra para conter os votos computados.
*/

class Voto {
public:
    std::string cargo;
    int codigoCandidato;

    Voto(std::string c, int cod) : cargo(c), codigoCandidato(cod) {}
};

// Crie uma opção para cadastrar um novo candidato;
void cadastrarCandidato(std::list<Candidato>& candidatos);
// Crie uma opção para listar os candidatos cadastrados;
void listarCandidatos(const std::list<Candidato>& candidatos);
// Crie uma opção para cadastrar um novo voto;
void cadastrarVoto(std::list<Voto>& votos);
// Crie uma opção para fazer a apuração da eleição (computar os votos atuais e anunciar os vencedores).
void apurarEleicao(const std::list<Candidato>& candidatos, const std::list<Voto>& votos);
