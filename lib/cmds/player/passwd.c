string curpass, newpass;

void usage() {
  write("Usage: passwd [-h]\n");
  write("Allows you to change your password.\n");
  write("Options:\n");
  write("\t-h\tHelp, this usage message.\n");
}

// XXX Needs work... still isn't working right...
// I think it might be a security issue at this point
void input_newpass2( string str) {
   if (!str || str == "") {
      write("Empty password aborting.");
      return;
   }
   if (str == newpass) {
      this_player()->set_password(str);
      write("You have changed your password.\n");
   } else {
	write("Password's do not match.\n");
	return;
   }
}

void input_newpass( string str) {
   if (!str || str == "") {
      write("You need to enter a password, to change it.\n");
      return;
   }

   newpass = str;
   write("Verify new password: ");
   this_player()->input_to_object( this_object(), "input_newpass2");
}

void input_curpass( string str) {
   curpass = this_player()->query_password();
   if (!str || str == "") {
	write("ouchie...\n");
   }
   if (str == curpass) {
      write("New password: ");
      this_user()->send_message( 0 );
      this_player()->input_to_object( this_object(), "input_newpass");
   } else {
      write("That is not your current password.\n");
      write("new passwd = " + str + "\n");
      write("old passwd = " + curpass  + "\n");
      return;
   }
}

void main( string arg ) {
  if (arg && arg != "" ) {
     usage();
     return;
  }

  this_player()->input_to_object(this_object(), "input_curpass");
  write( "\nPlease enter your password : " );
}
