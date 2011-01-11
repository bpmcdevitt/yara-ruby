#include "ruby.h"
#include <yara.h>

#include "Yara_native.h"
#include "Rules.h"

static VALUE module_Yara = Qnil;

void Init_yara_native() {
  yr_init();

  module_Yara = rb_define_module("Yara");

  init_rules(module_Yara);
}


