// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef SAMPLE_INIT_H
#define SAMPLE_INIT_H
#if defined(ARDUINO_ARCH_ESP8266)
  #define sample_init esp8266_sample_init
  #define is_esp_board
  #define DONT_USE_UPLOADTOBLOB
  void esp8266_sample_init(const char* ssid, const char* password);
#endif // ARDUINO_ARCH_ESP8266
#if defined(ARDUINO_ARCH_ESP32)
  #define sample_init esp32_sample_init
  #define is_esp_board
  void esp32_sample_init(const char* ssid, const char* password);
#endif // ARDUINO_ARCH_ESP32

#endif // SAMPLE_INIT_H