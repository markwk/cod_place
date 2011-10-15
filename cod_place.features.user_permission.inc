<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function cod_place_user_default_permissions() {
  $permissions = array();

  // Exported permission: create place content
  $permissions['create place content'] = array(
    'name' => 'create place content',
    'roles' => array(
      '0' => 'session organizer',
      '1' => 'site administrator',
      '2' => 'sponsor organizer',
    ),
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
    'roles' => array(
      '0' => 'session organizer',
      '1' => 'site administrator',
      '2' => 'sponsor organizer',
    ),
  );

  // Exported permission: edit field_address
  $permissions['edit field_address'] = array(
    'name' => 'edit field_address',
    'roles' => array(
      '0' => 'session organizer',
      '1' => 'site administrator',
      '2' => 'sponsor organizer',
    ),
  );

  // Exported permission: edit field_gmap_link
  $permissions['edit field_gmap_link'] = array(
    'name' => 'edit field_gmap_link',
    'roles' => array(
      '0' => 'session organizer',
      '1' => 'site administrator',
      '2' => 'sponsor organizer',
    ),
  );

  // Exported permission: edit field_place_phone
  $permissions['edit field_place_phone'] = array(
    'name' => 'edit field_place_phone',
    'roles' => array(
      '0' => 'session organizer',
      '1' => 'site administrator',
      '2' => 'sponsor organizer',
    ),
  );

  // Exported permission: edit own place content
  $permissions['edit own place content'] = array(
    'name' => 'edit own place content',
    'roles' => array(),
  );

  // Exported permission: view field_address
  $permissions['view field_address'] = array(
    'name' => 'view field_address',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_gmap_link
  $permissions['view field_gmap_link'] = array(
    'name' => 'view field_gmap_link',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_place_phone
  $permissions['view field_place_phone'] = array(
    'name' => 'view field_place_phone',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
