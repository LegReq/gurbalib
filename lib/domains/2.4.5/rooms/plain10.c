inherit ROOM;

void setup(void) {
   add_area("2.4.5");

   set_brief("A large open plain");
   set_long("A large open plain.");

   add_exit("north","/domains/2.4.5/rooms/plain12.c");
   add_exit("south","/domains/2.4.5/rooms/plain7.c");
   add_exit("east","/domains/2.4.5/rooms/plain6.c");
}
