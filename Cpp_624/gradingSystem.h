#pragma once
#include"contestant.h"
#include"judge.h"

void printMenu();

void menu();

// ��ʼ�� n�� ѡ��
Contestant* initContestant(int n);

// ��ӡѡ���б���Ϣ
void showConts(Contestant* conArr,int n);

// ��ӡѡ����Ϣ
void showCont(Contestant* conArr, int n);

// �ۿ�����
void watchShow(Contestant* conArr, int n);

// ��ί���
void JudgeScore(Contestant* conArr, int n);