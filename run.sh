#!/bin/bash

: '
==========================================
minimum working version:
g++ -c $1 # received word after. For example ./run.sh main.cpp
g++ ${1%.*}.o -o ${1%.*} -lsfml-graphics -lsfml-window -lsfml-system -lsfml-network
./${1%.*}

Probable solution problem with firewall: 
sudo ufw status  # Посмотреть статус
sudo ufw allow 5001/tcp  # Разрешить порт
sudo ufw reload  # Применить

hostname -I
==========================================
'

mkdir -p build
g++ -c $1 -o build/${1%.*}.o
g++ build/${1%.*}.o -o build/${1%.*} -lsfml-graphics -lsfml-window -lsfml-system -lsfml-network
./build/${1%.*}

