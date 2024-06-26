;; Auto-generated. Do not edit!


(when (boundp 'up::addFeedback)
  (if (not (find-package "UP"))
    (make-package "UP"))
  (shadow 'addFeedback (find-package "UP")))
(unless (find-package "UP::ADDFEEDBACK")
  (make-package "UP::ADDFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude addFeedback.msg.html


(defclass up::addFeedback
  :super ros::object
  :slots (_progress_bar ))

(defmethod up::addFeedback
  (:init
   (&key
    ((:progress_bar __progress_bar) 0.0)
    )
   (send-super :init)
   (setq _progress_bar (float __progress_bar))
   self)
  (:progress_bar
   (&optional __progress_bar)
   (if __progress_bar (setq _progress_bar __progress_bar)) _progress_bar)
  (:serialization-length
   ()
   (+
    ;; float64 _progress_bar
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _progress_bar
       (sys::poke _progress_bar (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _progress_bar
     (setq _progress_bar (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get up::addFeedback :md5sum-) "ac7532a8a8f0d2be4f5284d94fee2d59")
(setf (get up::addFeedback :datatype-) "up/addFeedback")
(setf (get up::addFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#连续反馈
float64 progress_bar


")



(provide :up/addFeedback "ac7532a8a8f0d2be4f5284d94fee2d59")


