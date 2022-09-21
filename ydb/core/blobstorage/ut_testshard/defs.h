#pragma once

#include <ydb/core/base/hive.h>
#include <ydb/core/blob_depot/blob_depot.h>
#include <ydb/core/blobstorage/crypto/default.h>
#include <ydb/core/blobstorage/dsproxy/mock/dsproxy_mock.h>
#include <ydb/core/blobstorage/dsproxy/mock/model.h>
#include <ydb/core/blobstorage/pdisk/mock/pdisk_mock.h>
#include <ydb/core/blobstorage/nodewarden/node_warden.h>
#include <ydb/core/mind/bscontroller/bsc.h>
#include <ydb/core/mind/bscontroller/types.h>
#include <ydb/core/mind/dynamic_nameserver.h>
#include <ydb/core/mind/labels_maintainer.h>
#include <ydb/core/mind/local.h>
#include <ydb/core/mind/tenant_pool.h>
#include <ydb/core/mind/tenant_node_enumeration.h>
#include <ydb/core/test_tablet/events.h>
#include <ydb/core/test_tablet/test_tablet.h>
#include <ydb/core/test_tablet/state_server_interface.h>
#include <ydb/core/sys_view/service/sysview_service.h>
#include <ydb/core/util/testactorsys.h>
#include <library/cpp/testing/unittest/registar.h>