//100000001
//010000010
//001000100
//000101000
//000010000
//000101000
//001000100
//010000010
//100000001
// final output

#define ROWS 9
#define COLS 9
int img[ROWS][COLS];

void setup() {
Serial.begin(9600);
for (int r=0; r<ROWS; r++) {
  for (int c=0; c<COLS; c++) {
     img[r][c] = 0;
  }
}
}

void loop() {
}

void cross() {
  //add's 1's to the backslash
   for (int c=0; c<COLS; c++) {
      img[c][c] = 1;
   }
   //add's 1's to the forwardslash
   for (int r=0; r<ROWS; r++) {
     img[9 - r][r + 1] = 1;
   }
}

void print_img() {
   for (int r=0; r<ROWS; r++) {
     for (int c=0; c<COLS; c++) {
        Serial.print(img[r][c]);
       }
     Serial.println();
   }
}
