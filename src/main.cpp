#include <M5Unified.h>

void setup() {
  auto cfg = M5.config();
  cfg.internal_imu = true; // Use internal IMU on M5Stack Basic
  M5.begin(cfg);

  M5.Lcd.setTextSize(2);
  M5.Lcd.setCursor(0, 0);
  M5.Lcd.printf("Hello, M5Stack Core Basic!\n");
  M5.Lcd.printf("M5Unified Library is working.");
}

void loop() {
  M5.update();
  // Add your code here
}
