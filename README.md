# Cpp-get-answer
C++问答程序
#include <iostream>：包含输入输出流的头文件，以便在控制台进行输入和输出。
#include <string>：包含字符串处理的头文件，以便使用std::string类型。
std::string getAnswer(const std::string& question)：声明了一个名为getAnswer的函数，它接受一个名为question的常量引用字符串参数，并返回一个字符串。
if (question == "你好")：如果问题等于"你好"，则执行下面的语句块。
return "你好";：返回字符串"你好"作为回答。
else if (question == "你的名字是什么")：如果问题等于"你的名字是什么"，则执行下面的语句块。
return "黄文定";：返回字符串"黄文定"作为回答。
else if (question == "你的生日是什么时候")：如果问题等于"你的生日是什么时候"，则执行下面的语句块。
return "2009年7月18日";：返回字符串"2009年7月18日"作为回答。
else if (question == "你是中国人吗")：如果问题等于"你是中国人吗"，则执行下面的语句块。
return "我是中国人";：返回字符串"我是中国人"作为回答。
else if (question == "台湾是中国的吗")：如果问题等于"台湾是中国的吗"，则执行下面的语句块。
return "台湾是中国的";：返回字符串"台湾是中国的"作为回答。
else if (question == "你爱我吗")：如果问题等于"你爱我吗"，则执行下面的语句块。
return "这是一个由我决定的选项，我需要认真，但是我还是爱着你";：返回字符串"这是一个由我决定的选项，我需要认真，但是我还是爱着你"作为回答。
else if (question == "你喜欢去哪里")：如果问题等于"你喜欢去哪里"，则执行下面的语句块。
return "中国大陆和中国台湾";：返回字符串"中国大陆和中国台湾"作为回答。
else if (question == "你有朋友吗")：如果问题等于"你有朋友吗"，则执行下面的语句块。
return "没有";：返回字符串"没有"作为回答。
else if (question == "你的心情怎么样")：如果问题等于"你的心情怎么样"，则执行下面的语句块。
return "自卑，孤独";：返回字符串"自卑，孤独"作为回答。
else：如果前面的条件都不满足，则执行下面的语句块。
return "抱歉，我黄文定无法回答你的问题。";：返回字符串"抱歉，我黄文定无法回答你的问题。"作为默认回答。
while (true)：开始一个无限循环。
std::cout << "请输入你的问题（输入'退出'结束程序）: ";：输出提示，要求用户输入一个问题。
std::string userQuestion;：定义一个字符串变量userQuestion，用于存储用户的输入。
std::getline(std::cin, userQuestion);：使用std::getline函数从控制台读取用户的输入，并将其存储在userQuestion变量中。
if (userQuestion == "退出")：如果用户输入的问题是"退出"，则执行下面的语句块。
break;：终止循环，结束程序的执行。
std::string response = getAnswer(userQuestion);：调用getAnswer函数，将用户的问题作为参数传递，并将返回的回答存储在response变量中。
std::cout << response << std::endl;：将回答输出到控制台。
return 0;：程序执行成功，返回0作为退出状态码。
