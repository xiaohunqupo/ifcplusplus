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
	// TYPE IfcSignalTypeEnum = ENUMERATION OF	(AUDIO	,MIXED	,VISUAL	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcSignalTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcSignalTypeEnumEnum
		{
			ENUM_AUDIO,
			ENUM_MIXED,
			ENUM_VISUAL,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcSignalTypeEnum() = default;
		IfcSignalTypeEnum( IfcSignalTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 1506544127; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcSignalTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcSignalTypeEnumEnum m_enum;
	};
}
