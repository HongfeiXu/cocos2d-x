#pragma once

#include "cocos2d.h"

USING_NS_CC;

class MyClass :public Ref {

};

/*
* 1.2.6 �µ����ݽṹ 
* ��Cocos2d - x �ڴ����Ľ��
* 
*/ 
void testVector();

/*
* 1.2.6 �µ����ݽṹ
* �ƶ�����
*/
Vector<MyClass*> getVector();
void testVectorMove();


void my_test();
