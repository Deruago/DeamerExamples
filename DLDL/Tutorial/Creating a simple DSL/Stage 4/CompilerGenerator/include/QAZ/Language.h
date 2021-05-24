#ifndef QAZ_LANGUAGE_H
#define QAZ_LANGUAGE_H
#include "Deamer/Language/Generator/Definition/Language.h"
#include "QAZ/Identity.h"
#include "QAZ/Generation.h"
#include "QAZ/Grammar.h"
#include "QAZ/Lexicon.h"

namespace QAZ
{
	/*!	\class Language
	 *
	 *	\brief This contains the Language Definition of the language QAZ
	 *
	 *	\details The LD initializes all base LPD's with its own pointer (this).
	 *	This allows the LPD's to access other LPD's via the language object.
	 *
	 *	\note This is auto-generated via the DLDL definition.
	 */
	class Language : public ::deamer::language::generator::definition::Language<
						 ::QAZ::Language , ::QAZ::Identity
, ::QAZ::Generation
, ::QAZ::Grammar
, ::QAZ::Lexicon
>
						 , public ::QAZ::Identity
, public ::QAZ::Generation
, public ::QAZ::Grammar
, public ::QAZ::Lexicon

	{
	public:
		Language() : ::deamer::language::generator::definition::Language<
						 ::QAZ::Language , ::QAZ::Identity
, ::QAZ::Generation
, ::QAZ::Grammar
, ::QAZ::Lexicon
>()
		, ::QAZ::Identity::Identity(this)
, ::QAZ::Generation::Generation(this)
, ::QAZ::Grammar::Grammar(this)
, ::QAZ::Lexicon::Lexicon(this)

		{
		}
		~Language() override = default;
	};
}
#endif // QAZ_LANGUAGE_H
