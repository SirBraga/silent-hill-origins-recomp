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

// Function: sub_001424B0
// Address: 0x1424b0 - 0x1426c8
void sub_001424B0_0x1424b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001424B0_0x1424b0");
#endif

    switch (ctx->pc) {
        case 0x14251cu: goto label_14251c;
        case 0x14252cu: goto label_14252c;
        case 0x14253cu: goto label_14253c;
        case 0x14254cu: goto label_14254c;
        case 0x142558u: goto label_142558;
        case 0x142560u: goto label_142560;
        case 0x142568u: goto label_142568;
        case 0x142570u: goto label_142570;
        case 0x142578u: goto label_142578;
        case 0x142584u: goto label_142584;
        case 0x142590u: goto label_142590;
        case 0x1425a0u: goto label_1425a0;
        case 0x1425b8u: goto label_1425b8;
        case 0x1425c4u: goto label_1425c4;
        case 0x1425d0u: goto label_1425d0;
        case 0x1425e4u: goto label_1425e4;
        case 0x1425ecu: goto label_1425ec;
        case 0x142600u: goto label_142600;
        case 0x142608u: goto label_142608;
        case 0x142610u: goto label_142610;
        case 0x142618u: goto label_142618;
        case 0x142620u: goto label_142620;
        case 0x142648u: goto label_142648;
        case 0x14266cu: goto label_14266c;
        case 0x142678u: goto label_142678;
        case 0x142684u: goto label_142684;
        case 0x142690u: goto label_142690;
        case 0x14269cu: goto label_14269c;
        default: break;
    }

    ctx->pc = 0x1424b0u;

    // 0x1424b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1424b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1424b4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1424b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1424b8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1424b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1424bc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1424bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1424c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1424c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1424c4: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1424c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x1424c8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1424c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1424cc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1424ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1424d0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1424d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1424d4: 0x24840f60  addiu       $a0, $a0, 0xF60
    ctx->pc = 0x1424d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3936));
    // 0x1424d8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1424d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1424dc: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1424dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1424e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1424e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1424e4: 0x24630f80  addiu       $v1, $v1, 0xF80
    ctx->pc = 0x1424e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3968));
    // 0x1424e8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1424e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1424ec: 0x24420f48  addiu       $v0, $v0, 0xF48
    ctx->pc = 0x1424ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3912));
    // 0x1424f0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1424f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1424f4: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x1424f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x1424f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1424f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1424fc: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1424fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x142500: 0xae24003c  sw          $a0, 0x3C($s1)
    ctx->pc = 0x142500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 4));
    // 0x142504: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x142504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x142508: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x142508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x14250c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14250cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142510: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x142510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x142514: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x142514u;
    SET_GPR_U32(ctx, 31, 0x14251Cu);
    ctx->pc = 0x142518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142514u;
    // 0x142518: 0x26320048  addiu       $s2, $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x142514u, 0x14251Cu)) {
        return;
    }
    ctx->pc = 0x14251Cu;
label_14251c:
    // 0x14251c: 0x26330050  addiu       $s3, $s1, 0x50
    ctx->pc = 0x14251cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x142520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x142520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142524: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x142524u;
    SET_GPR_U32(ctx, 31, 0x14252Cu);
    ctx->pc = 0x142528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142524u;
    // 0x142528: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x142524u, 0x14252Cu)) {
        return;
    }
    ctx->pc = 0x14252Cu;
label_14252c:
    // 0x14252c: 0x26340058  addiu       $s4, $s1, 0x58
    ctx->pc = 0x14252cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x142530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x142530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142534: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x142534u;
    SET_GPR_U32(ctx, 31, 0x14253Cu);
    ctx->pc = 0x142538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142534u;
    // 0x142538: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x142534u, 0x14253Cu)) {
        return;
    }
    ctx->pc = 0x14253Cu;
label_14253c:
    // 0x14253c: 0x26350060  addiu       $s5, $s1, 0x60
    ctx->pc = 0x14253cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x142540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x142540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142544: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x142544u;
    SET_GPR_U32(ctx, 31, 0x14254Cu);
    ctx->pc = 0x142548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142544u;
    // 0x142548: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x142544u, 0x14254Cu)) {
        return;
    }
    ctx->pc = 0x14254Cu;
