import sys
if not 'argv' in sys.__dict__:
  sys.argv = ['na']

import roslib; roslib.load_manifest('dynamic_graph_actionlib')
import rospy
import actionlib

from dynamic_graph_actionlib.msg import *

class ExecuteMotionPlanServer(object):
  def __init__(self, robot, solver):
    rospy.init_node('execute_motion_plan_server', disable_signals=True)
    self.robot = robot
    self.solver = solver
    self.server = actionlib.SimpleActionServer(
      'execute_motion_plan', ExecuteMotionPlanAction, self.execute, False)
    self.server.start()

  def execute(self, goal):
    try:
      from dynamic_graph.sot.motion_planner.motion_plan import MotionPlan
      #FIXME: change API to suport reading file from string.
      motionPlan = MotionPlan(goal.plan, robot, solver, [])
      motionPlan.start()
      # FIXME: we should wait for termination here
      self.server.set_succeeded(actionResult)
    except:
      self.server.set_aborted()
