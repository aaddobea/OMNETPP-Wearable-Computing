/*
 * mobile.cc
 *
 *  Created on: Feb 11, 2021
 *      Author: abiga
 */

#include <string.h>
#include <omnetpp.h>

using namespace omnetpp;

class mobile : public cSimpleModule
{
  protected:
    // The following redefined virtual function holds the algorithm.
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
};


Define_Module(mobile);

void mobile::initialize()
{

    if (strcmp("wearable", getName()) == 0)
    {
        cMessage *msg = new cMessage("wearer's health data");
        send(msg, "out");
    }
}

void mobile::handleMessage(cMessage *msg)
{

    send(msg, "out"); // send out the message
}





