#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// consts

// vars

// objects

LiquidCrystal_I2C display(0X27, 16, 2);

// put function declarations here:
void InitDisplay();

void setup()
{
  // put your setup code here, to run once:
  InitDisplay();
  display.setCursor(0, 0);
  display.print("Hola Gorda");
}

void loop()
{
  // put your main code here, to run repeatedly:
}

// put function definitions here:
void InitDisplay()
{
  display.init();
  display.clear();
  display.backlight();
}