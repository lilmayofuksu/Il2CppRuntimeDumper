//
// Created by Perfare on 2020/7/4.
//

#ifndef RIRU_IL2CPPDUMPER_LOG_H
#define RIRU_IL2CPPDUMPER_LOG_H

#include "stdio.h"

#define LOGD(buf, ...) printf(buf "\n", __VA_ARGS__)
#define LOGW(buf, ...) printf(buf "\n", __VA_ARGS__)
#define LOGE(buf, ...) printf(buf "\n", __VA_ARGS__)
#define LOGI(buf, ...) printf(buf "\n", __VA_ARGS__)


#endif //RIRU_IL2CPPDUMPER_LOG_H
