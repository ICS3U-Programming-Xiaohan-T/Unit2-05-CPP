// Copyright (c) 2025 Xiaohan All rights reserved.
//
// Created by: Xiaohan Tian
// Created on: Mar 12 2025
// This program shows how local and global variables work

#include <iostream>

// global variable
int variableX = 88;

void localVariable() {
    // this shows what happens with local variables
    int variableX = 28;
    int variableY = 38;
    int variableZ;

    variableX = variableX + 1;
    variableZ = variableX + variableY;

    std::cout << "Local variableX, variableY, variableZ: " << variableX
              << " + " << variableY << " = " << variableZ << std::endl;
}

void globalVariable() {
    // this shows what happens with global variables
    int variableY = 30;
    int variableZ;

    variableX = variableX + 1;
    variableZ = variableX + variableY;

    std::cout << "Local variableX, variableY, variableZ: " << variableX
              << " + " << variableY << " = " << variableZ << std::endl;
}

int main() {
    // this function calls local and global
    localVariable();
    globalVariable();

    std::cout << "\nDone. " << std::endl;
}
