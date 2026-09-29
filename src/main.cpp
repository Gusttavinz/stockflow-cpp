#include <iostream>
#include <string>
#include <vector>

struct Produto { 
    int id;
    std::string nome;
    double preco;
    int quantidade;

};

int main() {

    Produto produto;
    std::vector<Produto> produtos;

    int opcao;

    do {

        std::cout << "\n===== STOCKFLOW C++ =====\n";
        std::cout << "1 - Cadastrar produto\n";
        std::cout << "2 - Listar produtos\n";
        std::cout << "3 - Buscar produto\n";
        std::cout << "4 - Sair\n";
        std::cout << "Escolha uma opcao: ";
        std::cin >> opcao;
        switch (opcao) {

            case 1:
                std::cout << "\n--- CADASTRAR PRODUTO ---\n";
                
                std::cout << "Digite o ID: ";
                std::cin >> produto.id;
                
                std::cout << "Digite o nome: ";
                std::cin >> produto.nome;
                
                std::cout << "Digite o preco: ";
                std::cin >> produto.preco;
                
                std::cout << "Digite a quantidade: ";
                std::cin >> produto.quantidade;
                
                produtos.push_back(produto);

                std::cout << "\nProduto cadastrado com sucesso!\n";
                break;

            case 2:
                std::cout << "\n--- LISTAR PRODUTOS ---\n";

                if (produtos.empty()) {
                    std::cout << "Nenhum produto cadastrado.\n";
}               else {
                for (const auto& p : produtos) {
                    std::cout << "ID: " << p.id << "\n";
                    std::cout << "Nome: " << p.nome << "\n";
                    std::cout << "Preco: " << p.preco << "\n";
                    std::cout << "Quantidade: " << p.quantidade << "\n";
                }
            }
                break;

            case 3:
                std::cout << "\n--- BUSCAR PRODUTO ---\n";
                int id_busca;
                std::cout << "Digite o ID do produto a ser buscado: ";
                std::cin >> id_busca;

                bool encontrado = false;
                for (const auto& p : produtos) {
                    if (p.id == id_busca) {
                        std::cout << "Produto encontrado:\n";
                        std::cout << "ID: " << p.id << "\n";
                        std::cout << "Nome: " << p.nome << "\n";
                        std::cout << "Preco: " << p.preco << "\n";
                        std::cout << "Quantidade: " << p.quantidade << "\n";
                        encontrado = true;
                        break;
                    }
                }
                if (!encontrado) {
                    std::cout << "Produto nao encontrado.\n";
                }
                break;

            case 4:
                std::cout << "\nSaindo do StockFlow...\n";
                break;

            default:
                std::cout << "\nOpcao invalida!\n";
        }

    } while (opcao != 4);

    return 0;
}