label_14254c:
    // 0x14254c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x14254cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142550: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x142550u;
    SET_GPR_U32(ctx, 31, 0x142558u);
    ctx->pc = 0x142554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142550u;
    // 0x142554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x142550u, 0x142558u)) {
        return;
    }
    ctx->pc = 0x142558u;
label_142558:
    // 0x142558: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x142558u;
    SET_GPR_U32(ctx, 31, 0x142560u);
    ctx->pc = 0x14255Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142558u;
    // 0x14255c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x142558u, 0x142560u)) {
        return;
    }
    ctx->pc = 0x142560u;
label_142560:
    // 0x142560: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x142560u;
    SET_GPR_U32(ctx, 31, 0x142568u);
    ctx->pc = 0x142564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142560u;
    // 0x142564: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x142560u, 0x142568u)) {
        return;
    }
    ctx->pc = 0x142568u;
label_142568:
    // 0x142568: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x142568u;
    SET_GPR_U32(ctx, 31, 0x142570u);
    ctx->pc = 0x14256Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142568u;
    // 0x14256c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x142568u, 0x142570u)) {
        return;
    }
    ctx->pc = 0x142570u;
label_142570:
    // 0x142570: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x142570u;
    SET_GPR_U32(ctx, 31, 0x142578u);
    ctx->pc = 0x142574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142570u;
    // 0x142574: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x142570u, 0x142578u)) {
        return;
    }
    ctx->pc = 0x142578u;
label_142578:
    // 0x142578: 0x8e2400f4  lw          $a0, 0xF4($s1)
    ctx->pc = 0x142578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x14257c: 0xc097a26  jal         func_25E898
    ctx->pc = 0x14257Cu;
    SET_GPR_U32(ctx, 31, 0x142584u);
    ctx->pc = 0x142580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14257Cu;
    // 0x142580: 0x8e250114  lw          $a1, 0x114($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E898u, 0x14257Cu, 0x142584u)) {
        return;
    }
    ctx->pc = 0x142584u;
label_142584:
    // 0x142584: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x142584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x142588: 0xc097922  jal         func_25E488
    ctx->pc = 0x142588u;
    SET_GPR_U32(ctx, 31, 0x142590u);
    ctx->pc = 0x14258Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142588u;
    // 0x14258c: 0x8e25011c  lw          $a1, 0x11C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E488u, 0x142588u, 0x142590u)) {
        return;
    }
    ctx->pc = 0x142590u;
label_142590:
    // 0x142590: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x142590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x142594: 0x8e2500e8  lw          $a1, 0xE8($s1)
    ctx->pc = 0x142594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x142598: 0xc05ee80  jal         func_17BA00
    ctx->pc = 0x142598u;
    SET_GPR_U32(ctx, 31, 0x1425A0u);
    ctx->pc = 0x14259Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142598u;
    // 0x14259c: 0x8c64870c  lw          $a0, -0x78F4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BA00u, 0x142598u, 0x1425A0u)) {
        return;
    }
    ctx->pc = 0x1425A0u;
label_1425a0:
    // 0x1425a0: 0x8e230108  lw          $v1, 0x108($s1)
    ctx->pc = 0x1425a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x1425a4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1425A4u;
    {
        const bool branch_taken_0x1425a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1425a4) {
            ctx->pc = 0x1425A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1425A4u;
            // 0x1425a8: 0x8e240114  lw          $a0, 0x114($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1425BCu;
            goto label_1425bc;
        }
    }
    ctx->pc = 0x1425ACu;
    // 0x1425ac: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x1425acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1425b0: 0xc097a26  jal         func_25E898
    ctx->pc = 0x1425B0u;
    SET_GPR_U32(ctx, 31, 0x1425B8u);
    ctx->pc = 0x1425B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1425B0u;
    // 0x1425b4: 0x8e250118  lw          $a1, 0x118($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E898u, 0x1425B0u, 0x1425B8u)) {
        return;
    }
    ctx->pc = 0x1425B8u;
label_1425b8:
    // 0x1425b8: 0x8e240114  lw          $a0, 0x114($s1)
    ctx->pc = 0x1425b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
