#include <iostream>
//lambda表达式是一种匿名函数，可以在代码中直接定义并使用
//其基本表达式为
//[捕获列表](参数列表) mutable(可选) 异常属性 -> 返回类型 { 函数体 }

//一个简单的lambda
auto func = []() { std::cout << "Hello, Lambda!" << std::endl; };

//带参数的Lambda
auto add = [](int a, int b) { return a + b; };

//显示指定返回类型
auto divide = [](double a, double b) -> double { return a / b; };