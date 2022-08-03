//
// Created by Perfare on 2020/7/4.
//

#ifndef RIRU_IL2CPPDUMPER_LOG_H
#define RIRU_IL2CPPDUMPER_LOG_H

#include "stdio.h"

#define LOGW(buf, ...) printf("[WARNING] " buf "\n", __VA_ARGS__)
#define LOGE(buf, ...) printf("[ERROR] " buf "\n", __VA_ARGS__)
#define LOGI(buf, ...) printf("[INFO] " buf "\n", __VA_ARGS__)

#ifdef _DEBUG
#define LOGD(buf, ...) printf("[DEBUG] " buf "\n", __VA_ARGS__)
#else
#define LOGD
#endif




#endif //RIRU_IL2CPPDUMPER_LOG_H
