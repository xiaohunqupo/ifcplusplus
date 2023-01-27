/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcEvent.h"
#include "ifcpp/IFC4X3/include/IfcEventTime.h"
#include "ifcpp/IFC4X3/include/IfcEventTriggerTypeEnum.h"
#include "ifcpp/IFC4X3/include/IfcEventTypeEnum.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcIdentifier.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcRelAggregates.h"
#include "ifcpp/IFC4X3/include/IfcRelAssigns.h"
#include "ifcpp/IFC4X3/include/IfcRelAssignsToProcess.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociates.h"
#include "ifcpp/IFC4X3/include/IfcRelDeclares.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4X3/include/IfcRelNests.h"
#include "ifcpp/IFC4X3/include/IfcRelSequence.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcEvent 
IFC4X3::IfcEvent::IfcEvent( int tag ) { m_tag = tag; }
void IFC4X3::IfcEvent::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCEVENT" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Identification ) { m_Identification->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_LongDescription ) { m_LongDescription->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_PredefinedType ) { m_PredefinedType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_EventTriggerType ) { m_EventTriggerType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_UserDefinedEventTriggerType ) { m_UserDefinedEventTriggerType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_EventOccurenceTime ) { stream << "#" << m_EventOccurenceTime->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcEvent::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcEvent::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 11 ){ std::stringstream err; err << "Wrong parameter count for entity IfcEvent, expecting 11, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream );
	readEntityReference( args[1], m_OwnerHistory, map, errorStream );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream );
	m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map, errorStream );
	m_Identification = IfcIdentifier::createObjectFromSTEP( args[5], map, errorStream );
	m_LongDescription = IfcText::createObjectFromSTEP( args[6], map, errorStream );
	m_PredefinedType = IfcEventTypeEnum::createObjectFromSTEP( args[7], map, errorStream );
	m_EventTriggerType = IfcEventTriggerTypeEnum::createObjectFromSTEP( args[8], map, errorStream );
	m_UserDefinedEventTriggerType = IfcLabel::createObjectFromSTEP( args[9], map, errorStream );
	readEntityReference( args[10], m_EventOccurenceTime, map, errorStream );
}
void IFC4X3::IfcEvent::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcProcess::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "PredefinedType", m_PredefinedType ) );
	vec_attributes.emplace_back( std::make_pair( "EventTriggerType", m_EventTriggerType ) );
	vec_attributes.emplace_back( std::make_pair( "UserDefinedEventTriggerType", m_UserDefinedEventTriggerType ) );
	vec_attributes.emplace_back( std::make_pair( "EventOccurenceTime", m_EventOccurenceTime ) );
}
void IFC4X3::IfcEvent::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcProcess::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcEvent::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcProcess::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcEvent::unlinkFromInverseCounterparts()
{
	IfcProcess::unlinkFromInverseCounterparts();
}