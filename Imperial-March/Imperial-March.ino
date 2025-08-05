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
  
  //First Number = how long the note is played for
  //Second Number = delay before next note 

  // Play the melody
  tone(SPEAKER_PIN, g, 500); delay(500);
  tone(SPEAKER_PIN, g, 500); delay(500);
  tone(SPEAKER_PIN, g, 500); delay(500);
  tone(SPEAKER_PIN, dsharp, 350); delay(350);
  tone(SPEAKER_PIN, asharp, 150); delay(150);
  tone(SPEAKER_PIN, g, 500); delay(500);
  tone(SPEAKER_PIN, dsharp, 350); delay(350);
  tone(SPEAKER_PIN, asharp, 150); delay(150);
  tone(SPEAKER_PIN, g, 1000); delay(1000);

  tone(SPEAKER_PIN, hid, 500); delay(500);
  tone(SPEAKER_PIN, hid, 500); delay(500);
  tone(SPEAKER_PIN, hid, 500); delay(500);
  tone(SPEAKER_PIN, hidsharp, 350); delay(350);
  tone(SPEAKER_PIN, asharp, 150); delay(150);
  tone(SPEAKER_PIN, fsharp, 500); delay(500);
  tone(SPEAKER_PIN, dsharp, 350); delay(350);
  tone(SPEAKER_PIN, asharp, 150); delay(150);
  tone(SPEAKER_PIN, g, 1000); delay(1000);

  tone(SPEAKER_PIN, hig, 500); delay(500);
  tone(SPEAKER_PIN, g, 350); delay(350);
  tone(SPEAKER_PIN, g, 150); delay(150);
  tone(SPEAKER_PIN, hig, 500); delay(500);

  tone(SPEAKER_PIN, hifsharp, 350); delay(350);
  tone(SPEAKER_PIN, hif, 150); delay(150);
  tone(SPEAKER_PIN, hie, 125); delay(125);
  tone(SPEAKER_PIN, hidsharp, 125); delay(125);
  tone(SPEAKER_PIN, hie, 250); delay(500);
  tone(SPEAKER_PIN, gsharp, 250); delay(250);
  tone(SPEAKER_PIN, hicsharp, 500); delay(500);

  tone(SPEAKER_PIN, hic, 350); delay(350);
  tone(SPEAKER_PIN, b, 150); delay(150);
  tone(SPEAKER_PIN, asharp, 125); delay(125);
  tone(SPEAKER_PIN, a, 125); delay(125);
  tone(SPEAKER_PIN, asharp, 250); delay(500);
  tone(SPEAKER_PIN, dsharp, 250); delay(250);
  tone(SPEAKER_PIN, fsharp, 500); delay(500);

  tone(SPEAKER_PIN, dsharp, 350); delay(350);
  tone(SPEAKER_PIN, fsharp, 150); delay(150);
  tone(SPEAKER_PIN, asharp, 500); delay(500);
  tone(SPEAKER_PIN, g, 350); delay(350);
  tone(SPEAKER_PIN, asharp, 150); delay(150);
  tone(SPEAKER_PIN, hid, 1000); delay(1000);

    tone(SPEAKER_PIN, hig, 500); delay(500);
  tone(SPEAKER_PIN, g, 350); delay(350);
  tone(SPEAKER_PIN, g, 150); delay(150);
  tone(SPEAKER_PIN, hig, 500); delay(500);

  tone(SPEAKER_PIN, hifsharp, 350); delay(350);
  tone(SPEAKER_PIN, hif, 150); delay(150);
  tone(SPEAKER_PIN, hie, 125); delay(125);
  tone(SPEAKER_PIN, hidsharp, 125); delay(125);
  tone(SPEAKER_PIN, hie, 250); delay(500);
  tone(SPEAKER_PIN, gsharp, 250); delay(250);
  tone(SPEAKER_PIN, hicsharp, 500); delay(500);

  tone(SPEAKER_PIN, hic, 350); delay(350);
  tone(SPEAKER_PIN, b, 150); delay(150);
  tone(SPEAKER_PIN, asharp, 125); delay(125);
  tone(SPEAKER_PIN, a, 125); delay(125);
  tone(SPEAKER_PIN, asharp, 250); delay(500);
  tone(SPEAKER_PIN, dsharp, 250); delay(250);
  tone(SPEAKER_PIN, fsharp, 500); delay(500);

  tone(SPEAKER_PIN, dsharp, 350); delay(350);
  tone(SPEAKER_PIN, asharp, 150); delay(150);
  tone(SPEAKER_PIN, g, 500); delay(500);
  tone(SPEAKER_PIN, dsharp, 350); delay(350);
  tone(SPEAKER_PIN, asharp, 150); delay(150);
  tone(SPEAKER_PIN, g, 1000); delay(1000);

  // Repeates Before Next Section

    tone(SPEAKER_PIN, g, 500); delay(500);
  tone(SPEAKER_PIN, g, 500); delay(500);
  tone(SPEAKER_PIN, g, 500); delay(500);
  tone(SPEAKER_PIN, dsharp, 350); delay(350);
  tone(SPEAKER_PIN, asharp, 150); delay(150);
  tone(SPEAKER_PIN, g, 500); delay(500);
  tone(SPEAKER_PIN, dsharp, 350); delay(350);
  tone(SPEAKER_PIN, asharp, 150); delay(150);
  tone(SPEAKER_PIN, g, 1000); delay(1000);

  tone(SPEAKER_PIN, hid, 500); delay(500);
  tone(SPEAKER_PIN, hid, 500); delay(500);
  tone(SPEAKER_PIN, hid, 500); delay(500);
  tone(SPEAKER_PIN, hidsharp, 350); delay(350);
  tone(SPEAKER_PIN, asharp, 150); delay(150);
  tone(SPEAKER_PIN, fsharp, 500); delay(500);
  tone(SPEAKER_PIN, dsharp, 350); delay(350);
  tone(SPEAKER_PIN, asharp, 150); delay(150);
  tone(SPEAKER_PIN, g, 1000); delay(1000);

      tone(SPEAKER_PIN, hig, 500); delay(500);
  tone(SPEAKER_PIN, g, 350); delay(350);
  tone(SPEAKER_PIN, g, 150); delay(150);
  tone(SPEAKER_PIN, hig, 500); delay(500);

  tone(SPEAKER_PIN, hifsharp, 350); delay(350);
  tone(SPEAKER_PIN, hif, 150); delay(150);
  tone(SPEAKER_PIN, hie, 125); delay(125);
  tone(SPEAKER_PIN, hidsharp, 125); delay(125);
  tone(SPEAKER_PIN, hie, 250); delay(500);
  tone(SPEAKER_PIN, gsharp, 250); delay(250);
  tone(SPEAKER_PIN, hicsharp, 500); delay(500);

  tone(SPEAKER_PIN, hic, 350); delay(350);
  tone(SPEAKER_PIN, b, 150); delay(150);
  tone(SPEAKER_PIN, asharp, 125); delay(125);
  tone(SPEAKER_PIN, a, 125); delay(125);
  tone(SPEAKER_PIN, asharp, 250); delay(500);
  tone(SPEAKER_PIN, dsharp, 250); delay(250);
  tone(SPEAKER_PIN, fsharp, 500); delay(500);

  tone(SPEAKER_PIN, dsharp, 350); delay(350);
  tone(SPEAKER_PIN, asharp, 150); delay(150);
  tone(SPEAKER_PIN, g, 500); delay(500);
  tone(SPEAKER_PIN, dsharp, 350); delay(350);
  tone(SPEAKER_PIN, asharp, 150); delay(150);
  tone(SPEAKER_PIN, g, 1000); delay(1000);

  //Next Smoother Section

  tone(SPEAKER_PIN, d, 250); delay(250);
  tone(SPEAKER_PIN, hid, 250); delay(250);
  tone(SPEAKER_PIN, hidsharp, 250); delay(250);
  tone(SPEAKER_PIN, c, 250); delay(250);

  tone(SPEAKER_PIN, d, 250); delay(250);
  tone(SPEAKER_PIN, hiasharp, 250); delay(250);
  tone(SPEAKER_PIN, hia, 250); delay(250);
  tone(SPEAKER_PIN, hifsharp, 250); delay(250);
  
  tone(SPEAKER_PIN, d, 250); delay(250);
  tone(SPEAKER_PIN, hihid, 250); delay(250);
  tone(SPEAKER_PIN, hihicsharp, 250); delay(250);
  tone(SPEAKER_PIN, hia, 250); delay(250);

  tone(SPEAKER_PIN, d, 250);
  tone(SPEAKER_PIN, c, 250);
  delay(250);
  tone(SPEAKER_PIN, hiasharp, 250); delay(250);
  tone(SPEAKER_PIN, hifsharp, 250); delay(250);
  tone(SPEAKER_PIN, dsharp, 250); delay(250);

  tone(SPEAKER_PIN, d, 250); delay(250);
  tone(SPEAKER_PIN, hid, 250); delay(250);
  tone(SPEAKER_PIN, hidsharp, 250); delay(250);
  tone(SPEAKER_PIN, c, 250); delay(250);

  tone(SPEAKER_PIN, d, 250); delay(250);
  tone(SPEAKER_PIN, hiasharp, 250); delay(250);
  tone(SPEAKER_PIN, hia, 250); delay(250);
  tone(SPEAKER_PIN, hifsharp, 250); delay(250);

  tone(SPEAKER_PIN, d, 250); delay(250);
  tone(SPEAKER_PIN, hihig, 250); delay(250);
  tone(SPEAKER_PIN, hihid, 250); delay(250);
  tone(SPEAKER_PIN, hiasharp, 250); delay(250);

  tone(SPEAKER_PIN, d, 250);
  tone(SPEAKER_PIN, higsharp, 250); 
  delay(250);
  tone(SPEAKER_PIN, hidsharp, 250); delay(250);
  tone(SPEAKER_PIN, b, 250); delay(250);
  tone(SPEAKER_PIN, gsharp, 250); delay(250);

    tone(SPEAKER_PIN, d, 250); delay(250);
  tone(SPEAKER_PIN, hid, 250); delay(250);
  tone(SPEAKER_PIN, hidsharp, 250); delay(250);
  tone(SPEAKER_PIN, c, 250); delay(250);

  tone(SPEAKER_PIN, d, 250); delay(250);
  tone(SPEAKER_PIN, hiasharp, 250); delay(250);
  tone(SPEAKER_PIN, hia, 250); delay(250);
  tone(SPEAKER_PIN, hifsharp, 250); delay(250);
  
  tone(SPEAKER_PIN, d, 250); delay(250);
  tone(SPEAKER_PIN, hihid, 250); delay(250);
  tone(SPEAKER_PIN, hihicsharp, 250); delay(250);
  tone(SPEAKER_PIN, hia, 250); delay(250);

  tone(SPEAKER_PIN, d, 250);
  tone(SPEAKER_PIN, c, 250);
  delay(250);
  tone(SPEAKER_PIN, hiasharp, 250); delay(250);
  tone(SPEAKER_PIN, hifsharp, 250); delay(250);
  tone(SPEAKER_PIN, dsharp, 250); delay(250);

  tone(SPEAKER_PIN, d, 250); delay(250);
  tone(SPEAKER_PIN, hid, 250); delay(250);
  tone(SPEAKER_PIN, hidsharp, 250); delay(250);
  tone(SPEAKER_PIN, c, 250); delay(250);

  tone(SPEAKER_PIN, d, 250); delay(250);
  tone(SPEAKER_PIN, hiasharp, 250); delay(250);
  tone(SPEAKER_PIN, hia, 250); delay(250);
  tone(SPEAKER_PIN, hifsharp, 250); delay(250);

  tone(SPEAKER_PIN, d, 250); delay(250);
  tone(SPEAKER_PIN, hihig, 250); delay(250);
  tone(SPEAKER_PIN, hihid, 250); delay(250);
  tone(SPEAKER_PIN, hiasharp, 250); delay(250); 

    tone(SPEAKER_PIN, d, 250);
  tone(SPEAKER_PIN, higsharp, 250); 
  delay(250);
  tone(SPEAKER_PIN, hidsharp, 250); delay(250);
  tone(SPEAKER_PIN, b, 250); delay(250);
  tone(SPEAKER_PIN, gsharp, 250); delay(250);

    tone(SPEAKER_PIN, g, 500); delay(500);
  tone(SPEAKER_PIN, g, 500); delay(500);
  tone(SPEAKER_PIN, g, 500); delay(500);
  tone(SPEAKER_PIN, dsharp, 350); delay(350);
  tone(SPEAKER_PIN, asharp, 150); delay(150);
  tone(SPEAKER_PIN, g, 500); delay(500);
  tone(SPEAKER_PIN, dsharp, 350); delay(350);
  tone(SPEAKER_PIN, asharp, 150); delay(150);
  tone(SPEAKER_PIN, g, 1000); delay(1000);

  tone(SPEAKER_PIN, hid, 500); delay(500);
  tone(SPEAKER_PIN, hid, 500); delay(500);
  tone(SPEAKER_PIN, hid, 500); delay(500);
  tone(SPEAKER_PIN, hidsharp, 350); delay(350);
  tone(SPEAKER_PIN, asharp, 150); delay(150);
  tone(SPEAKER_PIN, fsharp, 500); delay(500);
  tone(SPEAKER_PIN, dsharp, 350); delay(350);
  tone(SPEAKER_PIN, asharp, 150); delay(150);
  tone(SPEAKER_PIN, g, 1000); delay(1000);

  tone(SPEAKER_PIN, hig, 500); delay(500);
  tone(SPEAKER_PIN, g, 350); delay(350);
  tone(SPEAKER_PIN, g, 150); delay(150);
  tone(SPEAKER_PIN, hig, 500); delay(500);

  tone(SPEAKER_PIN, hifsharp, 350); delay(350);
  tone(SPEAKER_PIN, hif, 150); delay(150);
  tone(SPEAKER_PIN, hie, 125); delay(125);
  tone(SPEAKER_PIN, hidsharp, 125); delay(125);
  tone(SPEAKER_PIN, hie, 250); delay(500);
  tone(SPEAKER_PIN, gsharp, 250); delay(250);
  tone(SPEAKER_PIN, hicsharp, 500); delay(500);

  tone(SPEAKER_PIN, hic, 350); delay(350);
  tone(SPEAKER_PIN, b, 150); delay(150);
  tone(SPEAKER_PIN, asharp, 125); delay(125);
  tone(SPEAKER_PIN, a, 125); delay(125);
  tone(SPEAKER_PIN, asharp, 250); delay(500);
  tone(SPEAKER_PIN, dsharp, 250); delay(250);
  tone(SPEAKER_PIN, fsharp, 500); delay(500);

  tone(SPEAKER_PIN, dsharp, 350); delay(350);
  tone(SPEAKER_PIN, fsharp, 150); delay(150);
  tone(SPEAKER_PIN, asharp, 500); delay(500);
  tone(SPEAKER_PIN, g, 350); delay(350);
  tone(SPEAKER_PIN, asharp, 150); delay(150);
  tone(SPEAKER_PIN, hid, 1000); delay(1000);

  tone(SPEAKER_PIN, hig, 500); delay(500);
  tone(SPEAKER_PIN, g, 350); delay(350);
  tone(SPEAKER_PIN, g, 150); delay(150);
  tone(SPEAKER_PIN, hig, 500); delay(500);

  tone(SPEAKER_PIN, hifsharp, 350); delay(350);
  tone(SPEAKER_PIN, hif, 150); delay(150);
  tone(SPEAKER_PIN, hie, 125); delay(125);
  tone(SPEAKER_PIN, hidsharp, 125); delay(125);
  tone(SPEAKER_PIN, hie, 250); delay(500);
  tone(SPEAKER_PIN, gsharp, 250); delay(250);
  tone(SPEAKER_PIN, hicsharp, 500); delay(500);

  tone(SPEAKER_PIN, hic, 350); delay(350);
  tone(SPEAKER_PIN, b, 150); delay(150);
  tone(SPEAKER_PIN, asharp, 125); delay(125);
  tone(SPEAKER_PIN, a, 125); delay(125);
  tone(SPEAKER_PIN, asharp, 250); delay(500);
  tone(SPEAKER_PIN, dsharp, 250); delay(250);
  tone(SPEAKER_PIN, fsharp, 500); delay(500);

  tone(SPEAKER_PIN, dsharp, 350); delay(350);
  tone(SPEAKER_PIN, asharp, 150); delay(150);
  tone(SPEAKER_PIN, g, 500); delay(500);
  tone(SPEAKER_PIN, dsharp, 350); delay(350);
  tone(SPEAKER_PIN, asharp, 150); delay(150);
  tone(SPEAKER_PIN, g, 3000); delay(3000);
  
 songPlayed = true;
  }
}
