#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_B4  493
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_E5  659
#define NOTE_FS5 740

const int buzzerPin = 8;

int melody[] = {
  NOTE_GS4, NOTE_GS4, NOTE_A4, NOTE_A4, NOTE_GS4, NOTE_GS4, NOTE_A4, NOTE_A4,
  NOTE_GS4, NOTE_A4, NOTE_A4, NOTE_GS4, NOTE_GS4, NOTE_E5, NOTE_E5,
  
  NOTE_GS4, NOTE_A4, NOTE_A4, NOTE_GS4, NOTE_GS4, NOTE_A4, NOTE_A4,
  NOTE_GS4, NOTE_A4, NOTE_A4, NOTE_GS4, NOTE_GS4, NOTE_E5, NOTE_D5,

  NOTE_D5, NOTE_D5, NOTE_D5, NOTE_D5, NOTE_D5, NOTE_D5, NOTE_CS5, NOTE_B4, NOTE_D5,
  NOTE_D5, NOTE_D5, NOTE_D5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_CS5, NOTE_B4,

  NOTE_GS4, NOTE_A4, NOTE_A4, NOTE_GS4, NOTE_GS4, NOTE_A4, NOTE_A4,
  NOTE_GS4, NOTE_A4, NOTE_A4, NOTE_GS4, NOTE_GS4, NOTE_E5, NOTE_E5,

  NOTE_D5, NOTE_D5, NOTE_D5, NOTE_CS5, NOTE_CS5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_FS5,
  NOTE_CS5, NOTE_CS5, NOTE_CS5, NOTE_D5, NOTE_CS5, NOTE_B4, NOTE_A4,

  NOTE_D5, NOTE_D5, NOTE_D5, NOTE_CS5, NOTE_CS5, NOTE_CS5, NOTE_B4, NOTE_A4
};

int noteDurations[] = {
  8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 4,
  
  8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 4,

  8, 8, 8, 8, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 8, 8, 8, 4,

  8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 4,

  4, 4, 4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 8, 8, 2,

  4, 4, 4, 4, 4, 4, 4, 2
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
