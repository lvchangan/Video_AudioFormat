#ifndef _AAC_H_
#define _AAC_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//依次读取ADST帧的头部
int getADTSframe(unsigned char* buffer, int buf_size, unsigned char* data, int* data_size);
//分离出AAC 的 ADST首部的部分信息
int simplest_aac_parser(const char* url); 

#endif 
