#define SPEAKER_PIN 3 // Pin connected to the mini speaker

bool songPlayed = false;

void setup() {
  pinMode(SPEAKER_PIN, OUTPUT);
}

void loop() {
   if (!songPlayed) {
  // Define frequencies for each note
  int c = 261;
  int csharp = 277;
  int d = 293;
  int dsharp = 311;
  int e = 329;
  int f = 349;
  int fsharp = 370;
  int g = 392;
  int gsharp = 415;
  int a = 440;
  int asharp = 466;
  int b = 493;
  int hid = 587;
  int hidsharp = 622;
  int hig = 783;
  int higsharp = 830;
  int hifsharp = 739;   
  int hif = 698;
  int hie = 659;
  int hicsharp = 554;
  int hic = 523;
  int hia = 880;
  int hiasharp = 932;
  int hib = 987;
  int hihic = 1046;
  int hihicsharp = 1108;
  int hihid = 1174;
  int hihidsharp = 1244;
  int hihie = 1318;
  int hihif = 1396;
  int hihifsharp = 1479;
  int hihig = 1567;
  int hihigsharp = 1661;
  int lowf = 174;
  int lowg = 195;
  int lowgsharp = 207;
  int lowcsharp = 138;
  int lowerf = 87;
  int lowlowerf = 43;
  int lowasharp = 233;
  int lowlowasharp = 116;
  int lowb = 246;

  
  
  //First Number = how long the note is played for
  //Second Number = delay before next note 

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

  //  Next part
  
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

  // next slow bit

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
