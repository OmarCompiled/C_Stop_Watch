CC=gcc

stopwatch : stopwatch.c
	$(CC) stopwatch.c -o stopwatch && sudo mv stopwatch /usr/bin
