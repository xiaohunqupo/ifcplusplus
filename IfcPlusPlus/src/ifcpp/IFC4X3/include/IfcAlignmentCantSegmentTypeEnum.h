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
	// TYPE IfcAlignmentCantSegmentTypeEnum = ENUMERATION OF	(BLOSSCURVE	,CONSTANTCANT	,COSINECURVE	,HELMERTCURVE	,LINEARTRANSITION	,SINECURVE	,VIENNESEBEND);
	class IFCQUERY_EXPORT IfcAlignmentCantSegmentTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcAlignmentCantSegmentTypeEnumEnum
		{
			ENUM_BLOSSCURVE,
			ENUM_CONSTANTCANT,
			ENUM_COSINECURVE,
			ENUM_HELMERTCURVE,
			ENUM_LINEARTRANSITION,
			ENUM_SINECURVE,
			ENUM_VIENNESEBEND
		};

		IfcAlignmentCantSegmentTypeEnum() = default;
		IfcAlignmentCantSegmentTypeEnum( IfcAlignmentCantSegmentTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 2969962241; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcAlignmentCantSegmentTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcAlignmentCantSegmentTypeEnumEnum m_enum;
	};
}
