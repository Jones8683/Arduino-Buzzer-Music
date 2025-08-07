#define SPEAKER_PIN 3

  // Define frequencies for each note
  const int LOW_LOW_C = 65;
  const int LOW_LOW_C_SHARP  = 69;
  const int LOW_LOW_D = 73;
  const int LOW_LOW_D_SHARP = 78;
  const int LOW_LOW_E = 82;
  const int LOW_LOW_F = 92;
  const int LOW_LOW_F_SHARP = 87;
  const int LOW_LOW_G = 98;
  const int LOW_LOW_G_SHARP = 103;
  const int LOW_LOW_A = 110;
  const int LOW_LOW_A_SHARP = 116;
  const int LOW_LOW_B = 123;

  const int LOW_C = 131;
  const int LOW_C_SHARP = 138;
  const int LOW_D = 146;
  const int LOW_D_SHARP = 155;
  const int LOW_E = 165;
  const int LOW_F = 174;
  const int LOW_F_SHARP = 185;
  const int LOW_G = 196;
  const int LOW_G_SHARP = 207;
  const int LOW_A = 120;
  const int LOW_A_SHARP = 233;
  const int LOW_B = 247;

  const int C = 261;
  const int C_SHARP = 277;
  const int D = 293;
  const int D_SHARP = 311;
  const int E = 329;
  const int F = 349;
  const int F_SHARP = 370;
  const int G = 392;
  const int G_SHARP = 415;
  const int A = 440;
  const int A_SHARP = 466;
  const int B = 493;

  const int HIGH_C = 523;
  const int HIGH_C_SHARP = 554;
  const int HIGH_D = 587;
  const int HIGH_D_SHARP = 622;
  const int HIGH_E = 659;
  const int HIGH_F = 698;
  const int HIGH_F_SHARP = 739;  
  const int HIGH_G = 783;
  const int HIGH_G_SHARP = 830;
  const int HIGH_A = 880;
  const int HIGH_A_SHARP = 932;
  const int HIGH_B = 987;

  const int HIGH_HIGH_C = 1046;
  const int HIGH_HIGH_C_SHARP = 1108;
  const int HIGH_HIGH_D = 1174;
  const int HIGH_HIGH_D_SHARP = 1244;
  const int HIGH_HIGH_E = 1318;
  const int HIGH_HIGH_F = 1396;
  const int HIGH_HIGH_F_SHARP = 1479;
  const int HIGH_HIGH_G = 1567;
  const int HIGH_HIGH_G_SHARP = 1661;
  const int HIGH_HIGH_A = 1760;
  const int HIGH_HIGH_A_SHARP = 1865;
  const int HIGH_HIGH_B = 1976;

bool songPlayed = false;

void setup() {
  pinMode(SPEAKER_PIN, OUTPUT);
}

