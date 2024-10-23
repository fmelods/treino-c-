#include <iostream>
#include <windows.h> // Para usar Sleep() e system("cls")

void printHeart() {
    float x, y, a;

    // Desenha o coração gradualmente
    for (y = 1.5; y > -1.5; y -= 0.1) {
        for (x = -1.5; x < 1.5; x += 0.05) {
            a = x * x + y * y - 1;
            putchar(a * a * a - x * x * y * y * y <= 0.0 ? '#' : ' '); // Mudei '=' para '#'
            Sleep(5); // Pequeno delay para efeito gradual
        }
        putchar('\n');
    }
}

void printLeftAlignedText(const std::string& text, int leftPadding) {
    for (int i = 0; i < leftPadding; ++i) std::cout << " "; // Adiciona espaços à esquerda
    std::cout << text << std::endl;
}

int main() {
    int leftPadding = 22; // Mova o texto 10 colunas para a 

    // Mudar cor para vermelho
    system("color 0c");

    // Adicionar algumas quebras de linha antes de desenhar o coração
    for (int i = 0; i < 3; ++i) std::cout << "\n"; // Move o coração mais para baixo

    // Desenhar o coração gradualmente
    printHeart();

    // Exibir as mensagens com alinhamento à esquerda
    printLeftAlignedText("EU TE AMO GIOVANNA", leftPadding);

    // Esperar indefinidamente para manter a tela aberta
    std::cin.get(); // Aguarda input do usuário antes de fechar
    return 0;
}
