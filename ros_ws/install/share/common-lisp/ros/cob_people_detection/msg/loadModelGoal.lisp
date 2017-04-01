; Auto-generated. Do not edit!


(cl:in-package cob_people_detection-msg)


;//! \htmlinclude loadModelGoal.msg.html

(cl:defclass <loadModelGoal> (roslisp-msg-protocol:ros-message)
  ((labels
    :reader labels
    :initarg :labels
    :type (cl:vector cl:string)
   :initform (cl:make-array 0 :element-type 'cl:string :initial-element "")))
)

(cl:defclass loadModelGoal (<loadModelGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <loadModelGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'loadModelGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name cob_people_detection-msg:<loadModelGoal> is deprecated: use cob_people_detection-msg:loadModelGoal instead.")))

(cl:ensure-generic-function 'labels-val :lambda-list '(m))
(cl:defmethod labels-val ((m <loadModelGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cob_people_detection-msg:labels-val is deprecated.  Use cob_people_detection-msg:labels instead.")
  (labels m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <loadModelGoal>) ostream)
  "Serializes a message object of type '<loadModelGoal>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'labels))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((__ros_str_len (cl:length ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) ele))
   (cl:slot-value msg 'labels))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <loadModelGoal>) istream)
  "Deserializes a message object of type '<loadModelGoal>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'labels) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'labels)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:aref vals i) __ros_str_idx) (cl:code-char (cl:read-byte istream))))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<loadModelGoal>)))
  "Returns string type for a message object of type '<loadModelGoal>"
  "cob_people_detection/loadModelGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'loadModelGoal)))
  "Returns string type for a message object of type 'loadModelGoal"
  "cob_people_detection/loadModelGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<loadModelGoal>)))
  "Returns md5sum for a message object of type '<loadModelGoal>"
  "17b562487ca772bdfa2c078ef00d870f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'loadModelGoal)))
  "Returns md5sum for a message object of type 'loadModelGoal"
  "17b562487ca772bdfa2c078ef00d870f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<loadModelGoal>)))
  "Returns full string definition for message of type '<loadModelGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Loads a recognition model for the face recognizer from disc or database~%#~%# goal message~%string[] labels		# a list of labels of persons that shall be recognized~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'loadModelGoal)))
  "Returns full string definition for message of type 'loadModelGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Loads a recognition model for the face recognizer from disc or database~%#~%# goal message~%string[] labels		# a list of labels of persons that shall be recognized~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <loadModelGoal>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'labels) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4 (cl:length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <loadModelGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'loadModelGoal
    (cl:cons ':labels (labels msg))
))
