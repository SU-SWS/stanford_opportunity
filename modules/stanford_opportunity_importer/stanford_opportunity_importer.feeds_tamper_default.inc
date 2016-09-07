<?php
/**
 * @file
 * stanford_opportunity_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function stanford_opportunity_importer_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stanford_opportunity_helper-xpathparser_12-explode';
  $feeds_tamper->importer = 'stanford_opportunity_helper';
  $feeds_tamper->source = 'xpathparser:12';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '<BULLET>',
    'limit' => '',
    'real_separator' => '<BULLET>',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Bullet Point Explode';
  $export['stanford_opportunity_helper-xpathparser_12-explode'] = $feeds_tamper;

  return $export;
}
