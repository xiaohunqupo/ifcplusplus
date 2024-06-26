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
	// TYPE IfcDoorPanelPositionEnum = ENUMERATION OF	(LEFT	,MIDDLE	,RIGHT	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcDoorPanelPositionEnum : virtual public BuildingObject
	{
	public:
		enum IfcDoorPanelPositionEnumEnum
		{
			ENUM_LEFT,
			ENUM_MIDDLE,
			ENUM_RIGHT,
			ENUM_NOTDEFINED
		};

		IfcDoorPanelPositionEnum() = default;
		IfcDoorPanelPositionEnum( IfcDoorPanelPositionEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 2872136011; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcDoorPanelPositionEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcDoorPanelPositionEnumEnum m_enum;
	};
}
