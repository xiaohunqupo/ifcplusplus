/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcParameterValue.h"
#include "ifcpp/IFC4X3/include/IfcTextureVertexList.h"

// ENTITY IfcTextureVertexList 
IFC4X3::IfcTextureVertexList::IfcTextureVertexList( int tag ) { m_tag = tag; }
void IFC4X3::IfcTextureVertexList::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCTEXTUREVERTEXLIST" << "(";
	writeTypeOfRealList2D( stream, m_TexCoordsList, false );
	stream << ");";
}
void IFC4X3::IfcTextureVertexList::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcTextureVertexList::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcTextureVertexList, expecting 1, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	readTypeOfRealList2D( args[0], m_TexCoordsList );
}
void IFC4X3::IfcTextureVertexList::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcPresentationItem::getAttributes( vec_attributes );
	shared_ptr<AttributeObjectVector> TexCoordsList_vector( new AttributeObjectVector() );
	vec_attributes.emplace_back( std::make_pair( "TexCoordsList", TexCoordsList_vector ) );
	for( size_t ii=0; ii<m_TexCoordsList.size(); ++ii )
	{
		const std::vector<shared_ptr<IfcParameterValue> >& vec_ii = m_TexCoordsList[ii];
		shared_ptr<AttributeObjectVector> inner_vector( new AttributeObjectVector() );
		TexCoordsList_vector->m_vec.push_back( inner_vector );
		std::copy(vec_ii.begin(), vec_ii.end(), std::back_inserter(inner_vector->m_vec));
	}
}
void IFC4X3::IfcTextureVertexList::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcPresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcTextureVertexList::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcTextureVertexList::unlinkFromInverseCounterparts()
{
	IfcPresentationItem::unlinkFromInverseCounterparts();
}