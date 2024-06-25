#pragma once
#include "contestant.h"
#include "judge.h"
#include <algorithm>
#include <vector>
#include <string>

void printMenu();

void menu();

// 初始化 n名 选手
void initContestant(Contestant* &conArr,int n);

// 初始化 n名 评委
void initJudeg(Judge*& judArr, int n);

// 打印选手列表信息
void showConts(Contestant* conArr,int n);

// 打印选手信息
void showCont(Contestant* conArr, int n);

// 观看表演
void watchShow(Contestant* conArr, int n);

// 评委打分
void JudgeScore(Contestant* conArr, Judge* judArr,int index, int count);

// 打印选手分数
void showConScore(Contestant* conArr, int n,int count);

// 计算选手排名(根据平均分)
void contSortByArv(Contestant* &conArr, int n, int count);