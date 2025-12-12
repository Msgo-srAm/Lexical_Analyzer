/**
 * @file State.hpp
 * @brief 定义DFA的各个状态
 * @author srAm-dev
 * @version 0.1
 * @date 2025-12-11
 * @copyright Copyright (c) 2025 srAm-dev
 * SPDX-License-Identifier: WTFPL
 * Licensed under the WTFPL.
 */
#ifndef STATE_H
#define STATE_H

/**
 * @enum State
 * @brief DFA状态枚举
 *
 * 定义了词法分析器中使用的各个状态.
 * 每个状态的具体含义可以参考项目的README文档.
 * @note s_error状态用于表示非法输入或无法转移的状态.
 */
enum State {
    // 以下未进行标注的接受状态为ID接受状态(其中s0,s11,s33和s41是非接受状态)
    s0 = 0,
    s1,
    s2,
    s3,
    s4,
    s5,
    s6,
    s7,  // NUM接受状态
    s8,  // RELOP接受状态
    s9,  // RELOP接受状态
    s10, // RELOP接受状态
    s11,
    s12, // OVER接受状态
    s13,
    s14, // PLUS接受状态
    s15, // MINUS接受状态
    s16, // TIMES接受状态
    s17, // LPAREN接受状态
    s18, // RPAREN接受状态
    s19, // SEMI接受状态
    s20, // DELIMITER接受状态
    s21, // IF接受状态
    s22,
    s23,
    s24,
    s25,
    s26,
    s27,
    s28,      // LBRACKET接受状态
    s29,      // RBRACKET接受状态
    s31 = 31, // ASSIGN接受状态
    s32,      // COMMENT_SINGLE接受状态
    s33,
    s34,
    s35,
    s36, // END接受状态
    s37,
    s38,
    s39,
    s40,
    s41,
    s42, // THEN接受状态
    s43, // ELSE接受状态
    s44,
    s45, // READ接受状态
    s46,
    s47,
    s48, // COMMENT_MULTI接受状态
    s49,
    s50, // UNTIL接受状态
    s51, // WRITE接受状态
    s52, // REPEAT接受状态
    s53,
    s54,
    s55,
    s56,
    s57,         // ARRAY接受状态
    s_error = -1 // 错误状态
};

/**
 * @brief 判断输入状态状态是否为接受状态
 * @param s 输入状态
 * @return true  是接受状态
 * @return false 不是接受状态
 */
inline bool isAccepting(State s) { return s != s0 && s != s11 && s != s33 && s != s41; }

#endif