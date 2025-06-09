#include <stdio.h>

struct Pais {
    char nome[50];
    int populacao;
    float area;
    int forcaMilitar;
};

int main() {
    struct Pais pais;

    printf("Digite o nome do país: ");
    fgets(pais.nome, sizeof(pais.nome), stdin);

    printf("Digite a população do país: ");
    scanf("%d", &pais.populacao);

    printf("Digite a área do país (em km²): ");
    scanf("%f", &pais.area);

    printf("Digite a força militar (0 a 100): ");
    scanf("%d", &pais.forcaMilitar);

    printf("\n🔎 Dados do país inserido:\n");
    printf("🌍 Nome: %s", pais.nome);
    printf("👥 População: %d habitantes\n", pais.populacao);
    printf("📏 Área: %.2f km²\n", pais.area);
    printf("🛡️ Força Militar: %d/100\n", pais.forcaMilitar);

    return 0;
}
