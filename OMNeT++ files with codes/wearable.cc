/*
 * wearable.cc
 *
 *  Created on: Feb 11, 2021
 *      Author: abiga
 */

/*
 * wearable.cc
 *
 *  Created on: Feb 11, 2021
 *      Author: abiga
 */


#include <string.h>
#include <omnetpp.h>

using namespace omnetpp;

class wearable : public cSimpleModule
{
  protected:
    // The following redefined virtual function holds the algorithm.
    virtual void initialize() override;
    virtual void handleMessage(cMessage *msg) override;
};


Define_Module(wearable);

void wearable::initialize()
{

        EV << "wearable initial message\n";
        cMessage *msg = new cMessage("wearer's health data");
        scheduleAt(simTime() + dblrand(),msg--->dup());
        EV << "wearable initial message complete\n";
    }


void wearable::handleMessage(cMessage *msg)
{
    EV << "Received message `" << msg->getName() << "', sending it out again\n";
   send(msg, "out");
}





