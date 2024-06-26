#include <iostream>
#include <string>
#include <map>

using namespace std;

struct Contato {
    string nome;
    string telefone;
};

int main() {
    map<string, Contato> agenda;
    int opcao;

    do {
        cout << "Menu:" << endl;
        cout << "1. Novo" << endl;
        cout << "2. Remover" << endl;
        cout << "3. Buscar" << endl;
        cout << "4. Editar" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                Contato novoContato;
                cout << "Digite o nome do contato: ";
                cin >> novoContato.nome;
                cout << "Digite o telefone do contato: ";
                cin >> novoContato.telefone;
                agenda[novoContato.nome] = novoContato;
                cout << "Contato adicionado com sucesso!" << endl;
                break;
            }
            case 2: {
                string nomeRemover;
                cout << "Digite o nome do contato a ser removido: ";
                cin >> nomeRemover;
                if (agenda.count(nomeRemover) > 0) {
                    agenda.erase(nomeRemover);
                    cout << "Contato removido com sucesso!" << endl;
                } else {
                    cout << "Contato não encontrado!" << endl;
                }
                break;
            }
            case 3: {
                string nomeBuscar;
                cout << "Digite o nome do contato a ser buscado: ";
                cin >> nomeBuscar;
                if (agenda.count(nomeBuscar) > 0) {
                    Contato contato = agenda[nomeBuscar];
                    cout << "Nome: " << contato.nome << endl;
                    cout << "Telefone: " << contato.telefone << endl;
                } else {
                    cout << "Contato não encontrado!" << endl;
                }
                break;
            }
            case 4: {
                string nomeEditar;
                cout << "Digite o nome do contato a ser editado: ";
                cin >> nomeEditar;
                if (agenda.count(nomeEditar) > 0) {
                    Contato& contato = agenda[nomeEditar];
                    cout << "Digite o novo nome do contato: ";
                    cin >> contato.nome;
                    cout << "Digite o novo telefone do contato: ";
                    cin >> contato.telefone;
                    cout << "Contato editado com sucesso!" << endl;
                } else {
                    cout << "Contato não encontrado!" << endl;
                }
                break;
            }
            case 5:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opção inválida!" << endl;
                break;
        }

        cout << endl;
    } while (opcao != 5);

    return 0;
}