;; Auto-generated. Do not edit!


(when (boundp 'my_pkg::reach_positionFeedback)
  (if (not (find-package "MY_PKG"))
    (make-package "MY_PKG"))
  (shadow 'reach_positionFeedback (find-package "MY_PKG")))
(unless (find-package "MY_PKG::REACH_POSITIONFEEDBACK")
  (make-package "MY_PKG::REACH_POSITIONFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude reach_positionFeedback.msg.html


(defclass my_pkg::reach_positionFeedback
  :super ros::object
  :slots (_distance ))

(defmethod my_pkg::reach_positionFeedback
  (:init
   (&key
    ((:distance __distance) 0)
    )
   (send-super :init)
   (setq _distance (round __distance))
   self)
  (:distance
   (&optional __distance)
   (if __distance (setq _distance __distance)) _distance)
  (:serialization-length
   ()
   (+
    ;; int32 _distance
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _distance
       (write-long _distance s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _distance
     (setq _distance (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get my_pkg::reach_positionFeedback :md5sum-) "680f8923bb6b23ec7057fffc11ea7b34")
(setf (get my_pkg::reach_positionFeedback :datatype-) "my_pkg/reach_positionFeedback")
(setf (get my_pkg::reach_positionFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#feedback
int32 distance


")



(provide :my_pkg/reach_positionFeedback "680f8923bb6b23ec7057fffc11ea7b34")

