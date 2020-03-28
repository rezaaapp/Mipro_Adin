//Inisialisasi Keypad
int K = 7;
int L = 6;
int M = 5;
int N = 4;

int O = 3;
int P = 2;
int Q = 12;

//Inisialisasi 7segment
int a = 10;
int b = 11;
int c = A3;
int d = A4;
int e = A5;
int f = 9;
int g = 8;


int O_value;
int P_value;
int Q_value;
int R_value;

int read_value;


// the setup routine runs once when you press reset:
void setup() {

  pinMode(K, OUTPUT);
  pinMode(L, OUTPUT);
  pinMode(M, OUTPUT);
  pinMode(N, OUTPUT);

  pinMode(O, INPUT);
  pinMode(P, INPUT);
  pinMode(Q, INPUT);


  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);


  // INITIALLY SEND LOW TO OUTPUT PINS (K, L, M and N)

  digitalWrite(K, LOW);
  digitalWrite(L, LOW);
  digitalWrite(M, LOW);
  digitalWrite(N, LOW);

  // INITIALLY SET 7 SEGMENT TO DISPLAY EACH SEGMENT TO TEST FOR DEFECTS

  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(500);
  digitalWrite(a, LOW);
  delay(500);
  digitalWrite(b, LOW);
  delay(500);
  digitalWrite(c, LOW);
  delay(500);
  digitalWrite(d, LOW);
  delay(500);
  digitalWrite(e, LOW);
  delay(500);
  digitalWrite(f, LOW);
  delay(500);
  digitalWrite(g, LOW);
  delay(500);
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}



//void seven_segment_display(int number)
//{
///*  if(number==1)
//  {*/
//     digitalWrite(a, LOW);
//     digitalWrite(b, HIGH);
//     digitalWrite(c, HIGH);
//     digitalWrite(d, LOW);
//     digitalWrite(e, LOW);
//     digitalWrite(f, LOW);
//     digitalWrite(g, LOW);
////  }
//  return;
//}

//Angka seven segment
void hiji() {
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void opat() {
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

void tujuh() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void bintang() {

}

void dua() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
}

void lima() {
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

void dalapan() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

void nol() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
}

void tilu() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
}