label_1425bc:
    // 0x1425bc: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x1425BCu;
    SET_GPR_U32(ctx, 31, 0x1425C4u);
    ctx->pc = 0x1425C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1425BCu;
    // 0x1425c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x1425BCu, 0x1425C4u)) {
        return;
    }
    ctx->pc = 0x1425C4u;
label_1425c4:
    // 0x1425c4: 0x8e24011c  lw          $a0, 0x11C($s1)
    ctx->pc = 0x1425c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x1425c8: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x1425C8u;
    SET_GPR_U32(ctx, 31, 0x1425D0u);
    ctx->pc = 0x1425CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1425C8u;
    // 0x1425cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x1425C8u, 0x1425D0u)) {
        return;
    }
    ctx->pc = 0x1425D0u;
label_1425d0:
    // 0x1425d0: 0x8e2400e8  lw          $a0, 0xE8($s1)
    ctx->pc = 0x1425d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x1425d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1425D4u;
    {
        const bool branch_taken_0x1425d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1425d4) {
            ctx->pc = 0x1425D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1425D4u;
            // 0x1425d8: 0x8e240120  lw          $a0, 0x120($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1425F0u;
            goto label_1425f0;
        }
    }
    ctx->pc = 0x1425DCu;
    // 0x1425dc: 0xc0957f0  jal         func_255FC0
    ctx->pc = 0x1425DCu;
    SET_GPR_U32(ctx, 31, 0x1425E4u);
    ctx->pc = 0x1425E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1425DCu;
    // 0x1425e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FC0u, 0x1425DCu, 0x1425E4u)) {
        return;
    }
    ctx->pc = 0x1425E4u;
label_1425e4:
    // 0x1425e4: 0xc095534  jal         func_2554D0
    ctx->pc = 0x1425E4u;
    SET_GPR_U32(ctx, 31, 0x1425ECu);
    ctx->pc = 0x1425E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1425E4u;
    // 0x1425e8: 0x8e2400e8  lw          $a0, 0xE8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2554D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2554D0u, 0x1425E4u, 0x1425ECu)) {
        return;
    }
    ctx->pc = 0x1425ECu;
label_1425ec:
    // 0x1425ec: 0x8e240120  lw          $a0, 0x120($s1)
    ctx->pc = 0x1425ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_1425f0:
    // 0x1425f0: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x1425f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1425f4: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x1425f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1425f8: 0xc0898d2  jal         func_226348
    ctx->pc = 0x1425F8u;
    SET_GPR_U32(ctx, 31, 0x142600u);
    ctx->pc = 0x1425FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1425F8u;
    // 0x1425fc: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226348u, 0x1425F8u, 0x142600u)) {
        return;
    }
    ctx->pc = 0x142600u;
label_142600:
    // 0x142600: 0xc0898d2  jal         func_226348
    ctx->pc = 0x142600u;
    SET_GPR_U32(ctx, 31, 0x142608u);
    ctx->pc = 0x142604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142600u;
    // 0x142604: 0x8e240124  lw          $a0, 0x124($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226348u, 0x142600u, 0x142608u)) {
        return;
    }
    ctx->pc = 0x142608u;
label_142608:
    // 0x142608: 0xc095df4  jal         func_2577D0
    ctx->pc = 0x142608u;
    SET_GPR_U32(ctx, 31, 0x142610u);
    ctx->pc = 0x14260Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142608u;
    // 0x14260c: 0x8e240114  lw          $a0, 0x114($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2577D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2577D0u, 0x142608u, 0x142610u)) {
        return;
    }
    ctx->pc = 0x142610u;
label_142610:
    // 0x142610: 0xc095df4  jal         func_2577D0
    ctx->pc = 0x142610u;
    SET_GPR_U32(ctx, 31, 0x142618u);
    ctx->pc = 0x142614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142610u;
    // 0x142614: 0x8e240118  lw          $a0, 0x118($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2577D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2577D0u, 0x142610u, 0x142618u)) {
        return;
    }
    ctx->pc = 0x142618u;
