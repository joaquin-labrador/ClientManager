cmake_minimum_required(VERSION 3.23)
project(ClientManager C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled3 main.c main.h ClientList/client.c ClientList/client.h ClientList/clientList.c ClientList/clientList.h)
