#include <iostream>
#include <string>

std::string getAnswer(const std::string& question) {
    if (question == "你好") {
        return "你好";
    } else if (question == "你的名字是什么") {
        return "黄文定";
    } else if (question == "你的生日是什么时候") {
        return "2009年7月18日";
    } else if (question == "你是中国人吗") {
        return "我是中国人";
    } else if (question == "台湾是中国的吗") {
        return "台湾是中国的";
    } else if (question == "你爱我吗") {
        return "这是一个由我决定的选项，我需要认真，但是我还是爱着你";
    } else if (question == "你喜欢去哪里") {
        return "中国大陆和中国台湾";
    } else if (question == "你有朋友吗") {
        return "没有";
    } else if (question == "你的心情怎么样") {
        return "自卑，孤独";
    } else {
        return "抱歉，我黄文定无法回答你的问题。";
    }
}

int main() {
    while (true) {
        std::cout << "请输入你的问题（输入'退出'结束程序）: ";
        std::string userQuestion;
        std::getline(std::cin, userQuestion);

        if (userQuestion == "退出") {
            break;
        }

        std::string response = getAnswer(userQuestion);
        std::cout << response << std::endl;
    }

    return 0;
}
