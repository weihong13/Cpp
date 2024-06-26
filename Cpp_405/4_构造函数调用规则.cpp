

//
// 构造函数的调用规则
// 默认情况下 C++ 会给一个类添加3个函数
// 1.默认构造函数（无参，函数体为空）
// 2.默认析构函数（无参，函数体为空）
// 3.默认拷贝函数，对属性值进行拷贝
// 
// 构造函数调用规则
// 1.如果用户定义了有参构造函数，C++不再提供默认无参构造，但是会提供默认拷贝函数
// 2.如果用户定义了拷贝构造函数，C++不再提供其他构造函数
//