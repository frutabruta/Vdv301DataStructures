# VDV301DataStructures
Library of data storage classes for use with VDV301
- 20240618
    - complete new approach to xml generation
    - Connection
        - new function Connection::toVdv301Connection
    - ConnectionGolemio
        - new function ConnectionGolemio::toVdv301Connection
    - ConnectionMPV
        - new function ConnectionMPV::toVdv301Connection
   
    - Vdv301Destination
        - DestinationRef renamed to destinationRef
    - Vdv301StopPoin
        - added QVector<Vdv301Connection> connectionList
    - Vdv301Trip
        - changed locationState from String to Vdv301Enumerations::LocationStateEnumeration
    - Vdv301ViaPoint
        - viaPointRef changed from Vdv301InternationalText to QString
        - added QVector<Vdv301InternationalText> placeNameList
    - new class Vdv301AllData
    - new class Vdv301VehicleInformationGroup
    - new class Vdv301Connection
    - new class Vdv301Enumerations

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
