void mx_sort_arr_int(int *arr, int size) {
	int sort = 1;
	int tmp = 0;
	int j = 0;

	while (sort == 1) {
		sort = 0;
		j++;
		for (int i = 0; i < size - j; i++) {
			 if (arr[i] > arr[i + 1]) {
			 	tmp = arr[i];
			 	arr[i] = arr[i + 1];
			 	arr[i + 1] = tmp;
			 	sort = 1;
			 }
		}
	}
}
