inherit ROOM;

void setup(void) {
   add_area("2.4.5");

   set_brief("East road");
   set_long("East road runs north-south.  Sun alley is to the west.");

   add_exit("north","/domains/2.4.5/rooms/eastroad4.c");
   add_exit("south","/domains/2.4.5/rooms/eastroad2.c");
   add_exit("west","/domains/2.4.5/rooms/sunalley1.c");
}
