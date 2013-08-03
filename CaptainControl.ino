
/* Captain's viewscreen control console for Artemis
   Created by JayPee at HackPittsburgh 2013
   Creative Commons Licence: Attribution - Share Alike (CC BY-SA)
   @jp_bse
   wmjaypee@riseup.net
*/

int Fwd = 0;
int Left = 0;
int Right = 0;
int Rear = 0;
int Tact = 0;
int LRV = 0;
int Stat = 0;

void setup () {
  // setup the pushbuttons as inputs
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  
  // enable keyboard emulation
  Keyboard.begin();
}


void loop () {
  Fwd = digitalRead(2);
  Left = digitalRead(3);
  Right = digitalRead(4);
  Rear = digitalRead(5);
  Tact = digitalRead(10);
  LRV = digitalRead(16);
  Stat = digitalRead(14);
  
  if (Fwd == LOW) {
    Keyboard.print('F');
  }
  
  if (Left == LOW) {
    Keyboard.print('L');
  }
  
  if (Right == LOW) {
    Keyboard.print('R');
  }
  
  if (Rear == LOW) {
    Keyboard.print('B');
  }
  
  if (Tact == LOW) {
    Keyboard.print('T');
  }
  
  if (LRV == LOW) {
    Keyboard.print('V');
  }
  
  if (Stat == LOW) {
    Keyboard.print('I');
  }

  delay(60);
  
}
