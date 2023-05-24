#include <stdio.h>
#include <string.h>

struct Volunteer {
    char name[100];
    int age;
    char address[100];
    char phone[20];
};

const int MAX_VOLUNTEERS = 100;
struct Volunteer volunteers[MAX_VOLUNTEERS];

int numVolunteers = 0;

void addVolunteer() {
    struct Volunteer v;
    printf("Nome: ");
    gets(v.name);
    printf("Idade: ");
    gets(v.age);
    printf("Endereco: ");
    scanf("%99[^\n]%*c", v.address);
    printf("Telefone: ");
    scanf("%19[^\n]%*c", v.phone);
    volunteers[numVolunteers++] = v;
    printf("Voluntário cadastrado com sucesso.\n");
}

void removeVolunteer() {
    char name[100];
    printf("Nome do voluntário a ser removido: ");
    scanf("%99[^\n]%*c", name);
    for (int i = 0; i < numVolunteers; i++) {
        if (strcmp(volunteers[i].name, name) == 0) {
            for (int j = i; j < numVolunteers - 1; j++) {
                volunteers[j] = volunteers[j + 1];
            }
            numVolunteers--;
            printf("Voluntario removido com sucesso.\n");
            return;
        }
    }
    printf("Voluntario nao encontrado.\n");
}

void showVolunteers() {
    for (int i = 0; i < numVolunteers; i++) {
        printf("Nome: %s\n", volunteers[i].name);
        printf("Idade: %d\n", volunteers[i].age);
        printf("Endereco: %s\n", volunteers[i].address);
        printf("Telefone: %s\n", volunteers[i].phone);
        printf("\n");
    }
}

void showMenu() {
    printf("Cadastramento de Voluntarios\n");
    printf("1. Adicionar Voluntario\n");
    printf("2. Remover Voluntario\n");
    printf("3. Exibir Voluntarios\n");
    printf("4. Sair\n");
}

int main() {
    int choice;
    do {
        showMenu();
        printf("Escolha uma opcao: ");
        scanf("%d%*c", &choice);
        switch (choice) {
        case 1:
            addVolunteer();
            break;
        case 2:
            removeVolunteer();
            break;
        case 3:
            showVolunteers();
            break;
        case 4:
            printf("Encerrando o programa...\n");
            break;
        default:
            printf("Opcao invalida. Tente novamente.\n");
            break;
        }
        printf("\n");
    } while (choice != 4);

    return 0;
}

