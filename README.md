# piscar_led_raspberry

## Piscar led do raspberry pi pico w
Este código simula o comportamento de um LED conectado ao Raspberry Pi Pico (ou qualquer outro microcontrolador) em um ambiente de desenvolvimento de software, sem a necessidade de hardware físico.
Objetivo do código: Simular o comportamento de um LED piscando conectado a um pino GPIO do Raspberry Pi (ou similar) em um ambiente de software sem hardware físico.
Estrutura: As funções de GPIO são apenas simulações e imprimem informações no terminal para representar o que aconteceria no hardware.

## 1. Bibliotecas:
<stdio.h>: Esta biblioteca padrão em C é usada para funções de entrada e saída, como printf.
<stdbool.h>: Inclui o tipo bool, permitindo usar true e false no código.
<unistd.h>: Esta biblioteca é usada para funções relacionadas ao sistema, como usleep(), que permite a simulação de pausas em milissegundos.


## 2. Funções Fake para Simular GPIO:
Essas funções simulam o comportamento de um pino de GPIO (General Purpose Input/Output) de um microcontrolador, como o Raspberry Pi Pico. Elas não interagem com o hardware real, mas apenas imprimem informações no terminal para representar o que ocorreria em um ambiente de hardware real.

### 2.1 Função gpio_init:
- Objetivo: Simula a inicialização de um pino GPIO.
- Explicação: Esta função recebe um número de pino (gpio) como parâmetro, e imprime no terminal que o pino foi inicializado. No caso real, você configuraria esse pino como entrada ou saída, mas aqui apenas imprimimos uma mensagem.

### 2.2 Função gpio_set_dir:
- Objetivo: Simula a configuração da direção de um pino (se ele será usado como entrada ou saída).
- Explicação: O parâmetro dir indica se o pino será configurado como saída (1) ou entrada (0). A função imprime no terminal qual foi a configuração do pino.

### 2.3 Função gpio_put:
- Objetivo: Simula a colocação de um valor (alto ou baixo) no pino.
- Explicação: O parâmetro value pode ser true (1) ou false (0). Se for true, a função simula o acendimento do LED (pino alto); se for false, simula o apagamento do LED (pino baixo). A função imprime no terminal qual é o estado do pino.

### 2.4 Função sleep_ms:
- Objetivo: Simula uma pausa no código, aguardando um certo número de milissegundos.
- Explicação: A função usleep() recebe o tempo em microsegundos. Como 1 milissegundo é igual a 1000 microsegundos, a função multiplica o valor de entrada por 1000 para convertê-lo de milissegundos para microsegundos. Isso cria a pausa desejada.

## FUNÇÃO MAIN
### 1. Inicialização do pino 25:
O pino 25 é inicializado e configurado como saída. Isso simula o comportamento de um LED conectado ao pino 25.

### 2. Laço Infinito (while (true)):
O programa entra em um laço infinito onde simula o acendimento e apagamento do LED.

### Acende o LED:
O pino 25 é configurado como "alto" (1), simulando o acendimento do LED. A função sleep_ms(1100) faz o programa esperar 1100 milissegundos (1,1 segundo).

### Apaga o LED:
O pino 25 é configurado como "baixo" (0), simulando o apagamento do LED. Novamente, o programa aguarda 1100 milissegundos antes de reiniciar o ciclo.


