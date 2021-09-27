# C++友元函数

类的友元函数是定义在类外部，但有权访问类的所有私有（private）成员和保护（protected）成员。尽管友元函数的原型有在类的定义中出现过，但是友元函数并不是成员函数。

友元可以一个函数，所以是友元函数，友元也可以是一个类别，所以可称为友元类。


```cpp
class Box
{
   double width;
public:
   double length;
   friend void printWidth( Box box );
   void setWidth( double wid );
};
```

## note:

因为友元函数没有this指针，所以参数要有三种情况：

1.要访问非static成员的时候，需要对象做参数；
2.要访问static成员或者是全局变量的时候，则不需要对象做参数；
