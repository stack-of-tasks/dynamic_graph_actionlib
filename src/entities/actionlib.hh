#ifndef SOT_MOTION_PLANNER_ACTIONLIB_HH
# define SOT_MOTION_PLANNER_ACTIONLIB_HH
# include <boost/tuple/tuple.hpp>

# include <dynamic-graph/command.h>
# include <dynamic-graph/entity.h>
# include <dynamic-graph/factory.h>
# include <dynamic-graph/null-ptr.hh>
# include <dynamic-graph/signal-ptr.h>
# include <dynamic-graph/signal-time-dependent.h>

# include <sot/core/feature-posture.h>
# include <sot/core/matrix-homogeneous.hh>
# include <sot/core/sot.hh>
# include <sot/core/task-abstract.hh>

namespace ml = ::maal::boost;
namespace dg = ::dynamicgraph;

class Actionlib : public dg::Entity
{
  DYNAMIC_GRAPH_ENTITY_DECL ();
public:
  /// \name Constructor and destructor.
  /// \{
  explicit Actionlib (const std::string& name);
  virtual ~Actionlib ();
  /// \}

protected:
};

#endif //! SOT_MOTION_PLANNER_ACTIONLIB_HH
