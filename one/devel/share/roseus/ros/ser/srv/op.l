;; Auto-generated. Do not edit!


(when (boundp 'ser::op)
  (if (not (find-package "SER"))
    (make-package "SER"))
  (shadow 'op (find-package "SER")))
(unless (find-package "SER::OP")
  (make-package "SER::OP"))
(unless (find-package "SER::OPREQUEST")
  (make-package "SER::OPREQUEST"))
(unless (find-package "SER::OPRESPONSE")
  (make-package "SER::OPRESPONSE"))

(in-package "ROS")





(defclass ser::opRequest
  :super ros::object
  :slots (_num1 _num2 ))

(defmethod ser::opRequest
  (:init
   (&key
    ((:num1 __num1) 0)
    ((:num2 __num2) 0)
    )
   (send-super :init)
   (setq _num1 (round __num1))
   (setq _num2 (round __num2))
   self)
  (:num1
   (&optional __num1)
   (if __num1 (setq _num1 __num1)) _num1)
  (:num2
   (&optional __num2)
   (if __num2 (setq _num2 __num2)) _num2)
  (:serialization-length
   ()
   (+
    ;; int32 _num1
    4
    ;; int32 _num2
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _num1
       (write-long _num1 s)
     ;; int32 _num2
       (write-long _num2 s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _num1
     (setq _num1 (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _num2
     (setq _num2 (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass ser::opResponse
  :super ros::object
  :slots (_sum ))

(defmethod ser::opResponse
  (:init
   (&key
    ((:sum __sum) 0)
    )
   (send-super :init)
   (setq _sum (round __sum))
   self)
  (:sum
   (&optional __sum)
   (if __sum (setq _sum __sum)) _sum)
  (:serialization-length
   ()
   (+
    ;; int32 _sum
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _sum
       (write-long _sum s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _sum
     (setq _sum (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass ser::op
  :super ros::object
  :slots ())

(setf (get ser::op :md5sum-) "4781436a0c2affec8025955a6041e481")
(setf (get ser::op :datatype-) "ser/op")
(setf (get ser::op :request) ser::opRequest)
(setf (get ser::op :response) ser::opResponse)

(defmethod ser::opRequest
  (:response () (instance ser::opResponse :init)))

(setf (get ser::opRequest :md5sum-) "4781436a0c2affec8025955a6041e481")
(setf (get ser::opRequest :datatype-) "ser/opRequest")
(setf (get ser::opRequest :definition-)
      "# 客户端请求时发送的两个数字
int32 num1
int32 num2
---
# 服务器响应发送的数据
int32 sum

")

(setf (get ser::opResponse :md5sum-) "4781436a0c2affec8025955a6041e481")
(setf (get ser::opResponse :datatype-) "ser/opResponse")
(setf (get ser::opResponse :definition-)
      "# 客户端请求时发送的两个数字
int32 num1
int32 num2
---
# 服务器响应发送的数据
int32 sum

")



(provide :ser/op "4781436a0c2affec8025955a6041e481")


