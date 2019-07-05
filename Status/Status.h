#ifndef STATUS_H
#define STATUS_H

#define TURE	1
#define FALSE	0
#define OK	1
#define ERROR	0
#define INFEASIBLE	-1	//不可行

#ifndef _MATH_H_
#define OVERFLOW	-2
#endif // !_MATH_H_

//Status 是函数的类型，返回值是函数结果的状态码
typedef int Status;

#endif // !STATUS_H