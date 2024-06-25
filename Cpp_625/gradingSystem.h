#pragma once
#include "contestant.h"
#include "judge.h"
#include <algorithm>
#include <vector>
#include <string>

void printMenu();

void menu();

// ��ʼ�� n�� ѡ��
void initContestant(Contestant* &conArr,int n);

// ��ʼ�� n�� ��ί
void initJudeg(Judge*& judArr, int n);

// ��ӡѡ���б���Ϣ
void showConts(Contestant* conArr,int n);

// ��ӡѡ����Ϣ
void showCont(Contestant* conArr, int n);

// �ۿ�����
void watchShow(Contestant* conArr, int n);

// ��ί���
void JudgeScore(Contestant* conArr, Judge* judArr,int index, int count);

// ��ӡѡ�ַ���
void showConScore(Contestant* conArr, int n,int count);

// ����ѡ������(����ƽ����)
void contSortByArv(Contestant* &conArr, int n, int count);