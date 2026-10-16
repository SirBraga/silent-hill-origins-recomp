#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1430
// Address: 0x1a1430 - 0x1a15a8
void sub_001A1430_0x1a1430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1430_0x1a1430");
#endif

    switch (ctx->pc) {
        case 0x1a145cu: goto label_1a145c;
        case 0x1a1468u: goto label_1a1468;
        case 0x1a147cu: goto label_1a147c;
        case 0x1a148cu: goto label_1a148c;
        case 0x1a149cu: goto label_1a149c;
        case 0x1a14acu: goto label_1a14ac;
        case 0x1a1540u: goto label_1a1540;
        case 0x1a1588u: goto label_1a1588;
        default: break;
    }

    ctx->pc = 0x1a1430u;

    // 0x1a1430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a1430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a1434: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a1434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a1438: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a143c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a143cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a1440: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a1440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a1444: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x1a1444u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a1448: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a1448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a144c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a144cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1454: 0xc06abaa  jal         func_1AAEA8
    ctx->pc = 0x1A1454u;
    SET_GPR_U32(ctx, 31, 0x1A145Cu);
    ctx->pc = 0x1A1458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1454u;
    // 0x1a1458: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAEA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AAEA8u, 0x1A1454u, 0x1A145Cu)) {
        return;
    }
    ctx->pc = 0x1A145Cu;
label_1a145c:
    // 0x1a145c: 0x26131230  addiu       $s3, $s0, 0x1230
    ctx->pc = 0x1a145cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4656));
    // 0x1a1460: 0xc06b32a  jal         func_1ACCA8
    ctx->pc = 0x1A1460u;
    SET_GPR_U32(ctx, 31, 0x1A1468u);
    ctx->pc = 0x1A1464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1460u;
    // 0x1a1464: 0x26041220  addiu       $a0, $s0, 0x1220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACCA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ACCA8u, 0x1A1460u, 0x1A1468u)) {
        return;
    }
    ctx->pc = 0x1A1468u;
label_1a1468:
    // 0x1a1468: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1a1468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1a146c: 0x26041298  addiu       $a0, $s0, 0x1298
    ctx->pc = 0x1a146cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4760));
    // 0x1a1470: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1474: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1A1474u;
    SET_GPR_U32(ctx, 31, 0x1A147Cu);
    ctx->pc = 0x1A1478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1474u;
    // 0x1a1478: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1A1474u, 0x1A147Cu)) {
        return;
    }
    ctx->pc = 0x1A147Cu;
label_1a147c:
    // 0x1a147c: 0x260412a4  addiu       $a0, $s0, 0x12A4
    ctx->pc = 0x1a147cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4772));
    // 0x1a1480: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1484: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1A1484u;
    SET_GPR_U32(ctx, 31, 0x1A148Cu);
    ctx->pc = 0x1A1488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1484u;
    // 0x1a1488: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1A1484u, 0x1A148Cu)) {
        return;
    }
    ctx->pc = 0x1A148Cu;
label_1a148c:
    // 0x1a148c: 0x260412b0  addiu       $a0, $s0, 0x12B0
    ctx->pc = 0x1a148cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4784));
    // 0x1a1490: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1494: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1A1494u;
    SET_GPR_U32(ctx, 31, 0x1A149Cu);
    ctx->pc = 0x1A1498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1494u;
    // 0x1a1498: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1A1494u, 0x1A149Cu)) {
        return;
    }
    ctx->pc = 0x1A149Cu;
label_1a149c:
    // 0x1a149c: 0x260412cc  addiu       $a0, $s0, 0x12CC
    ctx->pc = 0x1a149cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4812));
    // 0x1a14a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a14a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a14a4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1A14A4u;
    SET_GPR_U32(ctx, 31, 0x1A14ACu);
    ctx->pc = 0x1A14A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A14A4u;
    // 0x1a14a8: 0x24060054  addiu       $a2, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1A14A4u, 0x1A14ACu)) {
        return;
    }
    ctx->pc = 0x1A14ACu;
