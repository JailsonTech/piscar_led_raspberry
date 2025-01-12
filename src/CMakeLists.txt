# Defina a versão mínima do CMake
cmake_minimum_required(VERSION 3.12)

# nome do projeto
project(blink_led C CXX)

# caminho para o Pico SDK
set(PICO_SDK_PATH "${CMAKE_SOURCE_DIR}/../../pico-sdk" CACHE PATH "Path to the Raspberry Pi Pico SDK")

# Inclua o arquivo de inicialização do SDK
include(${PICO_SDK_PATH}/pico_sdk_init.cmake)

# Inicializa o Pico SDK
pico_sdk_init()

# adiciona o executável
add_executable(blink_led src/main.c)

# Vincula o SDK com o executável
target_link_libraries(blink_led pico_stdlib)

# Cria os arquivos binários necessários para o firmware
pico_add_extra_outputs(blink_led)

