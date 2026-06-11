#ifndef CLOX_TOKEN_H
#define CLOX_TOKEN_H

// ==============================
// Token 类型枚举
// ==============================

typedef enum {
    // 单字符 Token
    TOKEN_LEFT_PAREN,    // (
    TOKEN_RIGHT_PAREN,   // )
    TOKEN_LEFT_BRACE,    // {
    TOKEN_RIGHT_BRACE,   // }
    TOKEN_COMMA,         // ,
    TOKEN_DOT,           // .
    TOKEN_MINUS,         // -
    TOKEN_PLUS,          // +
    TOKEN_SEMICOLON,     // ;
    TOKEN_SLASH,         // /
    TOKEN_STAR,          // *

    // 单字符或双字符 Token
    TOKEN_BANG,          // !
    TOKEN_BANG_EQUAL,    // !=
    TOKEN_EQUAL,         // =
    TOKEN_EQUAL_EQUAL,   // ==
    TOKEN_GREATER,       // >
    TOKEN_GREATER_EQUAL, // >=
    TOKEN_LESS,          // <
    TOKEN_LESS_EQUAL,    // <=

    // 字面量
    TOKEN_IDENTIFIER,    // 标识符（变量名）
    TOKEN_STRING,        // 字符串字面量
    TOKEN_NUMBER,        // 数字字面量

    // 关键字
    TOKEN_AND,
    TOKEN_CLASS,
    TOKEN_ELSE,
    TOKEN_FALSE,
    TOKEN_FUN,
    TOKEN_FOR,
    TOKEN_IF,
    TOKEN_NIL,
    TOKEN_OR,
    TOKEN_PRINT,
    TOKEN_RETURN,
    TOKEN_SUPER,
    TOKEN_THIS,
    TOKEN_TRUE,
    TOKEN_VAR,
    TOKEN_WHILE,

    TOKEN_EOF            // 文件结束标记
} TokenType;

// ==============================
// Token 结构体
// ==============================

typedef struct {
    TokenType   type;      // Token 类型
    const char* lexeme;    // 原始字符串（词素）
    void*       literal;   // 字面值（数字/字符串的实际值）
    int         line;      // 所在行号
} Token;

#endif
