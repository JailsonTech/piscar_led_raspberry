
//by JAILSON RODRIGUES DE NEIVA

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h> // Biblioteca para usar sleep()

// Fakes para as funções GPIO
void gpio_init(unsigned int gpio) {
    // Simula a inicialização do pino
    printf("GPIO %u inicializado\n", gpio);
}

void gpio_set_dir(unsigned int gpio, int dir) {
    // Simula a configuração da direção do pino
    printf("GPIO %u configurado como %s\n", gpio, (dir == 1 ? "saída" : "entrada"));
}

void gpio_put(unsigned int gpio, bool value) {
    // Simula a colocação do valor no pino
    printf("GPIO %u %s\n", gpio, value ? "aceso" : "apagado");
}

void sleep_ms(int ms) {
    // Converte milissegundos para segundos para usar a função sleep()
    usleep(ms * 1000);  // usleep recebe microsegundos (1 milissegundo = 1000 microsegundos)
}

int main() {
    // Simula a inicialização do pino do LED (GPIO 25)
    gpio_init(25);
    gpio_set_dir(25, 1);  // 1 para saída

    //  Loop infinito onde simula o acendimento e apagamento do LED.
    while (true) {
        // "Acende" o LED
        gpio_put(25, 1); // acende o LED
        sleep_ms(1100);  // Espera 1 segundo

        // "Apaga" o LED
        gpio_put(25, 0); // Apaga o LED
        sleep_ms(1100);  // Espera 1 segundo
    }

    return 0;
}
