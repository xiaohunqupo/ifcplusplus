/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcIdentifier.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcPropertySetDefinition.h"
#include "ifcpp/IFC4X3/include/IfcRelAggregates.h"
#include "ifcpp/IFC4X3/include/IfcRelAssigns.h"
#include "ifcpp/IFC4X3/include/IfcRelAssignsToProduct.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociates.h"
#include "ifcpp/IFC4X3/include/IfcRelDeclares.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4X3/include/IfcRelNests.h"
#include "ifcpp/IFC4X3/include/IfcRepresentationMap.h"
#include "ifcpp/IFC4X3/include/IfcText.h"
#include "ifcpp/IFC4X3/include/IfcTrackElementType.h"
#include "ifcpp/IFC4X3/include/IfcTrackElementTypeEnum.h"

// ENTITY IfcTrackElementType 
IFC4X3::IfcTrackElementType::IfcTrackElementType( int tag ) { m_tag = tag; }
void IFC4X3::IfcTrackElementType::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCTRACKELEMENTTYPE" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_ApplicableOccurrence ) { m_ApplicableOccurrence->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_HasPropertySets );
	stream << ",";
	writeEntityList( stream, m_RepresentationMaps );
	stream << ",";
	if( m_Tag ) { m_Tag->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_ElementType ) { m_ElementType->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_PredefinedType ) { m_PredefinedType->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcTrackElementType::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcTrackElementType::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){readEntityReference( args[1], m_OwnerHistory, map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream, entityIdNotFound );}
	if( num_args > 3 ){m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream, entityIdNotFound );}
	if( num_args > 4 ){m_ApplicableOccurrence = IfcIdentifier::createObjectFromSTEP( args[4], map, errorStream, entityIdNotFound );}
	if( num_args > 5 ){readEntityReferenceList( args[5], m_HasPropertySets, map, errorStream, entityIdNotFound );}
	if( num_args > 6 ){readEntityReferenceList( args[6], m_RepresentationMaps, map, errorStream, entityIdNotFound );}
	if( num_args > 7 ){m_Tag = IfcLabel::createObjectFromSTEP( args[7], map, errorStream, entityIdNotFound );}
	if( num_args > 8 ){m_ElementType = IfcLabel::createObjectFromSTEP( args[8], map, errorStream, entityIdNotFound );}
	if( num_args > 9 ){m_PredefinedType = IfcTrackElementTypeEnum::createObjectFromSTEP( args[9], map, errorStream, entityIdNotFound );}
	if( num_args != 10 ){ errorStream << "Wrong parameter count for entity IfcTrackElementType, expecting 10, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcTrackElementType::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcBuiltElementType::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "PredefinedType", m_PredefinedType ) );
}
void IFC4X3::IfcTrackElementType::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcBuiltElementType::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcTrackElementType::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcBuiltElementType::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcTrackElementType::unlinkFromInverseCounterparts()
{
	IfcBuiltElementType::unlinkFromInverseCounterparts();
}
