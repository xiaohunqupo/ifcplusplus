/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcCoordinateReferenceSystem.h"
#include "ifcpp/IFC4X3/include/IfcWellKnownText.h"
#include "ifcpp/IFC4X3/include/IfcWellKnownTextLiteral.h"

// ENTITY IfcWellKnownText 
IFC4X3::IfcWellKnownText::IfcWellKnownText( int tag ) { m_tag = tag; }
void IFC4X3::IfcWellKnownText::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCWELLKNOWNTEXT" << "(";
	if( m_WellKnownText ) { m_WellKnownText->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_CoordinateReferenceSystem ) { stream << "#" << m_CoordinateReferenceSystem->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcWellKnownText::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcWellKnownText::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_WellKnownText = IfcWellKnownTextLiteral::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){readEntityReference( args[1], m_CoordinateReferenceSystem, map, errorStream, entityIdNotFound );}
	if( num_args != 2 ){ errorStream << "Wrong parameter count for entity IfcWellKnownText, expecting 2, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcWellKnownText::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	vec_attributes.emplace_back( std::make_pair( "WellKnownText", m_WellKnownText ) );
	vec_attributes.emplace_back( std::make_pair( "CoordinateReferenceSystem", m_CoordinateReferenceSystem ) );
}
void IFC4X3::IfcWellKnownText::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
}
void IFC4X3::IfcWellKnownText::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	shared_ptr<IfcWellKnownText> ptr_self = dynamic_pointer_cast<IfcWellKnownText>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcWellKnownText::setInverseCounterparts: type mismatch" ); }
	if( m_CoordinateReferenceSystem )
	{
		m_CoordinateReferenceSystem->m_WellKnownText_inverse.emplace_back( ptr_self );
	}
}
void IFC4X3::IfcWellKnownText::unlinkFromInverseCounterparts()
{
	if( m_CoordinateReferenceSystem )
	{
		std::vector<weak_ptr<IfcWellKnownText> >& WellKnownText_inverse = m_CoordinateReferenceSystem->m_WellKnownText_inverse;
		for( auto it_WellKnownText_inverse = WellKnownText_inverse.begin(); it_WellKnownText_inverse != WellKnownText_inverse.end(); )
		{
			weak_ptr<IfcWellKnownText> self_candidate_weak = *it_WellKnownText_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_WellKnownText_inverse;
				continue;
			}
			shared_ptr<IfcWellKnownText> self_candidate( *it_WellKnownText_inverse );
			if( self_candidate.get() == this )
			{
				it_WellKnownText_inverse= WellKnownText_inverse.erase( it_WellKnownText_inverse );
			}
			else
			{
				++it_WellKnownText_inverse;
			}
		}
	}
}
