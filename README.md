# Arduino_Pet-Board_Only-

🐣 Arduino UNO Virtual Pet (Board-Only)

This project turns an Arduino UNO into a tiny virtual pet using only built-in hardware.
The pet’s emotions are shown using the on-board LED (pin 13 / L).

No Serial Monitor.
No external components.
Just time, the LED, and the RESET button.

🎭 Pet Moods

The pet has three moods, decided by how long it has been ignored.

😊 Happy

Very fast LED blinking
Happens right after reset
Pet feels energetic and playful
😐 Bored

Medium LED blinking
Happens after some time
Pet wants attention
😠 Angry

Slow LED blinking
Happens if ignored too long
Pet is upset and impatient
🎛 What hardware is used?

Arduino UNO
Built-in LED (pin 13, labeled L)
RESET button
Internal timer using millis()
That’s it. Nothing else.

🔁 Interaction (RESET button)

Pressing the RESET button:

Resets the internal timer
Calms the pet down
Instantly makes it Happy again
Think of RESET as petting the pet 🖐️🐣

💡 Mood → LED Behavior

Mood	LED Blink Speed	Meaning
Happy	Very fast ⚡	Pet is excited
Bored	Medium ⏳	Pet wants attention
Angry	Slow 🐢	Pet is mad


