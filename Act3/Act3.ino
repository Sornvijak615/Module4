void setup() {
  enum Position {
    teacher,
    employee,
    student,
  };
  struct CARD_ID {
    int ID;
    String name;
    Position pos;
  };
  CARD_ID c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
  c1.ID = 1;
  c1.name = "a";
  c1.pos = teacher;

  c2.ID = 2;
  c2.name = "a";
  c2.pos = teacher;

  c3.ID = 3;
  c3.name = "a";
  c3.pos = teacher;

  c4.ID = 4;
  c4.name = "a";
  c4.pos = employee;

  c5.ID = 5;
  c5.name = "a";
  c5.pos = employee;

  c6.ID = 6;
  c6.name = "a";
  c6.pos = employee;

  c7.ID = 7;
  c7.name = "a";
  c7.pos = student;

  c8.ID = 8;
  c8.name = "a";
  c8.pos = student;

  c9.ID = 9;
  c9.name = "a";
  c9.pos = student;

  c10.ID = 10;
  c10.name = "a";
  c10.pos = student;

  CARD_ID card_Array[] = {c1, c2, c3, c4, c5, c6, c7, c8, c9, c10};
  String stringShowArray;
  for (int i = 0; i <= 9; i++) {
    card_Array[i];
    if (teacher) {
      Serial.println("teacher");
    } else if (employee) {
      Serial.println("employee");
    } else if (student) {
      Serial.println("student");
    }
  }
}
void loop() {}
