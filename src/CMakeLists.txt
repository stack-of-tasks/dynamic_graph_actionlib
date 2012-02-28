include_directories(entities)

rosbuild_add_library(dynamic_graph_actionlib
  entities/discretized-trajectory.cc
  entities/error-trajectory.cc

  entities/feet-follower.cc
  entities/feet-follower-ros.cc
  entities/feet-follower-with-correction.cc

  entities/actionlib.cc
  )

rosbuild_add_compile_flags(dynamic_graph_actionlib
  ${JRL_MAL_CFLAGS} ${DYNAMIC_GRAPH_CFLAGS} ${SOT_CORE_CFLAGS}
  ${ROBOPTIM_CORE_CFLAGS})
rosbuild_add_link_flags(dynamic_graph_actionlib
  ${JRL_MAL_LDFLAGS} ${DYNAMIC_GRAPH_LDFLAGS} ${SOT_CORE_LDFLAGS}
  ${ROBOPTIM_CORE_LDFLAGS})
target_link_libraries(dynamic_graph_actionlib
  ${JRL_MAL_LIBRARIES} ${DYNAMIC_GRAPH_LIBRARIES} ${SOT_CORE_LIBRARIES}
  ${ROBOPTIM_CORE_LIBRARIES})
