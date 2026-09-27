int buzzer = 8;
float C_0 = 16.35; 
float Csharp_0 = 17.32; 
float D_0 = 18.35; 
float Dsharp_0 = 19.45; 
float E_0 = 20.60; 
float F_0 = 21.83; 
float Fsharp_0 = 23.12; 
float G_0 = 24.50;
float Gsharp_0 = 25.96; 
float A_0 = 27.50; 
float Asharp_0 = 29.14; 
float B_0 = 30.87; 

float C_1 = 32.70; 
float Csharp_1 = 34.65; 
float D_1 = 36.71; 
float Dsharp_1 = 38.89; 
float E_1 = 41.20; 
float F_1 = 43.65; 
float Fsharp_1 = 46.25; 
float G_1 = 49.00; 
float Gsharp_1 = 51.91; 
float A_1 = 55.00; 
float Asharp_1 = 58.27; 
float B_1 = 61.74; 

float C_2 = 65.41; 
float Csharp_2 = 69.30; 
float D_2 = 73.42; 
float Dsharp_2 = 77.78; 
float E_2 = 82.41; 
float F_2 = 87.31; 
float Fsharp_2 = 92.50; 
float G_2 = 98.00; 
float Gsharp_2 = 103.83; 
float A_2 = 110.00; 
float Asharp_2 = 116.54; 
float B_2 = 123.47; 

float C_3 = 130.81; 
float Csharp_3 = 138.59; 
float D_3 = 146.83; 
float Dsharp_3 = 155.56; 
float E_3 = 164.81; 
float F_3 = 174.61; 
float Fsharp_3 = 185.00; 
float G_3 = 196.00; 
float Gsharp_3 = 207.65; 
float A_3 = 220.00; 
float Asharp_3 = 233.08; 
float B_3 = 246.94; 

float C_4 = 261.63; 
float Csharp_4 = 277.18; 
float D_4 = 293.66; 
float Dsharp_4 = 311.13; 
float E_4 = 329.63; 
float F_4 = 349.23; 
float Fsharp_4 = 369.99; 
float G_4 = 392.00; 
float Gsharp_4 = 415.30; 
float A_4 = 440.00; 
float Asharp_4 = 466.16; 
float B_4 = 493.88; 

float C_5 = 523.25; 
float Csharp_5 = 554.37; 
float D_5 = 587.33; 
float Dsharp_5 = 622.25; 
float E_5 = 659.26; 
float F_5 = 698.46; 
float Fsharp_5 = 739.99; 
float G_5 = 783.99; 
float Gsharp_5 = 830.61; 
float A_5 = 880.00; 
float Asharp_5 = 932.33; 
float B_5 = 987.77; 

float C_6 = 1046.50; 
float Csharp_6 = 1108.73; 
float D_6 = 1174.66; 
float Dsharp_6 = 1244.51; 
float E_6 = 1318.51; 
float F_6 = 1396.91; 
float Fsharp_6 = 1479.98; 
float G_6 = 1567.98; 
float Gsharp_6 = 1661.22; 
float A_6 = 1760.00; 
float Asharp_6 = 1864.66; 
float B_6 = 1975.53; 

float C_7 = 2093.00; 
float Csharp_7 = 2217.46; 
float D_7 = 2349.32; 
float Dsharp_7 = 2489.02; 
float E_7 = 2637.02; 
float F_7 = 2793.83; 
float Fsharp_7 = 2959.96; 
float G_7 = 3135.96; 
float Gsharp_7 = 3322.44; 
float A_7 = 3520.00; 
float Asharp_7 = 3729.31; 
float B_7 = 3951.07; 

float C_8 = 4186.01; 
float Csharp_8 = 4434.92; 
float D_8 = 4698.64; 
float Dsharp_8 = 4978.03; 
float E_8 = 5274.04; 
float F_8 = 5587.65; 
float Fsharp_8 = 5919.91; 
float G_8 = 6271.93; 
float Gsharp_8 = 6644.88; 
float A_8 = 7040.00; 
float Asharp_8 = 7458.62; 
float B_8 = 7902.13;

void setup() {
  pinMode(buzzer,OUTPUT);
}

