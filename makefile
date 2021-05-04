audiomanagement: noiseGate.o echo.o normalization.o menu.o wav.o main.cpp
	g++ -std=c++11 -o audiomanagement noiseGate.o echo.o normalization.o menu.o wav.o main.cpp
menu.o: menu.cpp menu.h
	g++ -std=c++11 -c menu.cpp
wav.o: wav.cpp wav.h wavHeader.h
	g++ -std=c++11 -c wav.cpp
metaDataManager.o: metaDataManager.cpp metaDataManager.cpp metaDataHeader.h
	g++ -std=c++11 -c metaDataManager.cpp
noiseGate.o: noiseGate.cpp noiseGate.h processor.h
	g++ -std=c++11 -c noiseGate.cpp
echo.o: echo.cpp echo.h processor.h
	g++ -std=c++11 -c echo.cpp
normalization.o: normalization.cpp normalization.h processor.h
	g++ -std=c++11 -c normalization.cpp
clean:
	rm *.o audiomanagement
