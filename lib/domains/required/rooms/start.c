inherit ROOM;

void setup(void) {
   add_area("required");

   set_brief("%^MAGENTA%^A large open field.%^RESET%^");
   set_long("You are in a large open field.  To the north you see a large " +
      "dead tree with some sort of sign on it.  To the east you see more " +
      "prarie.  To the west you see the ancient city of gurba.");

   set_exits(([
      "north" : "/domains/newbie/rooms/tree", 
      "east" : "/domains/boothill/rooms/outside_town",
      "west" : "/domains/gurba/rooms/gate_east",
   ]));
}
