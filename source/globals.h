#ifndef _H_GLOBALS_H
#define _H_GLOBALS_H

#include "parse/parser.h"


#define TDATA_HOME "TDATA_HOME"

//全局变量都是只读的哦

extern const char *g_output_dir;

#define G_INCLUDE_DIR_NUM 1024
extern const char *g_include_dir[G_INCLUDE_DIR_NUM];
extern size_t g_include_dir_num;

#endif //_H_GLOBALS_H
