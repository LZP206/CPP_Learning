#1 git操作
```
git remote add origin git@github.com:yeszao/dofiler.git         # 配置远程git版本库

git pull origin master                                          # 下载代码及快速合并

git push origin master                                          # 上传代码及快速合并

git fetch origin                                                # 从远程库获取代码

git branch                                                      # 显示所有分支

git checkout master                                             # 切换到master分支

git checkout -b dev                                             # 创建并切换到dev分支

git commit -m "first version"                                   # 提交

git status                                                      # 查看状态

git log                                                         # 查看提交历史

git config --global core.editor vim                             # 设置默认编辑器为vim（git默认用nano）

git config core.ignorecase false                                # 设置大小写敏感

git config --global user.name "YOUR NAME"                       # 设置用户名

git config --global user.email "YOUR EMAIL ADDRESS"             # 设置邮箱
```

#2 cmakelists
```
cmake_minimum_required(VERSION 3.17)
project(PROJECT)
set(CMAKE_CXX_STANDARD 17)

include_directories(头文件地址)
aux_source_directory(源文件地址 dir_src)

add_executable(main main.cpp ${dir_src})

add_subdirectory(子目录文件名)


在子目录中添加cmakelists
include_directories()
add_executable(Jump Jump.cpp)

```