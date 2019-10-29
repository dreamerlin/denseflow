//
// Created by Yuanjun Xiong on 18/11/2015.
//

#ifndef DENSEFLOW_UTILS_H
#define DENSEFLOW_UTILS_H

#include "common.h"

void writeZipFile(std::vector<std::vector<uchar>> &data, std::string name_temp, std::string archive_name);
void SplitString(const std::string &s, std::vector<std::string> &v, const std::string &c);
double CurrentSeconds();
#endif // DENSEFLOW_UTILS_H
