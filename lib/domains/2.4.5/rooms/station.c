inherit ROOM;

void setup(void) {
   add_area("2.4.5");

   set_brief("Central point");
   set_long("This is the central point.  A lot of traffic seems to " + 
      "have passed through here.  If you just wait long enough, some " +
      "transport might pick you up.");

   add_exit("up","/domains/2.4.5/rooms/vill_road2.c");
}
