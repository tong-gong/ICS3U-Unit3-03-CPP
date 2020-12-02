// Copyright (c) 2020 Tong Gong All rights reserved
//
// Created by Tong Gong
// Created on November 2020
// This is a  "Number Guessing Game" program.
// cpplint ./helloWorld.cpp 是style check 的指令


#include <iostream>
#include <cmath>
#include <random>

int main() {
  // This function calculate the cost of pizza.
  int RandomNumber;

  std::random_device rseed;
  std::mt19937 rgen(rseed());  // mersenne_twister
  std::uniform_int_distribution<int> idist(0, 10);  // [0, 10]
  RandomNumber = idist(rgen);

  int userGuess;

  // input
  std::cout << "Guess a number between 0-10" << std::endl;
  std::cin >> userGuess;
  std::cout << "" << std::endl;

  // process + output
  if (RandomNumber == userGuess) {
      std::cout << "You are right" << std::ends;
  } else {
      std::cout <<"You are not right" << std::ends;
  }
}
