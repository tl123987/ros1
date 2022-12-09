
(cl:in-package :asdf)

(defsystem "ser-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "op" :depends-on ("_package_op"))
    (:file "_package_op" :depends-on ("_package"))
  ))