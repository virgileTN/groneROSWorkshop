;; Auto-generated. Do not edit!


(when (boundp 'my_pkg::reach_positionResult)
  (if (not (find-package "MY_PKG"))
    (make-package "MY_PKG"))
  (shadow 'reach_positionResult (find-package "MY_PKG")))
(unless (find-package "MY_PKG::REACH_POSITIONRESULT")
  (make-package "MY_PKG::REACH_POSITIONRESULT"))

(in-package "ROS")
;;//! \htmlinclude reach_positionResult.msg.html


(defclass my_pkg::reach_positionResult
  :super ros::object
  :slots (_time ))

(defmethod my_pkg::reach_positionResult
  (:init
   (&key
    ((:time __time) 0)
    )
   (send-super :init)
   (setq _time (round __time))
   self)
  (:time
   (&optional __time)
   (if __time (setq _time __time)) _time)
  (:serialization-length
   ()
   (+
    ;; int32 _time
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _time
       (write-long _time s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _time
     (setq _time (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get my_pkg::reach_positionResult :md5sum-) "86f5c1180cd9d94f9d1de0b211fa9fd2")
(setf (get my_pkg::reach_positionResult :datatype-) "my_pkg/reach_positionResult")
(setf (get my_pkg::reach_positionResult :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#result definition
int32 time

")



(provide :my_pkg/reach_positionResult "86f5c1180cd9d94f9d1de0b211fa9fd2")

