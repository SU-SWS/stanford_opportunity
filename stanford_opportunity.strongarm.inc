<?php
/**
 * @file
 * stanford_opportunity.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function stanford_opportunity_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__stanford_opportunity';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '23',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '21',
        ),
        'redirect' => array(
          'weight' => '22',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__stanford_opportunity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_stanford_opportunity';
  $strongarm->value = array();
  $export['menu_options_stanford_opportunity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_stanford_opportunity';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_stanford_opportunity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_stanford_opportunity';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_stanford_opportunity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_stanford_opportunity';
  $strongarm->value = '1';
  $export['node_preview_stanford_opportunity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_stanford_opportunity';
  $strongarm->value = 0;
  $export['node_submitted_stanford_opportunity'] = $strongarm;

  return $export;
}
