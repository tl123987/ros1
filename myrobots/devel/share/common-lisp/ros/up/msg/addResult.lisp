; Auto-generated. Do not edit!


(cl:in-package up-msg)


;//! \htmlinclude addResult.msg.html

(cl:defclass <addResult> (roslisp-msg-protocol:ros-message)
  ((result
    :reader result
    :initarg :result
    :type cl:integer
    :initform 0))
)

(cl:defclass addResult (<addResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <addResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'addResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name up-msg:<addResult> is deprecated: use up-msg:addResult instead.")))

(cl:ensure-generic-function 'result-val :lambda-list '(m))
(cl:defmethod result-val ((m <addResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader up-msg:result-val is deprecated.  Use up-msg:result instead.")
  (result m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <addResult>) ostream)
  "Serializes a message object of type '<addResult>"
  (cl:let* ((signed (cl:slot-value msg 'result)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <addResult>) istream)
  "Deserializes a message object of type '<addResult>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'result) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<addResult>)))
  "Returns string type for a message object of type '<addResult>"
  "up/addResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'addResult)))
  "Returns string type for a message object of type 'addResult"
  "up/addResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<addResult>)))
  "Returns md5sum for a message object of type '<addResult>"
  "034a8e20d6a306665e3a5b340fab3f09")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'addResult)))
  "Returns md5sum for a message object of type 'addResult"
  "034a8e20d6a306665e3a5b340fab3f09")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<addResult>)))
  "Returns full string definition for message of type '<addResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#最终结果~%int32 result~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'addResult)))
  "Returns full string definition for message of type 'addResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#最终结果~%int32 result~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <addResult>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <addResult>))
  "Converts a ROS message object to a list"
  (cl:list 'addResult
    (cl:cons ':result (result msg))
))
