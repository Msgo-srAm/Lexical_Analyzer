/**
 * @file Token.hpp
 * @brief 定义词法单元及其类型
 * @author srAm-dev
 * @version 0.1
 * @date 2025-12-11
 * @copyright Copyright (c) 2025 srAm-dev
 * SPDX-License-Identifier: WTFPL
 * Licensed under the WTFPL.
 */
#ifndef TOKEN_H
#define TOKEN_H

#include <string>

/**
 * @enum Tokentype
 * @brief 词法单元类型枚举
 *
 * 定义了词法分析器中识别的各类token类型.
 * 包括关键字、自定义符、运算符、注释与空格以及错误类型.
 */
enum Tokentype {
    // 关键字
    IF,
    THEN,
    ELSE,
    END,
    REPEAT,
    UNTIL,
    READ,
    WRITE,
    ARRAY,

    // 自定义符
    ID,
    NUM,

    // 运算符
    ASSIGN,
    RELOP,
    PLUS,
    MINUS,
    TIMES,
    OVER,
    LPAREN,
    RPAREN,
    LBRACKET,
    RBRACKET,
    SEMI,

    // 注释与空格，词法分析器会识别，但是不会做输出
    COMMENT_SINGLE,
    COMMENT_MULTI,
    DELIMITER,

    // 错误
    ERROR
};

/**
 * @struct Token
 * @brief 词法单元结构体
 *
 * 包含词法单元的类型和对应的词素字符串.
 */
struct Token {
    Tokentype type;
    std::string lexeme;
};

#endif // TOKEN_H