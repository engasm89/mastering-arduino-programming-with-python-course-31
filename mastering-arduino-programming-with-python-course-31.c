/*
 * Course: Mastering Arduino Programming With Python Course 31
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Serial
#include <string.h> // Commands

#define OUTPUT 1 // Output

// LED control via Python commands
static const int LED_PIN = 13; // Onboard LED

// Stubs
void pinMode(int pin, int mode) { /* set */ } // Configure
void digitalWrite(int pin, int val) { /* write */ } // Write
void delay(int ms) { /* wait */ } // Delay
void Serial_begin(long baud) { printf("Serial start %ld\n", baud); } // Serial
int Serial_available(void) { return 0; } // Available bytes
char Serial_read(void) { return '\0'; } // Read char
void Serial_println(const char *s) { printf("%s\n", s); } // Println

char cmd[32]; // Buffer
int cmd_len = 0; // Length

void setup(void) { // Initialize
  pinMode(LED_PIN, OUTPUT); // LED
  digitalWrite(LED_PIN, 0); // Off
  Serial_begin(115200); // Serial
}

void process(void) { // Parse command
  if (cmd_len == 0) return; // Skip
  cmd[cmd_len] = '\0'; // End
  if (!strcmp(cmd, "ON")) { // Turn on
    digitalWrite(LED_PIN, 1); // LED on
    Serial_println("OK ON"); // Ack
  } else if (!strcmp(cmd, "OFF")) { // Turn off
    digitalWrite(LED_PIN, 0); // LED off
    Serial_println("OK OFF"); // Ack
  } else { // Unknown
    Serial_println("ERR"); // Error
  } // End conditions
  cmd_len = 0; // Reset
}

void loop(void) { // Main loop
  while (Serial_available()) { // Read stream
    char c = Serial_read(); // Read char
    if (c == '\n' || c == '\r') { // Newline
      process(); // Process
    } else if (cmd_len < (int)sizeof(cmd) - 1) { // Space
      cmd[cmd_len++] = c; // Append
    } // End buffer
  } // End serial
  delay(20); // Idle
}

// Main routine: orchestrates the mastering arduino programming with python course 31 scenario
int main(void) { // Entry
  setup(); // Init
  for (int i = 0; i < 10; ++i) { // Simulated cycles
    loop(); // Execute
  } // End
  return 0; // Exit
}

