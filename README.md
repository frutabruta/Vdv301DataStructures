# VDV301DataStructures
Library of data storage classes for use with VDV301

- 20240617
    - StopPoint
        - added ArrivalTime
- 20240606
    - VehicleState
        - fixed preprocessor header
        - removed 
            - unnecessary QWidget contructor
            - #include<iostream>
            - using namespace std;
- 20240207
    - new function Vdv301DisplayContent::qStringToDisplayContentClass
    - new class Vdv301Trip
- 20240203
    - VehicleState
        - default values for vehicleSubMode and vehicleMode swaped
- 20231030
    - function ConnectionGolemio::toTransfer() renamed to ConnectionGolemio::toConnection()
- 20231002
    - translation of the source code variable and function names to English
    - rename to VDV301DataStructures

- 20230907
    - PrestupGolemio::toPrestup()
        - regionalRail fix
