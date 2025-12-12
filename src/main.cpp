/**
 * @file main.cpp
 * @brief 代码的入口点，负责初始化Lexer并启动词法分析过程。
 * @author srAm-dev
 * @version 0.1
 * @date 2025-12-11
 * @copyright Copyright (c) 2025 srAm-dev
 * SPDX-License-Identifier: WTFPL
 * Licensed under the WTFPL.
 */
#include <iostream>
#include <fstream>
#include "Lexer.hpp"

/**
 * @brief 程序入口点
 *
 * 接受命令行参数作为输入和输出文件路径，
 * 初始化Lexer对象并调用tokenOutput方法开始词法分析。
 *
 * @param argc 命令行参数个数
 * @param argv 命令行参数数组,第一个参数为输入文件路径(<input_file>)，第二个参数为输出文件路径(<output_file>)
 * @return int 程序退出状态码
 */
int main(int argc, char *argv[]) {
    if (argc < 3) {
        std::cout << "Usage: " << argv[0] << " <input_file> <output_file>" << std::endl;
        return 1;
    }
    Lexer lexer(argv[1]);
    lexer.tokenOutput(argv[2]);
    return 0;
}