CC = gcc
CFLAGS = -lpthread -Wno-overflow -pthread

TARGET1 = flops32
FILE1	= BenchmarkFLOPS32.c
TARGET2 = flops64
FILE2	= BenchmarkFLOPS64.c
TARGET3 = iops32
FILE3	= BenchmarkIOPS32.c
TARGET4 = iops64
FILE4 	= BenchmarkIOPS64.c

all:	$(TARGET1) $(TARGET2) $(TARGET3) $(TARGET4)

$(TARGET1): $(FILE1)
	$(CC) $(CFLAGS) -o $(TARGET1) $(FILE1)
	
$(TARGET2): $(FILE2)
	$(CC) $(CFLAGS) -o $(TARGET2) $(FILE2)

$(TARGET3): $(FILE3)
	$(CC) $(CFLAGS) -o $(TARGET3) $(FILE3)

$(TARGET4): $(FILE1)
	$(CC) $(CFLAGS) -o $(TARGET4) $(FILE4)

install: all
	mv -t /usr/bin/ iops32 iops64 flops32 flops64

uninstall: all
	rm /usr/bin/{iops32,iops64,flops32,flops64}

clean:
	rm $(TARGET1) $(TARGET2) $(TARGET3) $(TARGET4)

