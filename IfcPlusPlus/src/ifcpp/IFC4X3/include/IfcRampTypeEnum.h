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
	// TYPE IfcRampTypeEnum = ENUMERATION OF	(HALF_TURN_RAMP	,QUARTER_TURN_RAMP	,SPIRAL_RAMP	,STRAIGHT_RUN_RAMP	,TWO_QUARTER_TURN_RAMP	,TWO_STRAIGHT_RUN_RAMP	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcRampTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcRampTypeEnumEnum
		{
			ENUM_HALF_TURN_RAMP,
			ENUM_QUARTER_TURN_RAMP,
			ENUM_SPIRAL_RAMP,
			ENUM_STRAIGHT_RUN_RAMP,
			ENUM_TWO_QUARTER_TURN_RAMP,
			ENUM_TWO_STRAIGHT_RUN_RAMP,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcRampTypeEnum() = default;
		IfcRampTypeEnum( IfcRampTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 3995464546; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcRampTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcRampTypeEnumEnum m_enum;
	};
}
