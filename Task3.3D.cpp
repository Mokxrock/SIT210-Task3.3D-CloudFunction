int LED_1 = D2; // Set D2 pin as LED_1
int LED_2 = D3; // Set D3 pin as LED_2

// Allow code to run before the cloud is connected
SYSTEM_THREAD(ENABLED);


void setup() {
    // Set LEDs as output 
    pinMode(LED_1,OUTPUT); 
    pinMode(LED_2,OUTPUT); 
    // Subdcribe to buddy system (Deakin_RIOT_SIT210_Photon_Buddy)
    // Handle the function ( handleEvent )
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", handleEvent);  
}
void loop() {}

void handleEvent(String event, String data){ // Function that takes in the event and data 
    if(data == "wave"){ // If data is wave it will Blink the LED_1 three times 
        // Function that turn on the LED_1 
        LED1on(); 
        LED1on();
        LED1on();
    }
    else if (data == "pat"){ // If data is wave it will Blink the LED_2 three times 
        // Function that turn on the LED_2
       LED2on();
       LED2on();
       LED2on();
    }
   
}
// This function turn on the LED_1 
void LED1on(){
    digitalWrite(LED_1, HIGH); // Turn on the LED_1
    delay(1s); // Pause for 1 second 
    digitalWrite(LED_1, LOW); // Turn off the LED_1
    delay(1s); // Pause for 1 second 
}

// This function turn on the LED_2
void LED2on(){
    digitalWrite(LED_2, HIGH);
    delay(1s);
    digitalWrite(LED_2, LOW);
    delay(1s);
}

