//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
//
//
// TODO documentation
//
simple wearable
{
    parameters:
        @display("p=250,150;i=device/pc3");
    gates:
        input in @directIn;
        output out @directIn;
}

//
// TODO documentation
//
simple mobile
{
    parameters:
        @display("p=250,150;i=device/pc3");
    gates:
        input in @directIn;
        output out @directIn;
}

//
// TODO documentation
//
simple server
{
    parameters:
        @display("p=400,150;i=device/pc2");
    gates:
        input in @directIn;
        output out @directIn;
}

//
// TODO documentation
//
network WoTNetwork
{
    @display("bgb=560,200");
    submodules:
        wearable: wearable {
            @display("p=56,98");
        }
        mobile: mobile {
            @display("p=244,98");
        }
        server: server {
            @display("p=441,98");
        }
    connections:
        wearable.out --> mobile.in;
        mobile.out --> server.in;
        
}

