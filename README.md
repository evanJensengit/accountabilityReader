# accountabilityReader
updated 01/05/21 

Full project at: https://github.com/evanJensengit/accountabilityReader

accountabilityReader purpose is to take in a primer.txt file with format: 

Date: Date \
Weekday: name\
Wrkt: YOrN\
Bedtime/wake up: sleep\
Chapters of bible read: YOrN, Amount\
Study csci: YOrN, Amount\
Therapy work: YOrN, name, Amount\
Meditation: YOrN, name \
Full body stretching: YOrN\
Connection: YOrN, Amount\
Journaling: YOrN, Amount\
videogames: YOrN, Amount\
Expression: YOrN, Amount\
Caffeine: Amount

This primer file is used to "prime" the program to take in "record.txt", that contains "Tracks" 
(activities and things that user wants to track), file with the similar pattern of the Tracks and TrackMetrics in the primer.txt. 
A Track object is the string to the left of the ":" and the
TrackMetric(s) is what is on the right side of the ":"

i.e Caffeine is the "Track" and the Amount is the "TrackMetric"

Date: 1/4\
Weekday: mon\
Wrkt: y strength\
Bedtime/wake up: 1-9 \
Study csci: y class\
Therapy work: n\
Meditation: y 20 mins breath\
Full body stretching: y 2x\
Connection: y call maur, call jason, meeting \
Journaling: y\
videogames: y chess 20 min\
Expression: y singing\
Caffeine: 200 mg\
Sugar: waffles, mommas chocolate

The above from "Date: .... Sugar:" is one "Day" object. A week is made up of seven Day objects.
The goal of this program is to use the record.txt file to create Day objects within a Week object and 
display the contents of that week. In the above case it would be how much sugar the user had that week, how many times they worked out etc

As of 01/05/21 The program takes in the primer.txt file and creates a skeloton of empty day objects to be filled in by the record.txt file.

