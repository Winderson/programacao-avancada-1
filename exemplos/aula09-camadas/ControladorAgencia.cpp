
#include "ControladorAgencia.h"

void ControladorAgencia::executa() {

    // Le uma conta e cria ela
    int numConta = _view.leConta();
    Conta conta(numConta, "");

    // Exibe o menu
    int opcao = 0;
    do {
        _view.exibeMenu();
        opcao = _view.leOpcao();

        trataOpcao(opcao, conta);

    } while (opcao != 4);

}

void ControladorAgencia::trataOpcao(int opcao, Conta &conta) {

    if (opcao == 1) {
        // TODO: implementar depois os metodos
        //double quantia = _view.exibeSaque();
        //conta.retira(quantia);
        //_view.imprimeExtrato(conta);
    } else if (opcao == 2) {
        // TODO: implementar o deposito
    } else if (opcao == 3) {
        // TODO: implementar a transferencia
    } else if (opcao != 4) {
        // TODO: imprimir mensagem de erro
        //_view.exibeErroOpcao();
    }


}



