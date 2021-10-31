/*
 * server.cc
 *
 *  Created on: Feb 11, 2021
 *      Author: abiga
 */

#include <string.h>
#include <omnetpp.h>

using namespace omnetpp;

class server : public cSimpleModule
{
  protected:
    // The following redefined virtual function holds the algorithm.
    virtual void initialize() override;
    virtual void handleMessage(cMessage *msg) override;
};


Define_Module(server);

void server::initialize()
{

    if (strcmp("mobile", getName()) == 0)
    {
        cMessage *msg = new cMessage("wearer's health data");
        send(msg, "in");
    }
}

void server::handleMessage(cMessage *msg)
{

    send(msg, "out"); // send out the message
}



