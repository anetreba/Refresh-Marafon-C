int mx_strcmp(const char *s1, const char *s2);
void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strlen(const char *s);

static void mx_sort(int argc, char *argv[]) {
	int sort = 1;
	char *tmp;
	int j = 0;

	while (sort == 1) {
		sort = 0;
		j++;
		for (int i = 1; i < argc - j; i++) {
			 if (mx_strcmp(argv[i], argv[i + 1]) > 0) {
			 	tmp = argv[i];
			 	argv[i] = argv[i + 1];
			 	argv[i + 1] = tmp;
			 	sort = 1;
			 }
		}
	}
}

int main(int argc, char **argv) {
	if (argc > 1) {
		mx_sort(argc, argv);
		for (int i = 1; i < argc; ++i) {
		 	mx_printstr(argv[i]);
		 	mx_printchar('\n');
		 }
	}
	return 0;
}
