# CS 202 Semester Project Group 51

1. Group Members: Morgan Young, Amber Hankins, and Mohagoney Moore.

2. Morgan and Amber contributed by writting the code for the classes needd to process the audio, like the Wave, Processor, and Echo classes to name a few. Mohagoney wrote the documentation through Doxygen and uploaded the necessary UML graphics, as well as minor contributions to the user interface. 

3. The design was implemented developing serparate audio processing classes and pointing them in the direction of the processor. When looking at the UML graphic for Echo, Normalization, and Noise Gate, we see an inheritance relationship between the classes. With these classes inheriting the functions of the parent Processor class. There was also the use of structs in the wav class to store the data from the metadata, like the number of channels and the byte sizes for the files. We implemented the use of templates and switch cases in the case of our user interface. This would allow the user to navigate through the menu and try to decide how they want their wav file processed and allow the option to convert the metadata into a csv file.

4. One of the challenges we encountered within the project was allowing the user the access to modify the metadata. Along with that, we had issues trying to convert the metadata into a proper csv file and adjusting the user interaction. We would say the user interaction was the most difficult overall. The next difficulty was trying to determine where to apply our templates, but we essentially just used it in the user interaction. 



