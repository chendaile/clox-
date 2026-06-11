#include <stdio.h>
#include <string.h>

// Token 类型枚举
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
    TOKEN_IDENTIFIER,
    TOKEN_STRING,
    TOKEN_NUMBER,

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

    TOKEN_EOF
} TokenType;

// 把字符串转成 TokenType
TokenType str2token(char* s) {
    // 单字符 Token
    if (strcmp(s, "(") == 0 ) return TOKEN_LEFT_PAREN;
    if (strcmp(s, ")") == 0 ) return TOKEN_RIGHT_PAREN;
    if (strcmp(s, "{") == 0 ) return TOKEN_LEFT_BRACE;
    if (strcmp(s, "}") == 0 ) return TOKEN_RIGHT_BRACE;
    if (strcmp(s, ",") == 0 ) return TOKEN_COMMA;
    if (strcmp(s, ".") == 0 ) return TOKEN_DOT;
    if (strcmp(s, "-") == 0 ) return TOKEN_MINUS;
    if (strcmp(s, "+") == 0 ) return TOKEN_PLUS;
    if (strcmp(s, ";") == 0 ) return TOKEN_SEMICOLON;
    if (strcmp(s, "/") == 0 ) return TOKEN_SLASH;
    if (strcmp(s, "*") == 0 ) return TOKEN_STAR;

    // 双字符 Token
    if (strcmp(s, "!") == 0 )  return TOKEN_BANG;
    if (strcmp(s, "!=") == 0 ) return TOKEN_BANG_EQUAL;
    if (strcmp(s, "=") == 0 )  return TOKEN_EQUAL;
    if (strcmp(s, "==") == 0 ) return TOKEN_EQUAL_EQUAL;
    if (strcmp(s, ">") == 0 )  return TOKEN_GREATER;
    if (strcmp(s, ">=") == 0 ) return TOKEN_GREATER_EQUAL;
    if (strcmp(s, "<") == 0 )  return TOKEN_LESS;
    if (strcmp(s, "<=") == 0 ) return TOKEN_LESS_EQUAL;

    // 关键字
    if (strcmp(s, "and") == 0 )    return TOKEN_AND;
    if (strcmp(s, "class") == 0 )  return TOKEN_CLASS;
    if (strcmp(s, "else") == 0 )   return TOKEN_ELSE;
    if (strcmp(s, "false") == 0 )  return TOKEN_FALSE;
    if (strcmp(s, "fun") == 0 )    return TOKEN_FUN;
    if (strcmp(s, "for") == 0 )    return TOKEN_FOR;
    if (strcmp(s, "if") == 0 )     return TOKEN_IF;
    if (strcmp(s, "nil") == 0 )    return TOKEN_NIL;
    if (strcmp(s, "or") == 0 )     return TOKEN_OR;
    if (strcmp(s, "print") == 0 )  return TOKEN_PRINT;
    if (strcmp(s, "return") == 0 ) return TOKEN_RETURN;
    if (strcmp(s, "super") == 0 )  return TOKEN_SUPER;
    if (strcmp(s, "this") == 0 )   return TOKEN_THIS;
    if (strcmp(s, "true") == 0 )   return TOKEN_TRUE;
    if (strcmp(s, "var") == 0 )    return TOKEN_VAR;
    if (strcmp(s, "while") == 0 )  return TOKEN_WHILE;
    return TOKEN_IDENTIFIER;
}

int main() {
    printf("%d", str2token("("));
    return 0;
}
