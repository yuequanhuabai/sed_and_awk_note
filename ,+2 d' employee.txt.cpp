第一章：Sed基本语法。

# 删除包含Jason的行，并删除其后面两行。（共删除3行）
sed '/Jason/,+2 d' employee.txt


# 删除employee.txt文件中的所有空行
sed '/^$/ d' employee.txt

# 删除employee.txt文件中的所有注释（假如注释以#为行首,其实就是删除以#开头的所有行）
sed '/^#/ d' employee.txt

第二章：Sed替换参数用法。


