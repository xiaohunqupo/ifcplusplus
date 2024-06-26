/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4X3/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcHatchLineDistanceSelect.h"

// TYPE IfcHatchLineDistanceSelect = SELECT	(IfcPositiveLengthMeasure	,IfcVector);
shared_ptr<IFC4X3::IfcHatchLineDistanceSelect> IFC4X3::IfcHatchLineDistanceSelect::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.empty() ){ return shared_ptr<IfcHatchLineDistanceSelect>(); }
	if( arg.compare("$")==0 )
	{
		return shared_ptr<IfcHatchLineDistanceSelect>();
	}
	if( arg.compare("*")==0 )
	{
		return shared_ptr<IfcHatchLineDistanceSelect>();
	}
	shared_ptr<IfcHatchLineDistanceSelect> result_object;
	readSelectType( arg, result_object, "", map, errorStream, entityIdNotFound );
	return result_object;
}
