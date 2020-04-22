
#include "../include/component.hxx"

std::unique_ptr<Component> Component::create(const std::string &name,
                                             Options &options,
                                             Solver *solver) {
  
  std::string type = options.isSet("type") ? options["type"] : name;

  return std::unique_ptr<Component>(
      ComponentFactory::getInstance().create(type, name, options, solver));
}