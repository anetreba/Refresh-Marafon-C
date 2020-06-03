 void mx_printchar(char c);

 void mx_print_alphabet(void) {
 	char a = 'A';
 	
 	while (a <= 'Z') {
 		if (a % 2 == 0)
 				mx_printchar(a + 32);
 		else
 			mx_printchar(a);
 		a++;
 	}
 	mx_printchar('\n');
 }
