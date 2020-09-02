/*************************************************************************
	> File Name: ExprTreeEvaluator.h
	> Author: xiaxue
	> Mail: 1915223862@qq.com
	> Created Time: 2020年09月02日 星期三 11时30分52秒
 ************************************************************************/

#ifndef _EXPRTREEEVALUATOR_H
#define _EXPRTREEEVALUATOR_H

#include <string>
#include <map>
#include <AST.h>

class ExprTreeEvaluator {
public:
    ExprTreeEvaluator();
    ExprTreeEvaluator(ExprTreeEvaluator *);
    int run(haizei::ASTNode);
    void def_param(std::string, int);
    void set_param(std::string, int);
    int get_param(std::string);
    ExprTreeEvaluator *next;

private :
    std::map<std::string,int> memory;
};

#endif