label_142618:
    // 0x142618: 0xc089484  jal         func_225210
    ctx->pc = 0x142618u;
    SET_GPR_U32(ctx, 31, 0x142620u);
    ctx->pc = 0x14261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142618u;
    // 0x14261c: 0x8e24011c  lw          $a0, 0x11C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225210u, 0x142618u, 0x142620u)) {
        return;
    }
    ctx->pc = 0x142620u;
label_142620:
    // 0x142620: 0xae20011c  sw          $zero, 0x11C($s1)
    ctx->pc = 0x142620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 0));
    // 0x142624: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x142624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x142628: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x142628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
    // 0x14262c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14262cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142630: 0x8c46847c  lw          $a2, -0x7B84($v0)
    ctx->pc = 0x142630u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x33847Cu));
    // 0x142634: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x142634u;
    {
        const bool branch_taken_0x142634 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x142638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142634u;
        // 0x142638: 0xac40847c  sw          $zero, -0x7B84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294935676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142634) {
            ctx->pc = 0x142664u;
            goto label_142664;
        }
    }
    ctx->pc = 0x14263Cu;
    // 0x14263c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14263cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142640: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x142640u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142644: 0x0  nop
    ctx->pc = 0x142644u;
    // NOP
label_142648:
    // 0x142648: 0x10710004  beq         $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x142648u;
    {
        const bool branch_taken_0x142648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x14264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142648u;
        // 0x14264c: 0x8cc600ec  lw          $a2, 0xEC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142648) {
            ctx->pc = 0x14265Cu;
            goto label_14265c;
        }
    }
    ctx->pc = 0x142650u;
    // 0x142650: 0x8ce2847c  lw          $v0, -0x7B84($a3)
    ctx->pc = 0x142650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294935676)));
    // 0x142654: 0xac6200ec  sw          $v0, 0xEC($v1)
    ctx->pc = 0x142654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 236), GPR_U32(ctx, 2));
    // 0x142658: 0xace3847c  sw          $v1, -0x7B84($a3)
    ctx->pc = 0x142658u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294935676), GPR_U32(ctx, 3));
label_14265c:
    // 0x14265c: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14265Cu;
    {
        const bool branch_taken_0x14265c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x142660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14265Cu;
        // 0x142660: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14265c) {
            ctx->pc = 0x142648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142648;
        }
    }
    ctx->pc = 0x142664u;
label_142664:
    // 0x142664: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x142664u;
    SET_GPR_U32(ctx, 31, 0x14266Cu);
    ctx->pc = 0x142668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142664u;
    // 0x142668: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x142664u, 0x14266Cu)) {
        return;
    }
    ctx->pc = 0x14266Cu;
label_14266c:
    // 0x14266c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14266cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142670: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x142670u;
    SET_GPR_U32(ctx, 31, 0x142678u);
    ctx->pc = 0x142674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142670u;
    // 0x142674: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x142670u, 0x142678u)) {
        return;
    }
    ctx->pc = 0x142678u;
label_142678:
    // 0x142678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x142678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14267c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x14267Cu;
    SET_GPR_U32(ctx, 31, 0x142684u);
    ctx->pc = 0x142680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14267Cu;
    // 0x142680: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x14267Cu, 0x142684u)) {
        return;
    }
    ctx->pc = 0x142684u;
label_142684:
    // 0x142684: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x142684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142688: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x142688u;
    SET_GPR_U32(ctx, 31, 0x142690u);
    ctx->pc = 0x14268Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142688u;
    // 0x14268c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x142688u, 0x142690u)) {
        return;
    }
    ctx->pc = 0x142690u;
label_142690:
    // 0x142690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142694: 0xc04f084  jal         func_13C210
    ctx->pc = 0x142694u;
    SET_GPR_U32(ctx, 31, 0x14269Cu);
    ctx->pc = 0x142698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142694u;
    // 0x142698: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x142694u, 0x14269Cu)) {
        return;
    }
    ctx->pc = 0x14269Cu;
label_14269c:
    // 0x14269c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x14269cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1426a0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1426a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1426a4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1426a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1426a8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1426a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1426ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1426acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1426b0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1426b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1426b4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1426b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1426b8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1426b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1426bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1426bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1426c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1426C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1426C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1426C0u;
        // 0x1426c4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1426C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1426C8u;
}
