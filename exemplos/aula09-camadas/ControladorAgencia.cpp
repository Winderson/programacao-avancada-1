
#include "ControladorAgencia.h"

void ControladorAgencia::executa() {

    // Le uma conta e cria ela
    Conta conta = _view.leConta();

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
        double quantia = _view.exibeSaque();
        conta.retira(quantia);
        _view.exibeExtrato(conta);
    } else if (opcao == 2) {
        double quantia = _view.exibeSaque();
        conta.deposita(quantia);
        _view.exibeExtrato(conta);
    } else if (opcao == 3) {
        // TODO: implementar transferencia
    } else if (opcao != 4) {
        _view.exibeErroOpcaoInvalida();
    }


}



