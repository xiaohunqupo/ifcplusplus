/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

namespace IFC4X3
{
	// TYPE IfcStructuralSurfaceMemberTypeEnum = ENUMERATION OF	(BENDING_ELEMENT	,MEMBRANE_ELEMENT	,SHELL	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcStructuralSurfaceMemberTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcStructuralSurfaceMemberTypeEnumEnum
		{
			ENUM_BENDING_ELEMENT,
			ENUM_MEMBRANE_ELEMENT,
			ENUM_SHELL,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcStructuralSurfaceMemberTypeEnum() = default;
		IfcStructuralSurfaceMemberTypeEnum( IfcStructuralSurfaceMemberTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 316539858; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcStructuralSurfaceMemberTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcStructuralSurfaceMemberTypeEnumEnum m_enum;
	};
}
