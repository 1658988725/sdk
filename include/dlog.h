#ifndef _dlog_h_
#define _dlog_h_

#include <stdarg.h>

/// д�ڴ���־
int dlog_log(const char* format, ...);

/// ������־ģ����
int dlog_setmodule(const char* module);

/// ������־�ܵ��ļ�ȫ·������
/// ע��: 
///		1. ��Linux��Ч
///		2. ������dlog_log����ǰ����
///@param[in] name ��־�ܵ��ļ���
int dlog_setpath(const char* name);

#endif
