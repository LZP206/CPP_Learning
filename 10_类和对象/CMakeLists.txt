include_directories()


add_executable(10.1     1_Encapsulation.cpp ${dir_src})

add_executable(10.2     2_对象的初始化和清理.cpp ${dir_src})
add_executable(10.3.1 3.1_成员变量和函数分开存储.cpp ${dir_src})
add_executable(10.3.2   3.2_this指针概念.cpp ${dir_src})
add_executable(10.3.3   3.3_空指针访问成员函数.cpp ${dir_src})
add_executable(10.3.4   3.4_const修饰成员函数.cpp ${dir_src})
add_executable(10.4.1   4.1_全局函数做友元.cpp ${dir_src})
add_executable(10.4.2   4.2_类做友元.cpp ${dir_src})
add_executable(10.4.3   4.3_类成员函数做友元.cpp ${dir_src})
add_executable(10.5.1   5.1_加法运算符重载.cpp ${dir_src})
add_executable(10.5.2   5.2_左移运算符重载.cpp ${dir_src})
add_executable(10.5.3   5.3_递增运算符重载.cpp ${dir_src})



