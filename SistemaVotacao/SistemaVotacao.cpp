#include "stdafx.h"
#include "Candidato.h"
#include "Voto.h"

// Crie uma opção para cadastrar um novo candidato;
void cadastrarCandidato(std::list<Candidato>& candidatos);
// Crie uma opção para listar os candidatos cadastrados;
void listarCandidatos(const std::list<Candidato>& candidatos);
// Crie uma opção para cadastrar um novo voto;
void cadastrarVoto(std::list<Voto>& votos);
// Crie uma opção para fazer a apuração da eleição (computar os votos atuais e anunciar os vencedores).
void apurarEleicao(const std::list<Candidato>& candidatos, const std::list<Voto>& votos);


int main() {
    std::list<Candidato> candidatos;
    std::list<Voto> votos;
    int opcao;

    do {
        std::cout << "\nSistema de Votacao\n";
        std::cout << "\n======================================\n";
        std::cout << "1 - Cadastrar novo candidato\n";
        std::cout << "2 - Listar candidatos cadastrados\n";
        std::cout << "3 - Cadastrar novo voto\n";
        std::cout << "4 - Apurar eleicao\n";
        std::cout << "0 - Sair\n";
        std::cout << "======================================\n";
        std::cout << "Escolha uma opcao: ";
        std::cin >> opcao;

        switch (opcao) {
        case 1:
            cadastrarCandidato(candidatos);
            break;
        case 2:
            listarCandidatos(candidatos);
            break;
        case 3:
            cadastrarVoto(votos);
            break;
        case 4:
            apurarEleicao(candidatos, votos);
            break;
        case 0:
            std::cout << "Saindo...\n";
            break;
        default:
            std::cout << "Opcao invalida! Por favor, tente novamente.\n";
        }
    } while (opcao != 0);

    return 0;
}

// cadastrar candidato
void cadastrarCandidato(std::list<Candidato>& candidatos) {
    std::string nome, partido, cargo;
    int codigo;

    std::cout << "Nome do candidato: ";
    std::cin.ignore();
    std::getline(std::cin, nome);
    std::cout << "Codigo do candidato: ";
    std::cin >> codigo;
    std::cout << "Partido: ";
    std::cin.ignore();
    std::getline(std::cin, partido);
    std::cout << "Cargo: ";
    std::getline(std::cin, cargo);

    candidatos.push_back(Candidato(nome, codigo, partido, cargo));
    std::cout << "Candidato cadastrado com sucesso!\n";
}
