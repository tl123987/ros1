;; Auto-generated. Do not edit!


(when (boundp 'up::addResult)
  (if (not (find-package "UP"))
    (make-package "UP"))
  (shadow 'addResult (find-package "UP")))
(unless (find-package "UP::ADDRESULT")
  (make-package "UP::ADDRESULT"))

(in-package "ROS")
;;//! \htmlinclude addResult.msg.html


(defclass up::addResult
  :super ros::object
  :slots (_result ))

(defmethod up::addResult
  (:init
   (&key
    ((:result __result) 0)
    )
   (send-super :init)
   (setq _result (round __result))
   self)
  (:result
   (&optional __result)
   (if __result (setq _result __result)) _result)
  (:serialization-length
   ()
   (+
    ;; int32 _result
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _result
       (write-long _result s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _result
     (setq _result (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get up::addResult :md5sum-) "034a8e20d6a306665e3a5b340fab3f09")
(setf (get up::addResult :datatype-) "up/addResult")
(setf (get up::addResult :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#最终结果
int32 result

")



(provide :up/addResult "034a8e20d6a306665e3a5b340fab3f09")

