# OMNETPP
A design of a wearable health network that shows data transition from three different nodes(wearable node, mobile node and the server)
In order to design or create a network module, readers need to install the OMNeT++ simulator by downloading the simulator from the OMNET++ website (OMNeT++ Downloads (omnetpp.org)) and also download the INET framework from (Releases · inet-framework/inet · GitHub).  For our simulation, we installed the OMNeT++ version 5.6.2 using the windows edition.  We first create a project workspace, rename the project workspace and import the downloaded INET framework into the project workspace. Your first created project workspace must have a initialization(ini.) File  and a network description (NED) file.

![image](https://user-images.githubusercontent.com/31397625/139563581-0843baa9-ff66-4081-813e-816d4683be33.png)
![image](https://user-images.githubusercontent.com/31397625/139563589-905eb7c2-9aae-44b5-b3b3-f875d5260902.png)

The palette section will only show two models in order to add more models, by importing the INET framework into your project workspace at the project preferences section. Then create your network by choosing a network type (under Types) from the palette section and drag the submodules into your network and connecting each submodule with an ethernet link.  The codes representing the network and submodules are shown in the source section. All details such as the CPU time, simulation time, name of Network is shown in the initialization(ini.) file.

![image](https://user-images.githubusercontent.com/31397625/139563615-2d79b96b-82e4-425d-b2c0-b7e94f33563c.png)
![image](https://user-images.githubusercontent.com/31397625/139563656-35aca3fb-2144-4ac2-9efa-8e6a9556a559.png)

To proceed with the simulation of the network, C++ files need to be generated under the project workspace. The reader needs to code according to the scripts uploaded with this tutorial under the project workspace. The project is debugged during execution by clicking on the run. 

![image](https://user-images.githubusercontent.com/31397625/139563763-b469cb4a-70f2-4c8a-8f51-996fcb32d654.png)

During project debugging, any errors found are shown in this dialog box.

![image](https://user-images.githubusercontent.com/31397625/139563850-b120cebd-5111-45f0-a3e6-1c376c42e175.png)

During execution, if there are no errors found the network is setup.

![image](https://user-images.githubusercontent.com/31397625/139563895-92978826-bf73-4b1c-aad6-7b9fdf189d2a.png)
![image](https://user-images.githubusercontent.com/31397625/139563903-25bc28b6-76b6-4d81-883c-33cdfa8a73bb.png)
![image](https://user-images.githubusercontent.com/31397625/139563913-0fe3b019-3d0f-46c0-ae89-7372302d2ae5.png)
