inherit ROOM;

void setup(void) {
   add_area("2.4.5");

   set_brief("A large open plain");
   set_long("A large open plain.  There is a mountain to the north, " +
      "but it is too steep to climb.");

   add_exit("south","/domains/2.4.5/rooms/plain8.c");
   add_exit("west","/domains/2.4.5/rooms/plain11.c");
}
