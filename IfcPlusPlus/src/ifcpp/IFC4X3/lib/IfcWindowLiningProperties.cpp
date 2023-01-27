/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcNonNegativeLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcNormalisedRatioMeasure.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociates.h"
#include "ifcpp/IFC4X3/include/IfcRelDeclares.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByTemplate.h"
#include "ifcpp/IFC4X3/include/IfcShapeAspect.h"
#include "ifcpp/IFC4X3/include/IfcText.h"
#include "ifcpp/IFC4X3/include/IfcTypeObject.h"
#include "ifcpp/IFC4X3/include/IfcWindowLiningProperties.h"

// ENTITY IfcWindowLiningProperties 
IFC4X3::IfcWindowLiningProperties::IfcWindowLiningProperties( int tag ) { m_tag = tag; }
void IFC4X3::IfcWindowLiningProperties::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCWINDOWLININGPROPERTIES" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_LiningDepth ) { m_LiningDepth->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_LiningThickness ) { m_LiningThickness->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_TransomThickness ) { m_TransomThickness->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_MullionThickness ) { m_MullionThickness->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_FirstTransomOffset ) { m_FirstTransomOffset->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_SecondTransomOffset ) { m_SecondTransomOffset->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_FirstMullionOffset ) { m_FirstMullionOffset->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_SecondMullionOffset ) { m_SecondMullionOffset->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ShapeAspectStyle ) { stream << "#" << m_ShapeAspectStyle->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_LiningOffset ) { m_LiningOffset->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_LiningToPanelOffsetX ) { m_LiningToPanelOffsetX->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_LiningToPanelOffsetY ) { m_LiningToPanelOffsetY->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcWindowLiningProperties::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcWindowLiningProperties::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 16 ){ std::stringstream err; err << "Wrong parameter count for entity IfcWindowLiningProperties, expecting 16, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream );
	readEntityReference( args[1], m_OwnerHistory, map, errorStream );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream );
	m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream );
	m_LiningDepth = IfcPositiveLengthMeasure::createObjectFromSTEP( args[4], map, errorStream );
	m_LiningThickness = IfcNonNegativeLengthMeasure::createObjectFromSTEP( args[5], map, errorStream );
	m_TransomThickness = IfcNonNegativeLengthMeasure::createObjectFromSTEP( args[6], map, errorStream );
	m_MullionThickness = IfcNonNegativeLengthMeasure::createObjectFromSTEP( args[7], map, errorStream );
	m_FirstTransomOffset = IfcNormalisedRatioMeasure::createObjectFromSTEP( args[8], map, errorStream );
	m_SecondTransomOffset = IfcNormalisedRatioMeasure::createObjectFromSTEP( args[9], map, errorStream );
	m_FirstMullionOffset = IfcNormalisedRatioMeasure::createObjectFromSTEP( args[10], map, errorStream );
	m_SecondMullionOffset = IfcNormalisedRatioMeasure::createObjectFromSTEP( args[11], map, errorStream );
	readEntityReference( args[12], m_ShapeAspectStyle, map, errorStream );
	m_LiningOffset = IfcLengthMeasure::createObjectFromSTEP( args[13], map, errorStream );
	m_LiningToPanelOffsetX = IfcLengthMeasure::createObjectFromSTEP( args[14], map, errorStream );
	m_LiningToPanelOffsetY = IfcLengthMeasure::createObjectFromSTEP( args[15], map, errorStream );
}
void IFC4X3::IfcWindowLiningProperties::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcPreDefinedPropertySet::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "LiningDepth", m_LiningDepth ) );
	vec_attributes.emplace_back( std::make_pair( "LiningThickness", m_LiningThickness ) );
	vec_attributes.emplace_back( std::make_pair( "TransomThickness", m_TransomThickness ) );
	vec_attributes.emplace_back( std::make_pair( "MullionThickness", m_MullionThickness ) );
	vec_attributes.emplace_back( std::make_pair( "FirstTransomOffset", m_FirstTransomOffset ) );
	vec_attributes.emplace_back( std::make_pair( "SecondTransomOffset", m_SecondTransomOffset ) );
	vec_attributes.emplace_back( std::make_pair( "FirstMullionOffset", m_FirstMullionOffset ) );
	vec_attributes.emplace_back( std::make_pair( "SecondMullionOffset", m_SecondMullionOffset ) );
	vec_attributes.emplace_back( std::make_pair( "ShapeAspectStyle", m_ShapeAspectStyle ) );
	vec_attributes.emplace_back( std::make_pair( "LiningOffset", m_LiningOffset ) );
	vec_attributes.emplace_back( std::make_pair( "LiningToPanelOffsetX", m_LiningToPanelOffsetX ) );
	vec_attributes.emplace_back( std::make_pair( "LiningToPanelOffsetY", m_LiningToPanelOffsetY ) );
}
void IFC4X3::IfcWindowLiningProperties::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcPreDefinedPropertySet::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcWindowLiningProperties::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPreDefinedPropertySet::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcWindowLiningProperties::unlinkFromInverseCounterparts()
{
	IfcPreDefinedPropertySet::unlinkFromInverseCounterparts();
}