#include "stdafx.h"

/*
Seu programa deverá armazenar, para um voto, os seguintes dados:

Cargo;
Código do candidato;
Então crie 2 listas, uma para conter os candidatos cadastrados; outra para conter os votos computados.
*/

#pragma once
class Voto {
public:
    std::string cargo;
    int codigoCandidato;

    Voto(std::string c, int cod) : cargo(c), codigoCandidato(cod) {}
};
