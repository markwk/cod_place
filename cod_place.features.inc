<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function cod_place_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function cod_place_node_info() {
  $items = array(
    'place' => array(
      'name' => t('Place'),
      'module' => 'features',
      'description' => t('It\'s somewhere'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
