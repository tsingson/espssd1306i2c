#include <ssd1306.h>
#include <esp_log.h>
#include <stdio.h>

void app_main(void) {
  init_ssd1306();

  while (1) {
    ssd1306_print_str(0, 0, "Hello World!", false);
    ssd1306_print_str(0, 17, "SSD1306 OLED", false);
    ssd1306_print_str(0, 27, "with ESP32", false);
    ssd1306_print_str(0, 36, "ESP-IDF", false);
    ssd1306_print_str(0, 46, "Embedded C", false);


    ssd1306_display();
    vTaskDelay(3000 / portTICK_PERIOD_MS);
    ssd1306_clean();

    ssd1306_print_str(1, 0, "xxxxxx!", false);
    ssd1306_print_str(0, 55, "dev by tsingson", false);

    ssd1306_display();
    vTaskDelay(3000 / portTICK_PERIOD_MS);
    ssd1306_clean();
  }
}
