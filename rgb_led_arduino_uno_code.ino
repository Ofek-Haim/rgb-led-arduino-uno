/* אופק חיים לימוד מחשבים*/

const int BLUE_PIN = 9;
const int GREEN_PIN = 10;
const int RED_PIN = 11;

void setup() {
  pinMode (BLUE_PIN, OUTPUT);
  pinMode (GREEN_PIN, OUTPUT);
  pinMode (RED_PIN, OUTPUT);
}

void loop() {
    change_color_by_rgb_common_cathode(0, 255 , 0);
    delay(100);
    change_color_by_rgb_common_cathode(255, 0 , 0);
    delay(100);
    change_color_by_rgb_common_cathode(0, 0 , 255);
    delay(100);
    
}

void change_color_by_rgb_common_anode(int redValue, int greenValue, int blueValue) {
    analogWrite(RED_PIN, 255 - redValue);
    analogWrite(GREEN_PIN, 255 - greenValue);
    analogWrite(BLUE_PIN,  255 - blueValue);}
    
void change_color_by_rgb_common_cathode(int redValue, int greenValue, int blueValue) {
    analogWrite(RED_PIN, redValue);
    analogWrite(GREEN_PIN, greenValue);
    analogWrite(BLUE_PIN, blueValue);}