label_1a14ac:
    // 0x1a14ac: 0xae001320  sw          $zero, 0x1320($s0)
    ctx->pc = 0x1a14acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4896), GPR_U32(ctx, 0));
    // 0x1a14b0: 0x26021360  addiu       $v0, $s0, 0x1360
    ctx->pc = 0x1a14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4960));
    // 0x1a14b4: 0xae001324  sw          $zero, 0x1324($s0)
    ctx->pc = 0x1a14b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4900), GPR_U32(ctx, 0));
    // 0x1a14b8: 0x26031370  addiu       $v1, $s0, 0x1370
    ctx->pc = 0x1a14b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4976));
    // 0x1a14bc: 0xae001328  sw          $zero, 0x1328($s0)
    ctx->pc = 0x1a14bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4904), GPR_U32(ctx, 0));
    // 0x1a14c0: 0x26071380  addiu       $a3, $s0, 0x1380
    ctx->pc = 0x1a14c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4992));
    // 0x1a14c4: 0xae00132c  sw          $zero, 0x132C($s0)
    ctx->pc = 0x1a14c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4908), GPR_U32(ctx, 0));
    // 0x1a14c8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1a14c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a14cc: 0xae001294  sw          $zero, 0x1294($s0)
    ctx->pc = 0x1a14ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4756), GPR_U32(ctx, 0));
    // 0x1a14d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a14d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a14d4: 0xae001290  sw          $zero, 0x1290($s0)
    ctx->pc = 0x1a14d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4752), GPR_U32(ctx, 0));
    // 0x1a14d8: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1a14d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1a14dc: 0xae001340  sw          $zero, 0x1340($s0)
    ctx->pc = 0x1a14dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4928), GPR_U32(ctx, 0));
    // 0x1a14e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a14e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a14e4: 0xae001344  sw          $zero, 0x1344($s0)
    ctx->pc = 0x1a14e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4932), GPR_U32(ctx, 0));
    // 0x1a14e8: 0xae001348  sw          $zero, 0x1348($s0)
    ctx->pc = 0x1a14e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4936), GPR_U32(ctx, 0));
    // 0x1a14ec: 0xae001350  sw          $zero, 0x1350($s0)
    ctx->pc = 0x1a14ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4944), GPR_U32(ctx, 0));
    // 0x1a14f0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a14f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1a14f4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1a14f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1a14f8: 0xae001360  sw          $zero, 0x1360($s0)
    ctx->pc = 0x1a14f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4960), GPR_U32(ctx, 0));
    // 0x1a14fc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1a14fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1a1500: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1a1500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1a1504: 0xae001370  sw          $zero, 0x1370($s0)
    ctx->pc = 0x1a1504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4976), GPR_U32(ctx, 0));
    // 0x1a1508: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1a1508u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x1a150c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x1a150cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x1a1510: 0xae001380  sw          $zero, 0x1380($s0)
    ctx->pc = 0x1a1510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4992), GPR_U32(ctx, 0));
    // 0x1a1514: 0xae0012c8  sw          $zero, 0x12C8($s0)
    ctx->pc = 0x1a1514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4808), GPR_U32(ctx, 0));
    // 0x1a1518: 0xae00134c  sw          $zero, 0x134C($s0)
    ctx->pc = 0x1a1518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4940), GPR_U32(ctx, 0));
    // 0x1a151c: 0xae0013a0  sw          $zero, 0x13A0($s0)
    ctx->pc = 0x1a151cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5024), GPR_U32(ctx, 0));
    // 0x1a1520: 0xae001394  sw          $zero, 0x1394($s0)
    ctx->pc = 0x1a1520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5012), GPR_U32(ctx, 0));
    // 0x1a1524: 0xae001334  sw          $zero, 0x1334($s0)
    ctx->pc = 0x1a1524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4916), GPR_U32(ctx, 0));
    // 0x1a1528: 0xae001338  sw          $zero, 0x1338($s0)
    ctx->pc = 0x1a1528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4920), GPR_U32(ctx, 0));
    // 0x1a152c: 0xae001330  sw          $zero, 0x1330($s0)
    ctx->pc = 0x1a152cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4912), GPR_U32(ctx, 0));
    // 0x1a1530: 0xae001398  sw          $zero, 0x1398($s0)
    ctx->pc = 0x1a1530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5016), GPR_U32(ctx, 0));
    // 0x1a1534: 0xae00139c  sw          $zero, 0x139C($s0)
    ctx->pc = 0x1a1534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5020), GPR_U32(ctx, 0));
    // 0x1a1538: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1A1538u;
    SET_GPR_U32(ctx, 31, 0x1A1540u);
    ctx->pc = 0x1A153Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1538u;
    // 0x1a153c: 0xae081390  sw          $t0, 0x1390($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5008), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1A1538u, 0x1A1540u)) {
        return;
    }
    ctx->pc = 0x1A1540u;
label_1a1540:
    // 0x1a1540: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x1a1540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x1a1544: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1a1544u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1a1548: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a1548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a154c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1a154cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a1550: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x1a1550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
    // 0x1a1554: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x1a1554u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
    // 0x1a1558: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a1558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a155c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a155cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1560: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1a1560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1a1564: 0xae041280  sw          $a0, 0x1280($s0)
    ctx->pc = 0x1a1564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4736), GPR_U32(ctx, 4));
    // 0x1a1568: 0xa6031274  sh          $v1, 0x1274($s0)
    ctx->pc = 0x1a1568u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4724), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a156c: 0x2442c890  addiu       $v0, $v0, -0x3770
    ctx->pc = 0x1a156cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953104));
    // 0x1a1570: 0xe6001278  swc1        $f0, 0x1278($s0)
    ctx->pc = 0x1a1570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4728), bits); }
    // 0x1a1574: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a1574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1578: 0xe601127c  swc1        $f1, 0x127C($s0)
    ctx->pc = 0x1a1578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4732), bits); }
    // 0x1a157c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a157cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1580: 0xc06abdc  jal         func_1AAF70
    ctx->pc = 0x1A1580u;
    SET_GPR_U32(ctx, 31, 0x1A1588u);
    ctx->pc = 0x1A1584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1580u;
    // 0x1a1584: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAF70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AAF70u, 0x1A1580u, 0x1A1588u)) {
        return;
    }
    ctx->pc = 0x1A1588u;
label_1a1588:
    // 0x1a1588: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a1588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a158c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a158cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1590: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a1590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1594: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a1594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1598: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a1598u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a159c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a159cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a15a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A15A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A15A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15A0u;
        // 0x1a15a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A15A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A15A8u;
}
