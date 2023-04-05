cmake_minimum_required(VERSION 3.23)
project(ClientManager C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled3 src/main.c src/main.h src/ClientList/client.c src/ClientList/client.h)
