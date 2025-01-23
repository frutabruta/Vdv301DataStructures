# VDV301DataStructures
Library of data storage classes for use with VDV301

- 20250123_1334
        - new classes
            - Vdv301AdditionalAnnouncement
            - Vdv301AdditionalAnnouncement2_3CZ1_0
        - VDV301Trip
            - added variable  QVector<Vdv301AdditionalAnnouncement> additionalAnnoucementList;
        - Vdv301Trip2_3CZ1_0
            - added variable QVector <Vdv301AdditionalAnnouncement2_3CZ1_0> additionalAnnouncementList;
- 20241206_1614
    - new function Vdv301AllData::isVehicleOnFinalStop()
    - new function Vdv301AllData2_3CZ1_0::isVehicleOnFinalStop()
- 20241205_1437
    - Vdv301Trip2_3CZ1_0
        - runNumber description (formally changed in XSD to IBIS-IP.string)
- 20241205_1304
    - Vdv301StopPoint2_3CZ1_0
        - added variable GlobalStopRef to store CISJR stop number
- 20241101
    - Vdv301Connection
        - new ConnectionTypeEnumeration
        - new ConnectionStateEnumeration
        - added variables
            - stopRef
            - connectionType
            - connectionState
        - removed unused includes
    - Vdv301Destination
        - default value of destinationRef se to "noRef"
    - Vdv301Line
        - default value of lineRef se to "noRef"
    - Vdv301DisplayContent
        - Vdv301DisplayContent::qStringToDisplayContentClass added option Inner
    - Trip
        - added function ref() to create number for *Ref elements (ROPID trip number)
    - StopPoint:
        - added function ref() to create number for *Ref elements (u_z)
    - Line
        - added function ref() to create number for *Ref elements (l.c)
    - Connection
        - added parameter to function Connection::toVdv301Connection(DisplayContentClass displayClass)

- 20241018_2
    - new class Vdv301FareZoneChange2_3CZ1_0
    - Vdv301Trip2_3CZ1_0
        - added fareZoneChange variable

- 20241018
    - new derived classes
        - Vdv301AllData2_3CZ1_0        
        - Vdv301Trip2_3CZ1_0 
        - Vdv301StopPoint2_3CZ1_0
            - changed fareZoneList type from QStringlist to QVector<Vdv301InternationalText>
- 20240823 
    - Vdv301Enumerations
        - new function DoorOpenStateEnumerationFromQString

- 20240703
    - new function Vdv301DisplayContent::displayContentClassEnumerationToQString
- 20240620
    - new function Vdv301Enumerations::DoorOpenStateEnumerationToQString
    - VehicleState
        - doorState changed from QString to Vdv301Enumerations

- 20240619
    - new function Vdv301Enumerations::RouteDeviationEnumerationToQString
    - routeDeviation changed from QString to Vdv301Enumerations::RouteDeviationEnumeration

- 20240619
    - Vdv301Enumerations::LocationStateEnumerationFromText renamed to Vdv301Enumerations::LocationStateEnumerationFromQString
    - new function  Vdv301Enumerations::LocationStateEnumerationToQString
    - VehicleState
        - locationState chagned from QString to Vdv301Enumerations::LocationStateEnumeration
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
