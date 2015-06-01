#include "AnnotationGroup.h"

AnnotationGroup::AnnotationGroup() :
  _name(""),
  _attributes(),
  _parent(NULL),
  _color("#64FE2E")
{
}

void AnnotationGroup::setName(const std::string& name)
{
	_name = name;
}

std::string AnnotationGroup::getColor() const {
  return _color;
}

void AnnotationGroup::setColor(const std::string& color) {
  _color = color;
}

std::string AnnotationGroup::getName() const
{
	return _name;
};

void AnnotationGroup::setGroup(AnnotationGroup* parent) {
  _parent = parent;
}

AnnotationGroup* AnnotationGroup::getGroup() const {
  return _parent;
}

std::map<std::string, std::string> AnnotationGroup::getAttributes() const {
  return _attributes;
}

void AnnotationGroup::setAttributes(std::map<std::string, std::string> attributes) {
  _attributes = attributes;
}