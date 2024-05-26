// Title:	 Rickroll Browser play
// Author: Slowdeb
// Info: 	 Opens rickroll in YouTube
// Edit:   Change page you want to open in to the target machine
// OS:	   Linux
 

#define HID_CUSTOM_LAYOUT
#define LAYOUT_PORTUGUESE

#include <HID-Project.h>
#include <HID-Settings.h>

// Utility function
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  // Start Keyboard and Mouse
  AbsoluteMouse.begin();
  Keyboard.begin();
  BootKeyboard.write(KEY_7|MOD_LEFT_SHIFT);

// Start Payloadk
  delay(3000);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F2);
  Keyboard.releaseAll();

  delay(500);
  
  // Change the link to whatever website you wish
  Keyboard.print("open https://youtu.be/xvFZjo5PgG0/");

  delay(500);

  Keyboard.write(KEY_ENTER);

  delay(2000);
  
  // Press K to start the video
  Keyboard.press(KEY_K);

  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
  AbsoluteMouse.end();
}

// Unused
void loop() {}