void genep() {
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

void salapan() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

// LOOP ROUTINE:
void loop() {

label:

  // INITIALLY SEND LOW TO OUTPUT PINS OF KEYPAD (K, L, M and N) IN THE WHILE LOOP

  digitalWrite(K, LOW);
  digitalWrite(L, LOW);
  digitalWrite(M, LOW);
  digitalWrite(N, LOW);

  O_value = digitalRead(O); // READ VALUE FROM O
  P_value = digitalRead(P); // READ VALUE FROM P
  Q_value = digitalRead(Q); // READ VALUE FROM Q

  if (O_value == 0) // IF ANY SWITCH IN SWITCHES 1, 4, 7 and '*' IS PRESSED O_value WILL BECOME 0
  {

    //  SEND LOW TO K AND HIGH TO L, M AND N
    digitalWrite(K, LOW);
    digitalWrite(L, HIGH);
    digitalWrite(M, HIGH);
    digitalWrite(N, HIGH);

    // IF VALUE READ FROM O IS 0, SWITCH PRESSED WILL BE 1
    read_value = digitalRead(O);
    if (read_value == 0)
    {
      // Display 1 in seven segment display
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      delay(100);
      goto label;
    }

    //  SEND LOW TO L AND HIGH TO K, M AND N
    digitalWrite(K, HIGH);
    digitalWrite(L, LOW);
    digitalWrite(M, HIGH);
    digitalWrite(N, HIGH);

    // IF VALUE READ FROM O IS 0, SWITCH PRESSED WILL BE 4
    read_value = digitalRead(O);
    if (read_value == 0)
    {
      // Display 4 in seven segment display
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      delay(100);
      goto label;
    }

    //  SEND LOW TO M AND HIGH TO K, L AND N
    digitalWrite(K, HIGH);
    digitalWrite(L, HIGH);
    digitalWrite(M, LOW);
    digitalWrite(N, HIGH);

    // IF VALUE READ FROM O IS 0, SWITCH PRESSED WILL BE 7
    read_value = digitalRead(O);
    if (read_value == 0)
    {
      // Display 7 in seven segment display
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      delay(100);
      goto label;
    }

    //  SEND LOW TO N AND HIGH TO K, L AND M
    digitalWrite(K, HIGH);
    digitalWrite(L, HIGH);
    digitalWrite(M, HIGH);
    digitalWrite(N, LOW);

    // IF VALUE READ FROM O IS 0, SWITCH PRESSED WILL BE '*'
    read_value = digitalRead(O);
    if (read_value == 0)
    {
      goto label;
    }

  }


  else if (P_value == 0) // IF ANY SWITCH IN SWITCHES 2, 5, 8 and 0 IS PRESSED P_value WILL BECOME 0
  {

    //  SEND LOW TO K AND HIGH TO L, M AND N
    digitalWrite(K, LOW);
    digitalWrite(L, HIGH);
    digitalWrite(M, HIGH);
    digitalWrite(N, HIGH);

    // IF VALUE READ FROM P IS 0, SWITCH PRESSED WILL BE 2
    read_value = digitalRead(P);
    if (read_value == 0)
    {
      // Display 2 in seven segment display
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, LOW);
      delay(100);
      goto label;
    }


    //  SEND LOW TO L AND HIGH TO K, M AND N
    digitalWrite(K, HIGH);
    digitalWrite(L, LOW);
    digitalWrite(M, HIGH);
    digitalWrite(N, HIGH);


    // IF VALUE READ FROM P IS 0, SWITCH PRESSED WILL BE 5
    read_value = digitalRead(P);
    if (read_value == 0)
    {
      // Display 5 in seven segment display
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      delay(100);
      goto label;
    }

    //  SEND LOW TO M AND HIGH TO K, L AND N
    digitalWrite(K, HIGH);
    digitalWrite(L, HIGH);
    digitalWrite(M, LOW);
    digitalWrite(N, HIGH);

    // IF VALUE READ FROM P IS 0, SWITCH PRESSED WILL BE 8
    read_value = digitalRead(P);
    if (read_value == 0)
    {
      // Display 8 in seven segment display
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      delay(100);
      goto label;
    }

    //  SEND LOW TO N AND HIGH TO K, L AND M
    digitalWrite(K, HIGH);
    digitalWrite(L, HIGH);
    digitalWrite(M, HIGH);
    digitalWrite(N, LOW);


    // IF VALUE READ FROM P IS 0, SWITCH PRESSED WILL BE 0
    read_value = digitalRead(P);
    if (read_value == 0)
    {
      // Display 0 in seven segment display
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      delay(100);
      goto label;
    }

  }


  else if (Q_value == 0) // IF ANY SWITCH IN SWITCHES 3, 6, 9 and '#' IS PRESSED Q_value WILL BECOME 0
  {

    //  SEND LOW TO K AND HIGH TO L, M AND N
    digitalWrite(K, LOW);
    digitalWrite(L, HIGH);
    digitalWrite(M, HIGH);
    digitalWrite(N, HIGH);

    // IF VALUE READ FROM Q IS 0, SWITCH PRESSED WILL BE 3
    read_value = digitalRead(Q);
    if (read_value == 0)
    {
      // Display 3 in seven segment display
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, LOW);
      delay(100);
      goto label;
    }

    //  SEND LOW TO L AND HIGH TO K, M AND N
    digitalWrite(K, HIGH);
    digitalWrite(L, LOW);
    digitalWrite(M, HIGH);
    digitalWrite(N, HIGH);

    // IF VALUE READ FROM Q IS 0, SWITCH PRESSED WILL BE 6
    read_value = digitalRead(Q);
    if (read_value == 0)
    {
      // Display 6 in seven segment display
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      delay(100);
      goto label;
    }

    //  SEND LOW TO M AND HIGH TO K, L AND N
    digitalWrite(K, HIGH);
    digitalWrite(L, HIGH);
    digitalWrite(M, LOW);
    digitalWrite(N, HIGH);

    // IF VALUE READ FROM Q IS 0, SWITCH PRESSED WILL BE 9
    read_value = digitalRead(Q);
    if (read_value == 0)
    {
      // Display 9 in seven segment display
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      delay(100);
      goto label;
    }

    //  SEND LOW TO N AND HIGH TO K, L AND M
    digitalWrite(K, HIGH);
    digitalWrite(L, HIGH);
    digitalWrite(M, HIGH);
    digitalWrite(N, LOW);

    // IF VALUE READ FROM Q IS 0, SWITCH PRESSED WILL BE #
    read_value = digitalRead(Q);
    if (read_value == 0)
    {
      goto label;
    }

  }






}
