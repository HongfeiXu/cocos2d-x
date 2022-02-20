#pragma once

#include "cocos2d.h"

USING_NS_CC;

class MyClass :public Ref {

};

/*
* 1.2.6 新的数据结构 
* 与Cocos2d - x 内存管理的结合
* 
*/ 
void testVector();

/*
* 1.2.6 新的数据结构
* 移动语义
*/
Vector<MyClass*> getVector();
void testVectorMove();


void my_test();
