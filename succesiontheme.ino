

#define NOTE_C4  261
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  493
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  790
#define NOTE_GS5 831

const int buzzerPin = 8;

int melody[] = {
  NOTE_C5, NOTE_B4,                 
  NOTE_D5, NOTE_C5, NOTE_AS4, NOTE_GS4, NOTE_FS4, NOTE_G4, NOTE_GS4, NOTE_G4, 
  NOTE_G4, NOTE_F4, NOTE_DS4, NOTE_C5, NOTE_D5, NOTE_DS5, NOTE_D5, 
  NOTE_D5, NOTE_C5, NOTE_B4, NOTE_GS4, NOTE_G4, NOTE_F4, NOTE_DS4, NOTE_D5,

  NOTE_DS5, NOTE_C5, NOTE_DS5, NOTE_F5, NOTE_G5,
  NOTE_F5, NOTE_DS5, NOTE_F5, NOTE_DS5, NOTE_G5,
  NOTE_G5, NOTE_C5, NOTE_AS4, NOTE_GS4,
  NOTE_G5, NOTE_C5, NOTE_AS4, NOTE_D5,

  NOTE_C5, NOTE_G4, NOTE_F4, NOTE_DS4, NOTE_G4, NOTE_F4, NOTE_DS4,
  NOTE_DS5, NOTE_D5, NOTE_C5,
  NOTE_C5, NOTE_AS4, NOTE_GS4,
  NOTE_G4, NOTE_B4,
  NOTE_C5, NOTE_B4
};

int noteDurations[] = {
  4, 4,
  4, 4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 4, 2,

  4, 4, 4, 4, 2,
  4, 4, 4, 4, 2,
  2, 4, 4, 2,
  2, 4, 4, 2,

  4, 4, 4, 4, 4, 4, 2,
  4, 4, 2,
  4, 4, 2,
  4, 4,
  4, 4
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