#!/bin/bash
# Просто запускаем из текущей директории
LD_LIBRARY_PATH="$(pwd):$LD_LIBRARY_PATH" ./Client.my

# g++ ../Client.cpp -o Client.my -lsfml-network -lsfml-system // use in order to update .o