void loop() {
  if (!songPlayed) {

  tone(SPEAKER_PIN, LOW_LOW_F, 900);
  tone(SPEAKER_PIN, LOW_F, 900);
  delay(900);

  tone(SPEAKER_PIN, F, 50); delay(50);
  tone(SPEAKER_PIN, G_SHARP, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_C, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_F, 900); delay(900);
    
  tone(SPEAKER_PIN, HIGH_C, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_F, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_HIGH_C, 900); delay(900);
    
  tone(SPEAKER_PIN, F, 300);
  tone(SPEAKER_PIN, LOW_F, 300);
  delay(300);
  tone(SPEAKER_PIN, G, 300);
  tone(SPEAKER_PIN, LOW_G, 300);
  delay(300);
  tone(SPEAKER_PIN, G_SHARP, 300);
  tone(SPEAKER_PIN, LOW_G_SHARP, 300);
  delay(300);
  tone(SPEAKER_PIN, C_SHARP, 300);
  tone(SPEAKER_PIN, LOW_C_SHARP, 900);
  delay(900);
  
  tone(SPEAKER_PIN, F, 50); delay(50);
  tone(SPEAKER_PIN, G_SHARP, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_C, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_F, 900); delay(900);
    
  tone(SPEAKER_PIN, HIGH_C, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_F, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_HIGH_C, 900); delay(900);

  tone(SPEAKER_PIN, F, 300);
  tone(SPEAKER_PIN, LOW_F, 300);
  delay(300);
  tone(SPEAKER_PIN, G, 300);
  tone(SPEAKER_PIN, LOW_G, 300);
  delay(300);
  tone(SPEAKER_PIN, G_SHARP, 300);
  tone(SPEAKER_PIN, LOW_G_SHARP, 300);
  delay(300);
  tone(SPEAKER_PIN, LOW_A_SHARP, 300);
  tone(SPEAKER_PIN, LOW_LOW_A_SHARP, 900);
  delay(900);

  tone(SPEAKER_PIN, F, 50); delay(50);
  tone(SPEAKER_PIN, G_SHARP, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_C, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_F, 900); delay(900);
    
  tone(SPEAKER_PIN, HIGH_C, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_F, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_HIGH_C, 900); delay(900);

  tone(SPEAKER_PIN, G_SHARP, 300);
  tone(SPEAKER_PIN, LOW_G_SHARP, 300);
  delay(300);
  tone(SPEAKER_PIN, A_SHARP, 300);
  tone(SPEAKER_PIN, LOW_A_SHARP, 300);
  delay(300);
  tone(SPEAKER_PIN, LOW_B, 300);
  tone(SPEAKER_PIN, B, 300);
  delay(300);
  tone(SPEAKER_PIN, C, 300);
  tone(SPEAKER_PIN, F, 900);
  tone(SPEAKER_PIN, HIGH_C, 900);
  delay(900);
  tone(SPEAKER_PIN, E, 900); delay(900);
  tone(SPEAKER_PIN, C, 900); delay(900);

  tone(SPEAKER_PIN, F, 900); delay(900);
  tone(SPEAKER_PIN, LOW_F, 900); delay(900);

  tone(SPEAKER_PIN, F, 50); delay(50);
  tone(SPEAKER_PIN, G_SHARP, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_C, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_F, 900); delay(900);
    
  tone(SPEAKER_PIN, HIGH_C, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_F, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_HIGH_C, 900); delay(900);

  tone(SPEAKER_PIN, F, 300);
  tone(SPEAKER_PIN, LOW_F, 300);
  delay(300);
  tone(SPEAKER_PIN, G, 300);
  tone(SPEAKER_PIN, LOW_G, 300);
  delay(300);
  tone(SPEAKER_PIN, G_SHARP, 300);
  tone(SPEAKER_PIN, LOW_G_SHARP, 300);
  delay(300);
  tone(SPEAKER_PIN, C_SHARP, 300);
  tone(SPEAKER_PIN, LOW_C_SHARP, 900);
  delay(900);
  
  tone(SPEAKER_PIN, F, 50); delay(50);
  tone(SPEAKER_PIN, G_SHARP, 50); delay(50);
   tone(SPEAKER_PIN, HIGH_C, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_F, 900); delay(900);
    
  tone(SPEAKER_PIN, HIGH_C, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_F, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_HIGH_C, 900); delay(900);

  tone(SPEAKER_PIN, F, 300);
  tone(SPEAKER_PIN, LOW_F, 300);
  delay(300);
  tone(SPEAKER_PIN, G, 300);
  tone(SPEAKER_PIN, LOW_G, 300);
  delay(300);
  tone(SPEAKER_PIN, G_SHARP, 300);
  tone(SPEAKER_PIN, LOW_G_SHARP, 300);
  delay(300);
  tone(SPEAKER_PIN, LOW_A_SHARP, 300);
  tone(SPEAKER_PIN, LOW_LOW_A_SHARP, 900);
  delay(900);

  tone(SPEAKER_PIN, F, 50); delay(50);
  tone(SPEAKER_PIN, G_SHARP, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_C, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_F, 900); delay(900);
    
  tone(SPEAKER_PIN, HIGH_C, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_F, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 50); delay(50);
  tone(SPEAKER_PIN, HIGH_HIGH_C, 900); delay(900);

  tone(SPEAKER_PIN, F, 300);
  tone(SPEAKER_PIN, LOW_F, 300);
  delay(300);
  tone(SPEAKER_PIN, G, 300);
  tone(SPEAKER_PIN, LOW_G, 300);
  delay(300);
  tone(SPEAKER_PIN, G_SHARP, 300);
  tone(SPEAKER_PIN, LOW_G_SHARP, 300);
  delay(300);
  tone(SPEAKER_PIN, G_SHARP, 900);
  tone(SPEAKER_PIN, LOW_G_SHARP, 900);
  tone(SPEAKER_PIN, F, 900);
  delay(300);
  tone(SPEAKER_PIN, E, 900);
  tone(SPEAKER_PIN, G, 1600);
  delay(1800);

  tone(SPEAKER_PIN, HIGH_F, 250); 
  tone(SPEAKER_PIN, F, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_F, 250); 
  tone(SPEAKER_PIN, F, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_F, 500); 
  tone(SPEAKER_PIN, F, 500); 
  delay(500);

  tone(SPEAKER_PIN, HIGH_F, 250); 
  tone(SPEAKER_PIN, F, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_F, 250); 
  tone(SPEAKER_PIN, F, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_F, 500); 
  tone(SPEAKER_PIN, F, 500); 
  delay(500);

  tone(SPEAKER_PIN, HIGH_G, 250); 
  tone(SPEAKER_PIN, G, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_G, 250); 
  tone(SPEAKER_PIN, G, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_G, 500); 
  tone(SPEAKER_PIN, G, 500); 
  delay(500);

  tone(SPEAKER_PIN, HIGH_G, 250); 
  tone(SPEAKER_PIN, G, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_G, 250); 
  tone(SPEAKER_PIN, G, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_G, 500); 
  tone(SPEAKER_PIN, G, 500); 
  delay(500);

  tone(SPEAKER_PIN, HIGH_G_SHARP, 250); 
  tone(SPEAKER_PIN, G_SHARP, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 250); 
  tone(SPEAKER_PIN, G_SHARP, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 500); 
  tone(SPEAKER_PIN, G_SHARP, 500); 
  delay(500);

  tone(SPEAKER_PIN, HIGH_G_SHARP, 250); 
  tone(SPEAKER_PIN, G_SHARP, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 250); 
  tone(SPEAKER_PIN, G_SHARP, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 500); 
  tone(SPEAKER_PIN, G_SHARP, 500); 
  delay(500);

  tone(SPEAKER_PIN, HIGH_G_SHARP, 250); 
  tone(SPEAKER_PIN, G_SHARP, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 250); 
  tone(SPEAKER_PIN, G_SHARP, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 500); 
  tone(SPEAKER_PIN, G_SHARP, 500); 
  delay(500);

  tone(SPEAKER_PIN, HIGH_G_SHARP, 250); 
  tone(SPEAKER_PIN, G_SHARP, 250); 
  tone(SPEAKER_PIN, HIGH_E, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 250); 
  tone(SPEAKER_PIN, G_SHARP, 250);
  tone(SPEAKER_PIN, HIGH_E, 250);  
  delay(250);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 250); 
  tone(SPEAKER_PIN, G_SHARP, 250); 
  tone(SPEAKER_PIN, HIGH_E, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 250); 
  tone(SPEAKER_PIN, G_SHARP, 250); 
  tone(SPEAKER_PIN, HIGH_E, 250);
  delay(250);

  tone(SPEAKER_PIN, HIGH_F, 250); 
  tone(SPEAKER_PIN, F, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_F, 250); 
  tone(SPEAKER_PIN, F, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_F, 500); 
  tone(SPEAKER_PIN, F, 500); 
  delay(500);

  tone(SPEAKER_PIN, HIGH_F, 250); 
  tone(SPEAKER_PIN, F, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_F, 250); 
  tone(SPEAKER_PIN, F, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_F, 500); 
  tone(SPEAKER_PIN, F, 500); 
  delay(500);

  tone(SPEAKER_PIN, HIGH_G, 250); 
  tone(SPEAKER_PIN, G, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_G, 250); 
  tone(SPEAKER_PIN, G, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_G, 500); 
  tone(SPEAKER_PIN, G, 500); 
  delay(500);

  tone(SPEAKER_PIN, HIGH_G, 250); 
  tone(SPEAKER_PIN, G, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_G, 250); 
  tone(SPEAKER_PIN, G, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_G, 500); 
  tone(SPEAKER_PIN, G, 500); 
  delay(500);

  tone(SPEAKER_PIN, HIGH_G_SHARP, 250); 
  tone(SPEAKER_PIN, G_SHARP, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 250); 
  tone(SPEAKER_PIN, G_SHARP, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 500); 
  tone(SPEAKER_PIN, G_SHARP, 500); 
  delay(500);

  tone(SPEAKER_PIN, HIGH_G_SHARP, 250); 
  tone(SPEAKER_PIN, G_SHARP, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 250); 
  tone(SPEAKER_PIN, G_SHARP, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 500); 
  tone(SPEAKER_PIN, G_SHARP, 500); 
  delay(500);

  tone(SPEAKER_PIN, HIGH_G_SHARP, 250); 
  tone(SPEAKER_PIN, G_SHARP, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 250); 
  tone(SPEAKER_PIN, G_SHARP, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 500); 
  tone(SPEAKER_PIN, G_SHARP, 500); 
  delay(500);

  tone(SPEAKER_PIN, HIGH_G_SHARP, 250); 
  tone(SPEAKER_PIN, G_SHARP, 250); 
  tone(SPEAKER_PIN, HIGH_E, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 250); 
  tone(SPEAKER_PIN, G_SHARP, 250);
  tone(SPEAKER_PIN, HIGH_E, 250);  
  delay(250);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 500); 
  tone(SPEAKER_PIN, G_SHARP, 500); 
  tone(SPEAKER_PIN, HIGH_E, 500); 
  delay(500);

  tone(SPEAKER_PIN, HIGH_F, 1800); 
  tone(SPEAKER_PIN, F, 1800); 
  delay(1800);

  tone(SPEAKER_PIN, HIGH_C, 500); delay(500);
  tone(SPEAKER_PIN, HIGH_C_SHARP, 1200); delay(1200);
  tone(SPEAKER_PIN, HIGH_C, 500); delay(500);
  tone(SPEAKER_PIN, A_SHARP, 500); delay(500);
  tone(SPEAKER_PIN, HIGH_C, 500); delay(500);
  tone(SPEAKER_PIN, A_SHARP, 1800); delay(1800);
  // To be continued...

songPlayed = true; 
   }
}
