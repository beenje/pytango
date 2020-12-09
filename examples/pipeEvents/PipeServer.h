/*----- PROTECTED REGION ID(PipeServer.h) ENABLED START -----*/
//=============================================================================
//
// file :        PipeServer.h
//
// description : Include file for the PipeServer class
//
// project :     
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
// $Author:  $
//
// $Revision:  $
// $Date:  $
//
// $HeadURL:  $
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#ifndef PipeServer_H
#define PipeServer_H

#include <tango.h>


/*----- PROTECTED REGION END -----*/	//	PipeServer.h

/**
 *  PipeServer class description:
 *    
 */

namespace PipeServer_ns
{
/*----- PROTECTED REGION ID(PipeServer::Additional Class Declarations) ENABLED START -----*/

//	Additional Class Declarations

/*----- PROTECTED REGION END -----*/	//	PipeServer::Additional Class Declarations

class PipeServer : public TANGO_BASE_CLASS
{

/*----- PROTECTED REGION ID(PipeServer::Data Members) ENABLED START -----*/

//	Add your own data members

	Tango::DevLong 				dl;
	std::vector<double> 				v_db;
	Tango::DevicePipeBlob 		inner_inner_blob;
	Tango::DevicePipeBlob 		inner_blob;

	string						inner_str;
	Tango::DevBoolean			inner_bool;
	std::vector<Tango::DevLong>		v_dl;

    /*----- PROTECTED REGION END -----*/	//	PipeServer::Data Members


//	Constructors and destructors
public:
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	PipeServer(Tango::DeviceClass *cl,string &s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	PipeServer(Tango::DeviceClass *cl,const char *s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device name
	 *	@param d	Device description.
	 */
	PipeServer(Tango::DeviceClass *cl,const char *s,const char *d);
	/**
	 * The device object destructor.
	 */
	~PipeServer() {delete_device();};


//	Miscellaneous methods
public:
	/*
	 *	will be called at device destruction or at init command.
	 */
	void delete_device();
	/*
	 *	Initialize the device
	 */
	virtual void init_device();
	/*
	 *	Always executed method before execution command method.
	 */
	virtual void always_executed_hook();


//	Attribute methods
public:
	//--------------------------------------------------------
	/*
	 *	Method      : PipeServer::read_attr_hardware()
	 *	Description : Hardware acquisition for attributes.
	 */
	//--------------------------------------------------------
	virtual void read_attr_hardware(std::vector<long> &attr_list);


	//--------------------------------------------------------
	/**
	 *	Method      : PipeServer::add_dynamic_attributes()
	 *	Description : Add dynamic attributes if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_attributes();



//	pipe related methods
public:
	//	Pipe TestPipe
	bool is_TestPipe_allowed(Tango::PipeReqType);
	void read_TestPipe(Tango::Pipe &);
	void write_TestPipe(Tango::WPipe &);

//	Command related methods
public:
	/**
	 *	Command cmd_push_pipe_event related method
	 *	Description: 
	 *
	 *	@param argin 
	 */
	virtual void cmd_push_pipe_event(Tango::DevShort argin);
	virtual bool is_cmd_push_pipe_event_allowed(const CORBA::Any &any);


	//--------------------------------------------------------
	/**
	 *	Method      : PipeServer::add_dynamic_commands()
	 *	Description : Add dynamic commands if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_commands();

/*----- PROTECTED REGION ID(PipeServer::Additional Method prototypes) ENABLED START -----*/

//	Additional Method prototypes

/*----- PROTECTED REGION END -----*/	//	PipeServer::Additional Method prototypes
};

/*----- PROTECTED REGION ID(PipeServer::Additional Classes Definitions) ENABLED START -----*/

//	Additional Classes Definitions

/*----- PROTECTED REGION END -----*/	//	PipeServer::Additional Classes Definitions

}	//	End of namespace

#endif   //	PipeServer_H
