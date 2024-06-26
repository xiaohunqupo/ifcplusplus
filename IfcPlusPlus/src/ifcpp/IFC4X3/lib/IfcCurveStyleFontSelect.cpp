/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4X3/include/IfcCurveFontOrScaledCurveFontSelect.h"
#include "ifcpp/IFC4X3/include/IfcCurveStyleFontSelect.h"

// TYPE IfcCurveStyleFontSelect = SELECT	(IfcCurveStyleFont	,IfcPreDefinedCurveFont);
shared_ptr<IFC4X3::IfcCurveStyleFontSelect> IFC4X3::IfcCurveStyleFontSelect::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.empty() ){ return shared_ptr<IfcCurveStyleFontSelect>(); }
	if( arg.compare("$")==0 )
	{
		return shared_ptr<IfcCurveStyleFontSelect>();
	}
	if( arg.compare("*")==0 )
	{
		return shared_ptr<IfcCurveStyleFontSelect>();
	}
	shared_ptr<IfcCurveStyleFontSelect> result_object;
	readSelectType( arg, result_object, "", map, errorStream, entityIdNotFound );
	return result_object;
}
