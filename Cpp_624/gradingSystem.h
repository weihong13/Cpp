#pragma once
#include"contestant.h"
#include"judge.h"

void printMenu();

void menu();

// 初始化 n名 选手
Contestant* initContestant(int n);

// 打印选手列表信息
void showConts(Contestant* conArr,int n);

// 打印选手信息
void showCont(Contestant* conArr, int n);

// 观看表演
void watchShow(Contestant* conArr, int n);

// 评委打分
void JudgeScore(Contestant* conArr, int n);