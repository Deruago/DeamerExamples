#ifndef QAZ_IDENTITY_H
#define QAZ_IDENTITY_H
#include "Deamer/Language/Generator/Definition/Property/User/Special/Identity.h"
namespace QAZ
{
	class Language;
	/*!	\class Identity
	 *
	 *	\brief This contains the identity LPD of the language QAZ
	 *
	 *	\note This is auto-generated via the DLDL definition.
	 */
	class Identity : public ::deamer::language::generator::definition::property::user::Identity<
								::QAZ::Language>
	{
	public:
		::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Name> name;
	public:
		Identity(QAZ::Language* language)
			:	::deamer::language::generator::definition::property::user::Identity<
					::QAZ::Language>(language)
		{
		}
		void GenerateObjects() override
		{
			name.Set(::deamer::language::type::definition::object::main::Name("QAZ"));
			
			AddObject(name);
			// Place higher level operations here.
			// ReplaceObject(..., ...)
			// DeleteObject(..., ...)
			
		}
	};
}
#endif // QAZ_IDENTITY_H
