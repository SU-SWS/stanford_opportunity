<?php
/**
 * @file
 * stanford_opportunity_importer.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function stanford_opportunity_importer_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear stanford_opportunity_helper feeds'.
  $permissions['clear stanford_opportunity_helper feeds'] = array(
    'name' => 'clear stanford_opportunity_helper feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import stanford_opportunity_helper feeds'.
  $permissions['import stanford_opportunity_helper feeds'] = array(
    'name' => 'import stanford_opportunity_helper feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper stanford_opportunity_helper'.
  $permissions['tamper stanford_opportunity_helper'] = array(
    'name' => 'tamper stanford_opportunity_helper',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock stanford_opportunity_helper feeds'.
  $permissions['unlock stanford_opportunity_helper feeds'] = array(
    'name' => 'unlock stanford_opportunity_helper feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
