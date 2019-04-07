# NumOfCollusion1
Codes of Backbenchers on event Simul8-R

 

The code has been written in C++ . The libraries used were STL, iostream, iomanip and cmath. There are no prerequisite functions or code required to run this simulation.

The code works in the following way:-

1)      Velocities along the left are considered negative and to the right are considered positive. So, while entering the initial velocity of particle 2, please ensure that you include a ‘-‘ sign with the velocity!

2)      When you build and run the code, it will prompt you to enter the mass of first particle. Please enter the desired value.

3)      Then it will prompt you to enter the mass of the second particle. Please enter the desired value again.

4)      Then it will prompt you to enter the initial velocity of particle 2. If the velocity of the particle is 5m/s and along the right direction, enter 5. If it is along the left direction, enter -5 .

5)      It will then show you 5 simulations throughout the course of collisions. The final simulation will show you the max number of collisions that is going to occur between particles 1 & 2.

6)      After the simulation is complete, it will again prompt you to enter the mass of particle 2 and velocity of particle 2, as in steps 3 and 4. Then step 5 will be repeated again.

 

Results:-

M1=1kg

Velocity of particle 2 is 5m/s along the left side.

Case 1) M2=1kg

                simulation1: 0 ,simulation2: 1 ,simulation3: 1 ,simulation4: 2 ,simulation5: 3

Case 2) M2=10kg

                simulation1: 17 ,simulation2: 34 ,simulation3: 52 ,simulation4: 69 ,simulation5: 87

Case 3) M2=100kg

                simulation1: 170 ,simulation2: 341 ,simulation3: 511 ,simulation4: 682 ,simulation5: 853

Case 4) M2=1000kg

                simulation1: 1703 ,simulation2: 3407 ,simulation3: 5111 ,simulation4: 6815 ,simulation5: 8519

Case 5) M2=10000kg

The simulation stops at 25,956 collisions as the computer on which this was coded isn’t able to accommodate more iterations.
