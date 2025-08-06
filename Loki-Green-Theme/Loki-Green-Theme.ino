#define SPEAKER_PIN 3

  // Define frequencies for each note
  const int lowlowerf = 43;
  const int lowerf = 87;
  const int lowlowasharp = 116;

  const int lowcsharp = 138;
  const int lowf = 174;
  const int lowg = 195;
  const int lowgsharp = 207;
  const int lowasharp = 233;
  const int lowb = 246;

  const int c = 261;
  const int csharp = 277;
  const int d = 293;
  const int dsharp = 311;
  const int e = 329;
  const int f = 349;
  const int fsharp = 370;
  const int g = 392;
  const int gsharp = 415;
  const int a = 440;
  const int asharp = 466;
  const int b = 493;

  const int hic = 523;
  const int hicsharp = 554;
  const int hid = 587;
  const int hidsharp = 622;
  const int hig = 783;
  const int higsharp = 830;
  const int hifsharp = 739;   
  const int hif = 698;
  const int hie = 659;
  const int hia = 880;
  const int hiasharp = 932;
  const int hib = 987;

  const int hihic = 1046;
  const int hihicsharp = 1108;
  const int hihid = 1174;
  const int hihidsharp = 1244;
  const int hihie = 1318;
  const int hihif = 1396;
  const int hihifsharp = 1479;
  const int hihig = 1567;
  const int hihigsharp = 1661;
  const int HIGH_HIGH_A = 1760;
  const int HIGH_HIGH_A_SHARP = 1865;
  const int HIGH_HIGH_B = 1976;

bool songPlayed = false;

void setup() {
  pinMode(SPEAKER_PIN, OUTPUT);
}

