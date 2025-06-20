#include "Jogo.h"

int main()
{
    const Jogo ratchet { "Ratchet & Clank", 150.0f }; 
    ratchet.atualizar(125.0f);  // modifica 
    ratchet.exibir();
}