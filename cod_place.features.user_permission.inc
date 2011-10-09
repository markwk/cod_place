<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function cod_place_user_default_permissions() {
  $permissions = array();

  // Exported permission: create place content
  $permissions['create place content'] = array(
    'name' => 'create place content',
    'roles' => array(),
  );

  // Exported permission: delete any place content
  $permissions['delete any place content'] = array(
    'name' => 'delete any place content',
    'roles' => array(),
  );

  // Exported permission: delete own place content
  $permissions['delete own place content'] = array(
    'name' => 'delete own place content',
    'roles' => array(),
  );

  // Exported permission: edit any place content
  $permissions['edit any place content'] = array(
    'name' => 'edit any place content',
    'roles' => array(),
  );

  // Exported permission: edit own place content
  $permissions['edit own place content'] = array(
    'name' => 'edit own place content',
    'roles' => array(),
  );

  return $permissions;
}
