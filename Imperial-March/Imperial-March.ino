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
    
  // 1 crotchet = 500ms  
  tone(SPEAKER_PIN, G, 500); delay(500);
  tone(SPEAKER_PIN, G, 500); delay(500);
  tone(SPEAKER_PIN, G, 500); delay(500);
  tone(SPEAKER_PIN, D_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, A_SHARP, 150); delay(150);
  tone(SPEAKER_PIN, G, 500); delay(500);
  tone(SPEAKER_PIN, D_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, A_SHARP, 150); delay(150);
  tone(SPEAKER_PIN, G, 1000); delay(1000);

  tone(SPEAKER_PIN, HIGH_D, 500); delay(500);
  tone(SPEAKER_PIN, HIGH_D, 500); delay(500);
  tone(SPEAKER_PIN, HIGH_D, 500); delay(500);
  tone(SPEAKER_PIN, HIGH_D_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, A_SHARP, 150); delay(150);
  tone(SPEAKER_PIN, F_SHARP, 500); delay(500);
  tone(SPEAKER_PIN, D_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, A_SHARP, 150); delay(150);
  tone(SPEAKER_PIN, G, 1000); delay(1000);

  tone(SPEAKER_PIN, HIGH_G, 500); delay(500);
  tone(SPEAKER_PIN, G, 350); delay(350);
  tone(SPEAKER_PIN, G, 150); delay(150);
  tone(SPEAKER_PIN, HIGH_G, 500); delay(500);

  tone(SPEAKER_PIN, HIGH_F_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, HIGH_F, 150); delay(150);
  tone(SPEAKER_PIN, HIGH_E, 125); delay(125);
  tone(SPEAKER_PIN, HIGH_D_SHARP, 125); delay(125);
  tone(SPEAKER_PIN, HIGH_E, 250); delay(500);
  tone(SPEAKER_PIN, G_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_C_SHARP, 500); delay(500);

  tone(SPEAKER_PIN, HIGH_C, 350); delay(350);
  tone(SPEAKER_PIN, B, 150); delay(150);
  tone(SPEAKER_PIN, A_SHARP, 125); delay(125);
  tone(SPEAKER_PIN, A, 125); delay(125);
  tone(SPEAKER_PIN, A_SHARP, 250); delay(500);
  tone(SPEAKER_PIN, D_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, F_SHARP, 500); delay(500);

  tone(SPEAKER_PIN, D_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, F_SHARP, 150); delay(150);
  tone(SPEAKER_PIN, A_SHARP, 500); delay(500);
  tone(SPEAKER_PIN, G, 350); delay(350);
  tone(SPEAKER_PIN, A_SHARP, 150); delay(150);
  tone(SPEAKER_PIN, HIGH_D, 1000); delay(1000);

  tone(SPEAKER_PIN, HIGH_G, 500); delay(500);
  tone(SPEAKER_PIN, G, 350); delay(350);
  tone(SPEAKER_PIN, G, 150); delay(150);
  tone(SPEAKER_PIN, HIGH_G, 500); delay(500);

  tone(SPEAKER_PIN, HIGH_F_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, HIGH_F, 150); delay(150);
  tone(SPEAKER_PIN, HIGH_E, 125); delay(125);
  tone(SPEAKER_PIN, HIGH_D_SHARP, 125); delay(125);
  tone(SPEAKER_PIN, HIGH_E, 250); delay(500);
  tone(SPEAKER_PIN, G_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_C_SHARP, 500); delay(500);

  tone(SPEAKER_PIN, HIGH_C, 350); delay(350);
  tone(SPEAKER_PIN, B, 150); delay(150);
  tone(SPEAKER_PIN, A_SHARP, 125); delay(125);
  tone(SPEAKER_PIN, A, 125); delay(125);
  tone(SPEAKER_PIN, A_SHARP, 250); delay(500);
  tone(SPEAKER_PIN, D_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, F_SHARP, 500); delay(500);

  tone(SPEAKER_PIN, D_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, A_SHARP, 150); delay(150);
  tone(SPEAKER_PIN, G, 500); delay(500);
  tone(SPEAKER_PIN, D_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, A_SHARP, 150); delay(150);
  tone(SPEAKER_PIN, G, 1000); delay(1000);

  tone(SPEAKER_PIN, G, 500); delay(500);
  tone(SPEAKER_PIN, G, 500); delay(500);
  tone(SPEAKER_PIN, G, 500); delay(500);
  tone(SPEAKER_PIN, D_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, A_SHARP, 150); delay(150);
  tone(SPEAKER_PIN, G, 500); delay(500);
  tone(SPEAKER_PIN, D_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, A_SHARP, 150); delay(150);
  tone(SPEAKER_PIN, G, 1000); delay(1000);

  tone(SPEAKER_PIN, HIGH_D, 500); delay(500);
  tone(SPEAKER_PIN, HIGH_D, 500); delay(500);
  tone(SPEAKER_PIN, HIGH_D, 500); delay(500);
  tone(SPEAKER_PIN, HIGH_D_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, A_SHARP, 150); delay(150);
  tone(SPEAKER_PIN, F_SHARP, 500); delay(500);
  tone(SPEAKER_PIN, D_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, A_SHARP, 150); delay(150);
  tone(SPEAKER_PIN, G, 1000); delay(1000);

  tone(SPEAKER_PIN, HIGH_G, 500); delay(500);
  tone(SPEAKER_PIN, G, 350); delay(350);
  tone(SPEAKER_PIN, G, 150); delay(150);
  tone(SPEAKER_PIN, HIGH_G, 500); delay(500);

  tone(SPEAKER_PIN, HIGH_F_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, HIGH_F, 150); delay(150);
  tone(SPEAKER_PIN, HIGH_E, 125); delay(125);
  tone(SPEAKER_PIN, HIGH_D_SHARP, 125); delay(125);
  tone(SPEAKER_PIN, HIGH_E, 250); delay(500);
  tone(SPEAKER_PIN, G_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_C_SHARP, 500); delay(500);

  tone(SPEAKER_PIN, HIGH_C, 350); delay(350);
  tone(SPEAKER_PIN, B, 150); delay(150);
  tone(SPEAKER_PIN, A_SHARP, 125); delay(125);
  tone(SPEAKER_PIN, A, 125); delay(125);
  tone(SPEAKER_PIN, A_SHARP, 250); delay(500);
  tone(SPEAKER_PIN, D_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, F_SHARP, 500); delay(500);

  tone(SPEAKER_PIN, D_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, A_SHARP, 150); delay(150);
  tone(SPEAKER_PIN, G, 500); delay(500);
  tone(SPEAKER_PIN, D_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, A_SHARP, 150); delay(150);
  tone(SPEAKER_PIN, G, 1000); delay(1000);

  tone(SPEAKER_PIN, D, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_D, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_D_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, C, 250); delay(250);

  tone(SPEAKER_PIN, D, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_A_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_A, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_F_SHARP, 250); delay(250);
  
  tone(SPEAKER_PIN, D, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_HIGH_D, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_HIGH_C_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_A, 250); delay(250);

  tone(SPEAKER_PIN, D, 250);
  tone(SPEAKER_PIN, C, 250);
  delay(250);
  tone(SPEAKER_PIN, HIGH_A_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_F_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, D_SHARP, 250); delay(250);

  tone(SPEAKER_PIN, D, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_D, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_D_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, C, 250); delay(250);

  tone(SPEAKER_PIN, D, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_A_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_A, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_F_SHARP, 250); delay(250);

  tone(SPEAKER_PIN, D, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_HIGH_G, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_HIGH_D, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_A_SHARP, 250); delay(250);

  tone(SPEAKER_PIN, D, 250);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_D_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, B, 250); delay(250);
  tone(SPEAKER_PIN, G_SHARP, 250); delay(250);

  tone(SPEAKER_PIN, D, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_D, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_D_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, C, 250); delay(250);

  tone(SPEAKER_PIN, D, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_A_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_A, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_F_SHARP, 250); delay(250);
  
  tone(SPEAKER_PIN, D, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_HIGH_D, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_HIGH_C_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_A, 250); delay(250);

  tone(SPEAKER_PIN, D, 250);
  tone(SPEAKER_PIN, C, 250);
  delay(250);
  tone(SPEAKER_PIN, HIGH_A_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_F_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, D_SHARP, 250); delay(250);

  tone(SPEAKER_PIN, D, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_D, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_D_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, C, 250); delay(250);

  tone(SPEAKER_PIN, D, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_A_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_A, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_F_SHARP, 250); delay(250);

  tone(SPEAKER_PIN, D, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_HIGH_G, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_HIGH_D, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_A_SHARP, 250); delay(250); 

  tone(SPEAKER_PIN, D, 250);
  tone(SPEAKER_PIN, HIGH_G_SHARP, 250); 
  delay(250);
  tone(SPEAKER_PIN, HIGH_D_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, B, 250); delay(250);
  tone(SPEAKER_PIN, G_SHARP, 250); delay(250);

  // Return to the main melody
  tone(SPEAKER_PIN, G, 500); delay(500);
  tone(SPEAKER_PIN, G, 500); delay(500);
  tone(SPEAKER_PIN, G, 500); delay(500);
  tone(SPEAKER_PIN, D_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, A_SHARP, 150); delay(150);
  tone(SPEAKER_PIN, G, 500); delay(500);
  tone(SPEAKER_PIN, D_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, A_SHARP, 150); delay(150);
  tone(SPEAKER_PIN, G, 1000); delay(1000);

  tone(SPEAKER_PIN, HIGH_D, 500); delay(500);
  tone(SPEAKER_PIN, HIGH_D, 500); delay(500);
  tone(SPEAKER_PIN, HIGH_D, 500); delay(500);
  tone(SPEAKER_PIN, HIGH_D_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, A_SHARP, 150); delay(150);
  tone(SPEAKER_PIN, F_SHARP, 500); delay(500);
  tone(SPEAKER_PIN, D_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, A_SHARP, 150); delay(150);
  tone(SPEAKER_PIN, G, 1000); delay(1000);

  tone(SPEAKER_PIN, HIGH_G, 500); delay(500);
  tone(SPEAKER_PIN, G, 350); delay(350);
  tone(SPEAKER_PIN, G, 150); delay(150);
  tone(SPEAKER_PIN, HIGH_G, 500); delay(500);

  tone(SPEAKER_PIN, HIGH_F_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, HIGH_F, 150); delay(150);
  tone(SPEAKER_PIN, HIGH_E, 125); delay(125);
  tone(SPEAKER_PIN, HIGH_D_SHARP, 125); delay(125);
  tone(SPEAKER_PIN, HIGH_E, 250); delay(500);
  tone(SPEAKER_PIN, G_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_C_SHARP, 500); delay(500);

  tone(SPEAKER_PIN, HIGH_C, 350); delay(350);
  tone(SPEAKER_PIN, B, 150); delay(150);
  tone(SPEAKER_PIN, A_SHARP, 125); delay(125);
  tone(SPEAKER_PIN, A, 125); delay(125);
  tone(SPEAKER_PIN, A_SHARP, 250); delay(500);
  tone(SPEAKER_PIN, D_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, F_SHARP, 500); delay(500);

  tone(SPEAKER_PIN, D_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, F_SHARP, 150); delay(150);
  tone(SPEAKER_PIN, A_SHARP, 500); delay(500);
  tone(SPEAKER_PIN, G, 350); delay(350);
  tone(SPEAKER_PIN, A_SHARP, 150); delay(150);
  tone(SPEAKER_PIN, HIGH_D, 1000); delay(1000);

  tone(SPEAKER_PIN, HIGH_G, 500); delay(500);
  tone(SPEAKER_PIN, G, 350); delay(350);
  tone(SPEAKER_PIN, G, 150); delay(150);
  tone(SPEAKER_PIN, HIGH_G, 500); delay(500);

  tone(SPEAKER_PIN, HIGH_F_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, HIGH_F, 150); delay(150);
  tone(SPEAKER_PIN, HIGH_E, 125); delay(125);
  tone(SPEAKER_PIN, HIGH_D_SHARP, 125); delay(125);
  tone(SPEAKER_PIN, HIGH_E, 250); delay(500);
  tone(SPEAKER_PIN, G_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, HIGH_C_SHARP, 500); delay(500);

  tone(SPEAKER_PIN, HIGH_C, 350); delay(350);
  tone(SPEAKER_PIN, B, 150); delay(150);
  tone(SPEAKER_PIN, A_SHARP, 125); delay(125);
  tone(SPEAKER_PIN, A, 125); delay(125);
  tone(SPEAKER_PIN, A_SHARP, 250); delay(500);
  tone(SPEAKER_PIN, D_SHARP, 250); delay(250);
  tone(SPEAKER_PIN, F_SHARP, 500); delay(500);

  tone(SPEAKER_PIN, D_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, A_SHARP, 150); delay(150);
  tone(SPEAKER_PIN, G, 500); delay(500);
  tone(SPEAKER_PIN, D_SHARP, 350); delay(350);
  tone(SPEAKER_PIN, A_SHARP, 150); delay(150);
  tone(SPEAKER_PIN, G, 2500); delay(2500);
  
 songPlayed = true;
  }
}