void loop() {
   if (!songPlayed) {

  // Play the melody
  tone(SPEAKER_PIN, lowerf, 900);
  tone(SPEAKER_PIN, lowf, 900);
  delay(900);

  tone(SPEAKER_PIN, f, 50); delay(50);
  tone(SPEAKER_PIN, gsharp, 50); delay(50);
  tone(SPEAKER_PIN, hic, 50); delay(50);
  tone(SPEAKER_PIN, hif, 900); delay(900);
  
  tone(SPEAKER_PIN, hic, 50); delay(50);
  tone(SPEAKER_PIN, hif, 50); delay(50);
  tone(SPEAKER_PIN, higsharp, 50); delay(50);
  tone(SPEAKER_PIN, hihic, 900); delay(900);
  
  tone(SPEAKER_PIN, f, 300);
  tone(SPEAKER_PIN, lowf, 300);
  delay(300);
  tone(SPEAKER_PIN, g, 300);
  tone(SPEAKER_PIN, lowg, 300);
  delay(300);
  tone(SPEAKER_PIN, gsharp, 300);
  tone(SPEAKER_PIN, lowgsharp, 300);
  delay(300);
  tone(SPEAKER_PIN, csharp, 300);
  tone(SPEAKER_PIN, lowcsharp, 900);
  delay(900);
 
  tone(SPEAKER_PIN, f, 50); delay(50);
  tone(SPEAKER_PIN, gsharp, 50); delay(50);
  tone(SPEAKER_PIN, hic, 50); delay(50);
  tone(SPEAKER_PIN, hif, 900); delay(900);
  
  tone(SPEAKER_PIN, hic, 50); delay(50);
  tone(SPEAKER_PIN, hif, 50); delay(50);
  tone(SPEAKER_PIN, higsharp, 50); delay(50);
  tone(SPEAKER_PIN, hihic, 900); delay(900);

  tone(SPEAKER_PIN, f, 300);
  tone(SPEAKER_PIN, lowf, 300);
  delay(300);
  tone(SPEAKER_PIN, g, 300);
  tone(SPEAKER_PIN, lowg, 300);
  delay(300);
  tone(SPEAKER_PIN, gsharp, 300);
  tone(SPEAKER_PIN, lowgsharp, 300);
  delay(300);
  tone(SPEAKER_PIN, lowasharp, 300);
  tone(SPEAKER_PIN, lowlowasharp, 900);
  delay(900);

  tone(SPEAKER_PIN, f, 50); delay(50);
  tone(SPEAKER_PIN, gsharp, 50); delay(50);
  tone(SPEAKER_PIN, hic, 50); delay(50);
  tone(SPEAKER_PIN, hif, 900); delay(900);
  
  tone(SPEAKER_PIN, hic, 50); delay(50);
  tone(SPEAKER_PIN, hif, 50); delay(50);
  tone(SPEAKER_PIN, higsharp, 50); delay(50);
  tone(SPEAKER_PIN, hihic, 900); delay(900);

  tone(SPEAKER_PIN, gsharp, 300);
  tone(SPEAKER_PIN, lowgsharp, 300);
  delay(300);
  tone(SPEAKER_PIN, asharp, 300);
  tone(SPEAKER_PIN, lowasharp, 300);
  delay(300);
  tone(SPEAKER_PIN, lowb, 300);
  tone(SPEAKER_PIN, b, 300);
  delay(300);
  tone(SPEAKER_PIN, c, 300);
  tone(SPEAKER_PIN, f, 900);
  tone(SPEAKER_PIN, hic, 900);
  delay(900);
  tone(SPEAKER_PIN, e, 900); delay(900);
  tone(SPEAKER_PIN, c, 900); delay(900);

  tone(SPEAKER_PIN, f, 900); delay(900);
  tone(SPEAKER_PIN, lowf, 900); delay(900);

  tone(SPEAKER_PIN, f, 50); delay(50);
  tone(SPEAKER_PIN, gsharp, 50); delay(50);
  tone(SPEAKER_PIN, hic, 50); delay(50);
  tone(SPEAKER_PIN, hif, 900); delay(900);
  
  tone(SPEAKER_PIN, hic, 50); delay(50);
  tone(SPEAKER_PIN, hif, 50); delay(50);
  tone(SPEAKER_PIN, higsharp, 50); delay(50);
  tone(SPEAKER_PIN, hihic, 900); delay(900);

  tone(SPEAKER_PIN, f, 300);
  tone(SPEAKER_PIN, lowf, 300);
  delay(300);
  tone(SPEAKER_PIN, g, 300);
  tone(SPEAKER_PIN, lowg, 300);
  delay(300);
  tone(SPEAKER_PIN, gsharp, 300);
  tone(SPEAKER_PIN, lowgsharp, 300);
  delay(300);
  tone(SPEAKER_PIN, csharp, 300);
  tone(SPEAKER_PIN, lowcsharp, 900);
  delay(900);
 
  tone(SPEAKER_PIN, f, 50); delay(50);
  tone(SPEAKER_PIN, gsharp, 50); delay(50);
  tone(SPEAKER_PIN, hic, 50); delay(50);
  tone(SPEAKER_PIN, hif, 900); delay(900);
  
  tone(SPEAKER_PIN, hic, 50); delay(50);
  tone(SPEAKER_PIN, hif, 50); delay(50);
  tone(SPEAKER_PIN, higsharp, 50); delay(50);
  tone(SPEAKER_PIN, hihic, 900); delay(900);

  tone(SPEAKER_PIN, f, 300);
  tone(SPEAKER_PIN, lowf, 300);
  delay(300);
  tone(SPEAKER_PIN, g, 300);
  tone(SPEAKER_PIN, lowg, 300);
  delay(300);
  tone(SPEAKER_PIN, gsharp, 300);
  tone(SPEAKER_PIN, lowgsharp, 300);
  delay(300);
  tone(SPEAKER_PIN, lowasharp, 300);
  tone(SPEAKER_PIN, lowlowasharp, 900);
  delay(900);

  tone(SPEAKER_PIN, f, 50); delay(50);
  tone(SPEAKER_PIN, gsharp, 50); delay(50);
  tone(SPEAKER_PIN, hic, 50); delay(50);
  tone(SPEAKER_PIN, hif, 900); delay(900);
  
  tone(SPEAKER_PIN, hic, 50); delay(50);
  tone(SPEAKER_PIN, hif, 50); delay(50);
  tone(SPEAKER_PIN, higsharp, 50); delay(50);
  tone(SPEAKER_PIN, hihic, 900); delay(900);

  tone(SPEAKER_PIN, f, 300);
  tone(SPEAKER_PIN, lowf, 300);
  delay(300);
  tone(SPEAKER_PIN, g, 300);
  tone(SPEAKER_PIN, lowg, 300);
  delay(300);
  tone(SPEAKER_PIN, gsharp, 300);
  tone(SPEAKER_PIN, lowgsharp, 300);
  delay(300);
  tone(SPEAKER_PIN, gsharp, 900);
  tone(SPEAKER_PIN, lowgsharp, 900);
  tone(SPEAKER_PIN, f, 900);
  delay(300);
  tone(SPEAKER_PIN, e, 900);
  tone(SPEAKER_PIN, g, 1600);
  delay(1800);
  
  tone(SPEAKER_PIN, hif, 250); 
  tone(SPEAKER_PIN, f, 250); 
  delay(250);
  tone(SPEAKER_PIN, hif, 250); 
  tone(SPEAKER_PIN, f, 250); 
  delay(250);
  tone(SPEAKER_PIN, hif, 500); 
  tone(SPEAKER_PIN, f, 500); 
  delay(500);

  tone(SPEAKER_PIN, hif, 250); 
  tone(SPEAKER_PIN, f, 250); 
  delay(250);
  tone(SPEAKER_PIN, hif, 250); 
  tone(SPEAKER_PIN, f, 250); 
  delay(250);
  tone(SPEAKER_PIN, hif, 500); 
  tone(SPEAKER_PIN, f, 500); 
  delay(500);

  tone(SPEAKER_PIN, hig, 250); 
  tone(SPEAKER_PIN, g, 250); 
  delay(250);
  tone(SPEAKER_PIN, hig, 250); 
  tone(SPEAKER_PIN, g, 250); 
  delay(250);
  tone(SPEAKER_PIN, hig, 500); 
  tone(SPEAKER_PIN, g, 500); 
  delay(500);

  tone(SPEAKER_PIN, hig, 250); 
  tone(SPEAKER_PIN, g, 250); 
  delay(250);
  tone(SPEAKER_PIN, hig, 250); 
  tone(SPEAKER_PIN, g, 250); 
  delay(250);
  tone(SPEAKER_PIN, hig, 500); 
  tone(SPEAKER_PIN, g, 500); 
  delay(500);

  tone(SPEAKER_PIN, higsharp, 250); 
  tone(SPEAKER_PIN, gsharp, 250); 
  delay(250);
  tone(SPEAKER_PIN, higsharp, 250); 
  tone(SPEAKER_PIN, gsharp, 250); 
  delay(250);
  tone(SPEAKER_PIN, higsharp, 500); 
  tone(SPEAKER_PIN, gsharp, 500); 
  delay(500);

  tone(SPEAKER_PIN, higsharp, 250); 
  tone(SPEAKER_PIN, gsharp, 250); 
  delay(250);
  tone(SPEAKER_PIN, higsharp, 250); 
  tone(SPEAKER_PIN, gsharp, 250); 
  delay(250);
  tone(SPEAKER_PIN, higsharp, 500); 
  tone(SPEAKER_PIN, gsharp, 500); 
  delay(500);

  tone(SPEAKER_PIN, higsharp, 250); 
  tone(SPEAKER_PIN, gsharp, 250); 
  delay(250);
  tone(SPEAKER_PIN, higsharp, 250); 
  tone(SPEAKER_PIN, gsharp, 250); 
  delay(250);
  tone(SPEAKER_PIN, higsharp, 500); 
  tone(SPEAKER_PIN, gsharp, 500); 
  delay(500);

  tone(SPEAKER_PIN, higsharp, 250); 
  tone(SPEAKER_PIN, gsharp, 250); 
  tone(SPEAKER_PIN, hie, 250); 
  delay(250);
  tone(SPEAKER_PIN, higsharp, 250); 
  tone(SPEAKER_PIN, gsharp, 250);
  tone(SPEAKER_PIN, hie, 250);  
  delay(250);
  tone(SPEAKER_PIN, higsharp, 250); 
  tone(SPEAKER_PIN, gsharp, 250); 
  tone(SPEAKER_PIN, hie, 250); 
  delay(250);
  tone(SPEAKER_PIN, higsharp, 250); 
  tone(SPEAKER_PIN, gsharp, 250); 
  tone(SPEAKER_PIN, hie, 250);
  delay(250);

  tone(SPEAKER_PIN, hif, 250); 
  tone(SPEAKER_PIN, f, 250); 
  delay(250);
  tone(SPEAKER_PIN, hif, 250); 
  tone(SPEAKER_PIN, f, 250); 
  delay(250);
  tone(SPEAKER_PIN, hif, 500); 
  tone(SPEAKER_PIN, f, 500); 
  delay(500);

  tone(SPEAKER_PIN, hif, 250); 
  tone(SPEAKER_PIN, f, 250); 
  delay(250);
  tone(SPEAKER_PIN, hif, 250); 
  tone(SPEAKER_PIN, f, 250); 
  delay(250);
  tone(SPEAKER_PIN, hif, 500); 
  tone(SPEAKER_PIN, f, 500); 
  delay(500);

  tone(SPEAKER_PIN, hig, 250); 
  tone(SPEAKER_PIN, g, 250); 
  delay(250);
  tone(SPEAKER_PIN, hig, 250); 
  tone(SPEAKER_PIN, g, 250); 
  delay(250);
  tone(SPEAKER_PIN, hig, 500); 
  tone(SPEAKER_PIN, g, 500); 
  delay(500);

  tone(SPEAKER_PIN, hig, 250); 
  tone(SPEAKER_PIN, g, 250); 
  delay(250);
  tone(SPEAKER_PIN, hig, 250); 
  tone(SPEAKER_PIN, g, 250); 
  delay(250);
  tone(SPEAKER_PIN, hig, 500); 
  tone(SPEAKER_PIN, g, 500); 
  delay(500);

  tone(SPEAKER_PIN, higsharp, 250); 
  tone(SPEAKER_PIN, gsharp, 250); 
  delay(250);
  tone(SPEAKER_PIN, higsharp, 250); 
  tone(SPEAKER_PIN, gsharp, 250); 
  delay(250);
  tone(SPEAKER_PIN, higsharp, 500); 
  tone(SPEAKER_PIN, gsharp, 500); 
  delay(500);

  tone(SPEAKER_PIN, higsharp, 250); 
  tone(SPEAKER_PIN, gsharp, 250); 
  delay(250);
  tone(SPEAKER_PIN, higsharp, 250); 
  tone(SPEAKER_PIN, gsharp, 250); 
  delay(250);
  tone(SPEAKER_PIN, higsharp, 500); 
  tone(SPEAKER_PIN, gsharp, 500); 
  delay(500);

  tone(SPEAKER_PIN, higsharp, 250); 
  tone(SPEAKER_PIN, gsharp, 250); 
  delay(250);
  tone(SPEAKER_PIN, higsharp, 250); 
  tone(SPEAKER_PIN, gsharp, 250); 
  delay(250);
  tone(SPEAKER_PIN, higsharp, 500); 
  tone(SPEAKER_PIN, gsharp, 500); 
  delay(500);

  tone(SPEAKER_PIN, higsharp, 250); 
  tone(SPEAKER_PIN, gsharp, 250); 
  tone(SPEAKER_PIN, hie, 250); 
  delay(250);
  tone(SPEAKER_PIN, higsharp, 250); 
  tone(SPEAKER_PIN, gsharp, 250);
  tone(SPEAKER_PIN, hie, 250);  
  delay(250);
  tone(SPEAKER_PIN, higsharp, 500); 
  tone(SPEAKER_PIN, gsharp, 500); 
  tone(SPEAKER_PIN, hie, 500); 
  delay(500);

  tone(SPEAKER_PIN, hif, 1800); 
  tone(SPEAKER_PIN, f, 1800); 
  delay(1800);

  tone(SPEAKER_PIN, hic, 500); delay(500);
  tone(SPEAKER_PIN, hicsharp, 1200); delay(1200);
  tone(SPEAKER_PIN, hic, 500); delay(500);
  tone(SPEAKER_PIN, asharp, 500); delay(500);
  tone(SPEAKER_PIN, hic, 500); delay(500);
  tone(SPEAKER_PIN, asharp, 1800); delay(1800);

 songPlayed = true; 
  }
}
