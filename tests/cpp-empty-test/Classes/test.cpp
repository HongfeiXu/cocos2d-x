#include "test.h"

void testVector()
{
    auto c1 = new MyClass();
    c1->autorelease();      // 加入自动回收池
    auto c2 = new MyClass();
    c2->autorelease();
    CCLOG("reference count c1: %d, c2:%d", c1->getReferenceCount(), c2->getReferenceCount());

    Vector<MyClass*> v1;
    v1.pushBack(c1);
    v1.insert(1, c2);
    CCLOG("reference count c1: %d, c2:%d", c1->getReferenceCount(), c2->getReferenceCount());

    v1.popBack();
    CCLOG("reference count c1: %d, c2:%d", c1->getReferenceCount(), c2->getReferenceCount());

    Vector<MyClass*> v2 = Vector<MyClass*>(v1);
    CCLOG("reference count c1: %d, c2:%d", c1->getReferenceCount(), c2->getReferenceCount());
    
    Vector<MyClass*> v3 = v1;
    CCLOG("reference count c1: %d, c2:%d", c1->getReferenceCount(), c2->getReferenceCount());
}

Vector<MyClass*> getVector()
{
    auto c1 = new MyClass();
    c1->autorelease();
    auto c2 = new MyClass();
    c2->autorelease();
    Vector<MyClass*> v1;
    v1.pushBack(c1);
    v1.pushBack(c2);
    CCLOG("reference count c1: %d, c2:%d", c1->getReferenceCount(), c2->getReferenceCount());
    return v1;
}

void testVectorMove()
{
    Vector<MyClass*> v2 = Vector<MyClass*>(getVector());
    CCLOG("reference count c1: %d, c2:%d", v2.at(0)->getReferenceCount(), v2.at(1)->getReferenceCount());

    Vector<MyClass*> v3 = getVector();
    CCLOG("reference count c1: %d, c2:%d", v3.at(0)->getReferenceCount(), v3.at(1)->getReferenceCount());
}


void my_test()
{
    CCLOG("------------------------------%s------------------------------", "testVector");
    testVector();
    CCLOG("--------------------------------------------------------------");

    CCLOG("------------------------------%s------------------------------", "testVectorMove");
    testVectorMove();
    CCLOG("--------------------------------------------------------------");
}

