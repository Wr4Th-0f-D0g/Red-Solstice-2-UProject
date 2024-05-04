#include "FMODEventParameterTrack.h"

#include "Evaluation/MovieSceneEvalTemplate.h"

UFMODEventParameterTrack::UFMODEventParameterTrack() {
}

FMovieSceneEvalTemplatePtr UFMODEventParameterTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
	return {};
}


