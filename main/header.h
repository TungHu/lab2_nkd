#ifndef __HAM_BO_SUNG_H
#define __HAM_BO_SUNG_H

#include <ssd1306.h>
#include <string.h>
#include "esp_log.h"
#include "driver/i2c.h"
#include "font8x8_basic.h"
void ssd1306_init();
void task_ssd1306_display_text(const void *arg_text);
void task_ssd1306_display_clear(void *ignore);


#endif