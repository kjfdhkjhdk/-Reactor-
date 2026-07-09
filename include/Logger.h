#pragma once

#include <stdio.h>
#include <string.h>
#include <string>
#include <errno.h>

#define LOG_DEBUG(fmt, ...) printf("[DEBUG] %s:%d " fmt "\n", __FILE__, __LINE__, ##__VA_ARGS__)
#define LOG_INFO(fmt, ...) printf("[INFO] %s:%d " fmt "\n", __FILE__, __LINE__, ##__VA_ARGS__)
#define LOG_WARN(fmt, ...) printf("[WARN] %s:%d " fmt "\n", __FILE__, __LINE__, ##__VA_ARGS__)
#define LOG_ERROR(fmt, ...) printf("[ERROR] %s:%d " fmt "\n", __FILE__, __LINE__, ##__VA_ARGS__)
#define LOG_FATAL(fmt, ...) { printf("[FATAL] %s:%d " fmt "\n", __FILE__, __LINE__, ##__VA_ARGS__); abort(); }