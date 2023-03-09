﻿#include "tasks.h"

/*	Task X. Rectangular World (1) [прямоугольный мир]
*
*	В прямоугольном мире свинья, раскормленная до размеров параллелепипеда,
*	лежит в квадратной луже грязи. Определите, полностью ли основание свиньи помещается
*	в данную лужу или нет.
*
*	Примечание
*	Не забудьте про "защиту от дурака".
* 
*	Формат входных данных [input]
*	Функция получает на вход три целых числа W, L, S: ширину и длину прямоугольной свиньи 
*	и сторону квадратной лужи.
*
*	Формат выходных данных [output]
*	Функция должна возвратить одно из булевских значений: true или false.
*
*	[sample function input  1]: 4 6 5
*	[sample function output 1]: false
*
*	[input  2]: 3 5 5
*	[output 2]: true
*/

bool taskX(int width, int length, int side) {
	if (width < 1 || length < 1 || side < 0) {
		return false;
	} else if (width < side || length < side) {
		return false;
	}
	else {
		return true;
	}
}