void loop() {
  tone(buzzer, Gsharp_5);
  delay(192);
  noTone(buzzer);
  delay(384);

  tone(buzzer, Gsharp_5);
  delay(192);
  noTone(buzzer);
  delay(384);

  tone(buzzer, Gsharp_5);
  delay(192);
  noTone(buzzer);
  delay(768);

  tone(buzzer, Gsharp_5);
  delay(192);
  noTone(buzzer);
  delay(384);

  tone(buzzer, Gsharp_5);
  delay(192);
  noTone(buzzer);
  delay(384);

  tone(buzzer, Gsharp_5);
  delay(192);
  noTone(buzzer);
  delay(768);

  tone(buzzer, E_5);
  delay(96);
  noTone(buzzer);
  delay(192);

  tone(buzzer, E_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, E_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, E_5);
  delay(96);
  noTone(buzzer);
  delay(192);

  tone(buzzer, F_5);
  delay(96);
  noTone(buzzer);
  delay(192);

  tone(buzzer, E_5);
  delay(96);
  noTone(buzzer);
  delay(192);

  tone(buzzer, D_5);
  delay(96);
  noTone(buzzer);
  delay(192);

  tone(buzzer, C_5);
  delay(96);
  noTone(buzzer);
  delay(192);

  tone(buzzer, E_5);
  delay(96);
  noTone(buzzer);
  delay(192);

  tone(buzzer, D_5);
  delay(192);
  noTone(buzzer);
  delay(384);

  tone(buzzer, D_5);
  delay(192);
  noTone(buzzer);
  delay(384);

  tone(buzzer, D_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, E_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, C_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, E_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, D_5);
  delay(288);
  noTone(buzzer);
  delay(384);

  tone(buzzer, C_5);
  delay(192);
  noTone(buzzer);
  delay(576);

  tone(buzzer, F_5);
  delay(96);
  noTone(buzzer);
  delay(288);

  tone(buzzer, E_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, D_5);
  delay(288);
  noTone(buzzer);
  delay(768);

  tone(buzzer, D_5);
  delay(192);
  noTone(buzzer);
  delay(288);

  tone(buzzer, C_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, E_5);
  delay(192);
  noTone(buzzer);
  delay(288);

  tone(buzzer, D_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, C_5);
  delay(192);
  noTone(buzzer);
  delay(288);

  tone(buzzer, B_4);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, A_4);
  delay(192);
  noTone(buzzer);
  delay(288);

  tone(buzzer, D_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, C_5);
  delay(192);
  noTone(buzzer);
  delay(288);

  tone(buzzer, D_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, B_4);
  delay(192);
  noTone(buzzer);
  delay(288);

  tone(buzzer, G_4);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, A_4);
  delay(192);
  noTone(buzzer);
  delay(864);

  tone(buzzer, D_5);
  delay(192);
  noTone(buzzer);
  delay(288);

  tone(buzzer, C_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, E_5);
  delay(192);
  noTone(buzzer);
  delay(288);

  tone(buzzer, D_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, C_5);
  delay(192);
  noTone(buzzer);
  delay(288);

  tone(buzzer, B_4);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, A_4);
  delay(192);
  noTone(buzzer);
  delay(288);

  tone(buzzer, D_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, C_5);
  delay(192);
  noTone(buzzer);
  delay(288);

  tone(buzzer, D_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, B_4);
  delay(192);
  noTone(buzzer);
  delay(288);

  tone(buzzer, G_4);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, A_4); 
  delay(192);
  noTone(buzzer);
  delay(768);

  tone(buzzer, A_4);
  delay(288);
  noTone(buzzer);
  delay(384);

  tone(buzzer, E_5);
  delay(192);
  noTone(buzzer);
  delay(288);

  tone(buzzer, E_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, E_5);
  delay(96);
  noTone(buzzer);
  delay(768);

  tone(buzzer, D_5);
  delay(192);
  noTone(buzzer);
  delay(288);

  tone(buzzer, E_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, F_5);
  delay(192);
  noTone(buzzer);
  delay(288);

  tone(buzzer, G_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, E_5);
  delay(192);
  noTone(buzzer);
  delay(768);

  tone(buzzer, A_4);
  delay(288);
  noTone(buzzer);
  delay(384);

  tone(buzzer, E_5);
  delay(192);
  noTone(buzzer);
  delay(288);

  tone(buzzer, E_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, E_5);
  delay(96);
  noTone(buzzer);
  delay(768);

  tone(buzzer, D_5);
  delay(192);
  noTone(buzzer);
  delay(288);

  tone(buzzer, E_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, F_5);
  delay(192);
  noTone(buzzer);
  delay(288);

  tone(buzzer, G_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, E_5);
  delay(192);
  noTone(buzzer);
  delay(768);

  tone(buzzer, F_5);
  delay(192);
  noTone(buzzer);
  delay(192);

  tone(buzzer, F_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, E_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, D_5);
  delay(192);
  noTone(buzzer);
  delay(192);

  tone(buzzer, D_5);
  delay(192);
  noTone(buzzer);
  delay(192);

  tone(buzzer, E_5);
  delay(192);
  noTone(buzzer);
  delay(192);

  tone(buzzer, E_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, D_5);
  delay(96);
  noTone(buzzer);
  delay(96);        

  tone(buzzer, C_5);
  delay(192);
  noTone(buzzer);
  delay(192);

  tone(buzzer, C_5);
  delay(192);
  noTone(buzzer);
  delay(192);

  tone(buzzer, F_5);
  delay(192);
  noTone(buzzer);
  delay(384);

  tone(buzzer, E_5);
  delay(192);
  noTone(buzzer);
  delay(288);

  tone(buzzer, D_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, D_5);
  delay(96);
  noTone(buzzer);
  delay(768);

  tone(buzzer, F_5);
  delay(288);
  noTone(buzzer);
  delay(384);

  tone(buzzer, E_5);
  delay(288);
  noTone(buzzer);
  delay(288);

  tone(buzzer, D_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, D_5);
  delay(96);
  noTone(buzzer);
  delay(384);

  tone(buzzer, C_5);
  delay(288);
  noTone(buzzer);
  delay(384);

  tone(buzzer, E_5);
  delay(288);
  noTone(buzzer);
  delay(384);

  tone(buzzer, C_5);
  delay(288);
  noTone(buzzer);
  delay(288);

  tone(buzzer, B_4);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, A_4);
  delay(288);
  noTone(buzzer);
  delay(384);

  tone(buzzer, D_5);
  delay(288);
  noTone(buzzer);
  delay(384);

  tone(buzzer, D_5);
  delay(288);
  noTone(buzzer);
  delay(384);

  tone(buzzer, C_5);
  delay(288);
  noTone(buzzer);
  delay(288);

  tone(buzzer, D_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, B_4);
  delay(288);
  noTone(buzzer);
  delay(768);

  tone(buzzer, A_4);
  delay(288);
  noTone(buzzer);
  delay(288);

  tone(buzzer, B_4);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, C_5);
  delay(288);
  noTone(buzzer);
  delay(288);

  tone(buzzer, B_4);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, A_4);
  delay(288);
  noTone(buzzer);
  delay(768);

  tone(buzzer, F_5);
  delay(288);
  noTone(buzzer);
  delay(384);

  tone(buzzer, E_5);
  delay(288);
  noTone(buzzer);
  delay(288);

  tone(buzzer, D_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, D_5);
  delay(96);
  noTone(buzzer);
  delay(768);

  tone(buzzer, F_5);
  delay(288);
  noTone(buzzer);
  delay(384);

  tone(buzzer, E_5);
  delay(288);
  noTone(buzzer);
  delay(288);

  tone(buzzer, D_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, D_5);
  delay(96);
  noTone(buzzer);
  delay(384);

  tone(buzzer, C_5);
  delay(288);
  noTone(buzzer);
  delay(384);

  tone(buzzer, E_5);
  delay(288);
  noTone(buzzer);
  delay(384);

  tone(buzzer, C_5);
  delay(288);
  noTone(buzzer);
  delay(288);

  tone(buzzer, B_4);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, A_4);
  delay(288);
  noTone(buzzer);
  delay(384);

  tone(buzzer, D_5);
  delay(288);
  noTone(buzzer);
  delay(384);

  tone(buzzer, D_5);
  delay(288);
  noTone(buzzer);
  delay(384);

  tone(buzzer, C_5);
  delay(288);
  noTone(buzzer);
  delay(288);

  tone(buzzer, D_5);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, B_4);
  delay(288);
  noTone(buzzer);
  delay(768);

  tone(buzzer, A_4);
  delay(288);
  noTone(buzzer);
  delay(288);

  tone(buzzer, B_4);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, C_5);
  delay(288);
  noTone(buzzer);
  delay(288);

  tone(buzzer, B_4);
  delay(96);
  noTone(buzzer);
  delay(96);

  tone(buzzer, A_4);
  delay(288);
  noTone(buzzer);
  delay(3000);
}
