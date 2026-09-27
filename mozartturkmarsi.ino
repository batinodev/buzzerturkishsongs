#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109

const int buzzerPin = 8;

int melody[] = {
  NOTE_B4, NOTE_A4, NOTE_GS4, NOTE_A4, NOTE_C5, 
  NOTE_D5, NOTE_C5, NOTE_B4, NOTE_C5, NOTE_E5,
  NOTE_F5, NOTE_E5, NOTE_DS5, NOTE_E5, 
  NOTE_B5, NOTE_A5, NOTE_GS5, NOTE_A5, NOTE_B5, NOTE_A5, NOTE_GS5, NOTE_A5, NOTE_C6,
  NOTE_A5, NOTE_C6, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_A5,
  NOTE_G5, NOTE_A5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_A5, NOTE_G5, NOTE_A5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_A5, NOTE_G5, NOTE_FS5, NOTE_E5,
  NOTE_E5, NOTE_F5, NOTE_G5, NOTE_G5, NOTE_A5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_D5,
  NOTE_E5, NOTE_F5, NOTE_G5, NOTE_G5, NOTE_A5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_D5,
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_E5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4,
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_E5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4,
  NOTE_B4, NOTE_A4, NOTE_GS4, NOTE_A4, NOTE_C5, 
  NOTE_D5, NOTE_C5, NOTE_B4, NOTE_C5, NOTE_E5,
  NOTE_F5, NOTE_E5, NOTE_DS5, NOTE_E5, 
  NOTE_B5, NOTE_A5, NOTE_GS5, NOTE_A5, NOTE_B5, NOTE_A5, NOTE_GS5, NOTE_A5, NOTE_C6,
  NOTE_A5, NOTE_B5, NOTE_C6,  NOTE_B5, NOTE_A5, NOTE_GS5, NOTE_A5, NOTE_E5, NOTE_F5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_B4, NOTE_A4,
  NOTE_A5, NOTE_B5, NOTE_CS6, NOTE_A5, NOTE_B5, NOTE_CS6,  NOTE_B5, NOTE_A5, NOTE_GS5, NOTE_FS5, NOTE_GS5, NOTE_A5, NOTE_B5, NOTE_GS5, NOTE_E5,
  NOTE_A5, NOTE_B5, NOTE_CS6, NOTE_A5, NOTE_B5, NOTE_CS6,  NOTE_B5, NOTE_A5, NOTE_GS5, NOTE_FS5, NOTE_B5, NOTE_GS5, NOTE_E5, NOTE_A5,
  NOTE_A5, NOTE_B5, NOTE_CS6, NOTE_A5, NOTE_B5, NOTE_CS6,  NOTE_B5, NOTE_A5, NOTE_GS5, NOTE_FS5, NOTE_GS5, NOTE_A5, NOTE_B5, NOTE_GS5, NOTE_E5,
  NOTE_A5, NOTE_B5, NOTE_CS6, NOTE_A5, NOTE_B5, NOTE_CS6,  NOTE_B5, NOTE_A5, NOTE_GS5, NOTE_FS5, NOTE_B5, NOTE_GS5, NOTE_E5, NOTE_A5
};

int noteDurations[] = {
  8, 8, 8, 8, 2, 
  8, 8, 8, 8, 2, 
  8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 2,
  4, 4, 16, 16, 16, 4,
  4, 4, 16, 16, 16, 4, 4, 4, 16, 16, 16, 4, 4, 4, 2,
  4, 4, 4, 4, 8, 8, 8, 8, 2,
  4, 4, 4, 4, 8, 8, 8, 8, 2,
  4, 4, 4, 4, 8, 8, 8, 8, 2,
  4, 4, 4, 4, 8, 8, 8, 8, 2,
  8, 8, 8, 8, 2, 
  8, 8, 8, 8, 2, 
  8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 2,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 4, 8, 8, 2,
  4, 4, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2,
  4, 4, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2
};

int totalNotes = sizeof(melody) / sizeof(melody[0]);

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  for (int thisNote = 0; thisNote < totalNotes; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(buzzerPin, melody[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(buzzerPin);
  }
  
  delay(3000); 
}