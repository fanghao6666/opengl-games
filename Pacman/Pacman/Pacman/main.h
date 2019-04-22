#pragma once
//main.h
#ifndef _MAIN_H_
#define _MAIN_H_
#include <vector>
#include <glut.h>
#include <iostream>
#include <cstring>
#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>
#include <deque>
#include <stdlib.h>
using namespace std;

extern bool replay;         //检查是否启动游戏
extern bool over;             //检查游戏是否结束
extern float squareSize;     //一个单元大小
extern float xIncrement;     // x坐标
extern float yIncrement;     // y坐标
extern int rotation;         // 方向
extern int pacman_speed;	// 吃豆人速度
extern int monster_speed;   // 怪物速度
extern float* monster1;     //第一个怪物的坐标和方向
extern float* monster2;     //第二个怪物的坐标和方向
extern float* monster3;     //第三个怪物的坐标和方向
extern float* monster4;     //第四个怪物的坐标和方向
extern vector<int> border;     //墙坐标

							   //障碍物坐标 (为了清晰分为三部分)
extern vector<int> obstaclesTop;
extern vector<int> obstaclesMiddle;
extern vector<int> obstaclesBottom;
extern deque<float> food;
extern vector<vector<bool>> bitmap;     // 2d图像，可移动区域
extern bool* keyStates;                 // 按键状态
extern int points;                         // 得分
#endif