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

// Function: sub_0020F4B8
// Address: 0x20f4b8 - 0x20f668
void sub_0020F4B8_0x20f4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F4B8_0x20f4b8");
#endif

    switch (ctx->pc) {
        case 0x20f4b8u: goto label_20f4b8;
        case 0x20f4bcu: goto label_20f4bc;
        case 0x20f4c0u: goto label_20f4c0;
        case 0x20f4c4u: goto label_20f4c4;
        case 0x20f4c8u: goto label_20f4c8;
        case 0x20f4ccu: goto label_20f4cc;
        case 0x20f4d0u: goto label_20f4d0;
        case 0x20f4d4u: goto label_20f4d4;
        case 0x20f4d8u: goto label_20f4d8;
        case 0x20f4dcu: goto label_20f4dc;
        case 0x20f4e0u: goto label_20f4e0;
        case 0x20f4e4u: goto label_20f4e4;
        case 0x20f4e8u: goto label_20f4e8;
        case 0x20f4ecu: goto label_20f4ec;
        case 0x20f4f0u: goto label_20f4f0;
        case 0x20f4f4u: goto label_20f4f4;
        case 0x20f4f8u: goto label_20f4f8;
        case 0x20f4fcu: goto label_20f4fc;
        case 0x20f500u: goto label_20f500;
        case 0x20f504u: goto label_20f504;
        case 0x20f508u: goto label_20f508;
        case 0x20f50cu: goto label_20f50c;
        case 0x20f510u: goto label_20f510;
        case 0x20f514u: goto label_20f514;
        case 0x20f518u: goto label_20f518;
        case 0x20f51cu: goto label_20f51c;
        case 0x20f520u: goto label_20f520;
        case 0x20f524u: goto label_20f524;
        case 0x20f528u: goto label_20f528;
        case 0x20f52cu: goto label_20f52c;
        case 0x20f530u: goto label_20f530;
        case 0x20f534u: goto label_20f534;
        case 0x20f538u: goto label_20f538;
        case 0x20f53cu: goto label_20f53c;
        case 0x20f540u: goto label_20f540;
        case 0x20f544u: goto label_20f544;
        case 0x20f548u: goto label_20f548;
        case 0x20f54cu: goto label_20f54c;
        case 0x20f550u: goto label_20f550;
        case 0x20f554u: goto label_20f554;
        case 0x20f558u: goto label_20f558;
        case 0x20f55cu: goto label_20f55c;
        case 0x20f560u: goto label_20f560;
        case 0x20f564u: goto label_20f564;
        case 0x20f568u: goto label_20f568;
        case 0x20f56cu: goto label_20f56c;
        case 0x20f570u: goto label_20f570;
        case 0x20f574u: goto label_20f574;
        case 0x20f578u: goto label_20f578;
        case 0x20f57cu: goto label_20f57c;
        case 0x20f580u: goto label_20f580;
        case 0x20f584u: goto label_20f584;
        case 0x20f588u: goto label_20f588;
        case 0x20f58cu: goto label_20f58c;
        case 0x20f590u: goto label_20f590;
        case 0x20f594u: goto label_20f594;
        case 0x20f598u: goto label_20f598;
        case 0x20f59cu: goto label_20f59c;
        case 0x20f5a0u: goto label_20f5a0;
        case 0x20f5a4u: goto label_20f5a4;
        case 0x20f5a8u: goto label_20f5a8;
        case 0x20f5acu: goto label_20f5ac;
        case 0x20f5b0u: goto label_20f5b0;
        case 0x20f5b4u: goto label_20f5b4;
        case 0x20f5b8u: goto label_20f5b8;
        case 0x20f5bcu: goto label_20f5bc;
        case 0x20f5c0u: goto label_20f5c0;
        case 0x20f5c4u: goto label_20f5c4;
        case 0x20f5c8u: goto label_20f5c8;
        case 0x20f5ccu: goto label_20f5cc;
        case 0x20f5d0u: goto label_20f5d0;
        case 0x20f5d4u: goto label_20f5d4;
        case 0x20f5d8u: goto label_20f5d8;
        case 0x20f5dcu: goto label_20f5dc;
        case 0x20f5e0u: goto label_20f5e0;
        case 0x20f5e4u: goto label_20f5e4;
        case 0x20f5e8u: goto label_20f5e8;
        case 0x20f5ecu: goto label_20f5ec;
        case 0x20f5f0u: goto label_20f5f0;
        case 0x20f5f4u: goto label_20f5f4;
        case 0x20f5f8u: goto label_20f5f8;
        case 0x20f5fcu: goto label_20f5fc;
        case 0x20f600u: goto label_20f600;
        case 0x20f604u: goto label_20f604;
        case 0x20f608u: goto label_20f608;
        case 0x20f60cu: goto label_20f60c;
        case 0x20f610u: goto label_20f610;
        case 0x20f614u: goto label_20f614;
        case 0x20f618u: goto label_20f618;
        case 0x20f61cu: goto label_20f61c;
        case 0x20f620u: goto label_20f620;
        case 0x20f624u: goto label_20f624;
        case 0x20f628u: goto label_20f628;
        case 0x20f62cu: goto label_20f62c;
        case 0x20f630u: goto label_20f630;
        case 0x20f634u: goto label_20f634;
        case 0x20f638u: goto label_20f638;
        case 0x20f63cu: goto label_20f63c;
        case 0x20f640u: goto label_20f640;
        case 0x20f644u: goto label_20f644;
        case 0x20f648u: goto label_20f648;
        case 0x20f64cu: goto label_20f64c;
        case 0x20f650u: goto label_20f650;
        case 0x20f654u: goto label_20f654;
        case 0x20f658u: goto label_20f658;
        case 0x20f65cu: goto label_20f65c;
        case 0x20f660u: goto label_20f660;
        case 0x20f664u: goto label_20f664;
        default: break;
    }

    ctx->pc = 0x20f4b8u;

label_20f4b8:
    // 0x20f4b8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x20f4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_20f4bc:
    // 0x20f4bc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x20f4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_20f4c0:
    // 0x20f4c0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x20f4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_20f4c4:
    // 0x20f4c4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x20f4c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f4c8:
    // 0x20f4c8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x20f4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_20f4cc:
    // 0x20f4cc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x20f4ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20f4d0:
    // 0x20f4d0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x20f4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_20f4d4:
    // 0x20f4d4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x20f4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_20f4d8:
    // 0x20f4d8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x20f4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_20f4dc:
    // 0x20f4dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20f4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_20f4e0:
    // 0x20f4e0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x20f4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_20f4e4:
    // 0x20f4e4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x20f4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_20f4e8:
    // 0x20f4e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20f4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20f4ec:
    // 0x20f4ec: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x20f4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_20f4f0:
    // 0x20f4f0: 0x8ee20060  lw          $v0, 0x60($s7)
    ctx->pc = 0x20f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 96)));
label_20f4f4:
    // 0x20f4f4: 0x8ef60078  lw          $s6, 0x78($s7)
    ctx->pc = 0x20f4f4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 120)));
label_20f4f8:
    // 0x20f4f8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20f4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20f4fc:
    // 0x20f4fc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20f4fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_20f500:
    // 0x20f500: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x20f500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f504:
    // 0x20f504: 0x236102a  slt         $v0, $s1, $s6
    ctx->pc = 0x20f504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_20f508:
    // 0x20f508: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_20f50c:
    if (ctx->pc == 0x20F50Cu) {
        ctx->pc = 0x20F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F508u;
        // 0x20f50c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F510u;
        goto label_20f510;
    }
    ctx->pc = 0x20F508u;
    {
        const bool branch_taken_0x20f508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F508u;
        // 0x20f50c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f508) {
            ctx->pc = 0x20F530u;
            goto label_20f530;
        }
    }
    ctx->pc = 0x20F510u;
label_20f510:
    // 0x20f510: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20f510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20f514:
    // 0x20f514: 0x26d1ffff  addiu       $s1, $s6, -0x1
    ctx->pc = 0x20f514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_20f518:
    // 0x20f518: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20f518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f51c:
    // 0x20f51c: 0xc07e4e4  jal         func_1F9390
label_20f520:
    if (ctx->pc == 0x20F520u) {
        ctx->pc = 0x20F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F51Cu;
        // 0x20f520: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F524u;
        goto label_20f524;
    }
    ctx->pc = 0x20F51Cu;
    SET_GPR_U32(ctx, 31, 0x20F524u);
    ctx->pc = 0x20F520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F51Cu;
    // 0x20f520: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x20F51Cu, 0x20F524u)) {
        return;
    }
    ctx->pc = 0x20F524u;
label_20f524:
    // 0x20f524: 0x0  nop
    ctx->pc = 0x20f524u;
    // NOP
label_20f528:
    // 0x20f528: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
label_20f52c:
    if (ctx->pc == 0x20F52Cu) {
        ctx->pc = 0x20F52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F528u;
        // 0x20f52c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F530u;
        goto label_20f530;
    }
    ctx->pc = 0x20F528u;
    {
        const bool branch_taken_0x20f528 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F528u;
        // 0x20f52c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f528) {
            ctx->pc = 0x20F518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f518;
        }
    }
    ctx->pc = 0x20F530u;
label_20f530:
    // 0x20f530: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x20f530u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20f534:
    // 0x20f534: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x20f534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_20f538:
    // 0x20f538: 0x5040fff1  beql        $v0, $zero, . + 4 + (-0xF << 2)
label_20f53c:
    if (ctx->pc == 0x20F53Cu) {
        ctx->pc = 0x20F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F538u;
        // 0x20f53c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F540u;
        goto label_20f540;
    }
    ctx->pc = 0x20F538u;
    {
        const bool branch_taken_0x20f538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f538) {
            ctx->pc = 0x20F53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F538u;
            // 0x20f53c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f500;
        }
    }
    ctx->pc = 0x20F540u;
label_20f540:
    // 0x20f540: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x20f540u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_20f544:
    // 0x20f544: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x20f544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_20f548:
    // 0x20f548: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_20f54c:
    if (ctx->pc == 0x20F54Cu) {
        ctx->pc = 0x20F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F548u;
        // 0x20f54c: 0x24030038  addiu       $v1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F550u;
        goto label_20f550;
    }
    ctx->pc = 0x20F548u;
    {
        const bool branch_taken_0x20f548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F548u;
        // 0x20f54c: 0x24030038  addiu       $v1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f548) {
            ctx->pc = 0x20F578u;
            goto label_20f578;
        }
    }
    ctx->pc = 0x20F550u;
label_20f550:
    // 0x20f550: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x20f550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_20f554:
    // 0x20f554: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x20f554u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_20f558:
    // 0x20f558: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x20f558u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_20f55c:
    // 0x20f55c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20f55cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20f560:
    // 0x20f560: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x20f560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_20f564:
    // 0x20f564: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x20f564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_20f568:
    // 0x20f568: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x20f568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_20f56c:
    // 0x20f56c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20f570:
    // 0x20f570: 0x40f809  jalr        $v0
label_20f574:
    if (ctx->pc == 0x20F574u) {
        ctx->pc = 0x20F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F570u;
        // 0x20f574: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F578u;
        goto label_20f578;
    }
    ctx->pc = 0x20F570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F578u);
        ctx->pc = 0x20F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F570u;
        // 0x20f574: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F570u, 0x20F578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F578u;
label_20f578:
    // 0x20f578: 0x1ac00009  blez        $s6, . + 4 + (0x9 << 2)
label_20f57c:
    if (ctx->pc == 0x20F57Cu) {
        ctx->pc = 0x20F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F578u;
        // 0x20f57c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F580u;
        goto label_20f580;
    }
    ctx->pc = 0x20F578u;
    {
        const bool branch_taken_0x20f578 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x20F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F578u;
        // 0x20f57c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f578) {
            ctx->pc = 0x20F5A0u;
            goto label_20f5a0;
        }
    }
    ctx->pc = 0x20F580u;
label_20f580:
    // 0x20f580: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x20f580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20f584:
    // 0x20f584: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x20f584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20f588:
    // 0x20f588: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x20f588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_20f58c:
    // 0x20f58c: 0x292a018  mult        $s4, $s4, $s2
    ctx->pc = 0x20f58cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_20f590:
    // 0x20f590: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x20f590u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_20f594:
    // 0x20f594: 0x0  nop
    ctx->pc = 0x20f594u;
    // NOP
label_20f598:
    // 0x20f598: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
label_20f59c:
    if (ctx->pc == 0x20F59Cu) {
        ctx->pc = 0x20F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F598u;
        // 0x20f59c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F5A0u;
        goto label_20f5a0;
    }
    ctx->pc = 0x20F598u;
    {
        const bool branch_taken_0x20f598 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F598u;
        // 0x20f59c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f598) {
            ctx->pc = 0x20F588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f588;
        }
    }
    ctx->pc = 0x20F5A0u;
label_20f5a0:
    // 0x20f5a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20f5a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f5a4:
    // 0x20f5a4: 0x1ac00020  blez        $s6, . + 4 + (0x20 << 2)
label_20f5a8:
    if (ctx->pc == 0x20F5A8u) {
        ctx->pc = 0x20F5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5A4u;
        // 0x20f5a8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F5ACu;
        goto label_20f5ac;
    }
    ctx->pc = 0x20F5A4u;
    {
        const bool branch_taken_0x20f5a4 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x20F5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5A4u;
        // 0x20f5a8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5a4) {
            ctx->pc = 0x20F628u;
            goto label_20f628;
        }
    }
    ctx->pc = 0x20F5ACu;
label_20f5ac:
    // 0x20f5ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20f5b0:
    // 0x20f5b0: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x20f5b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20f5b4:
    // 0x20f5b4: 0x245356a8  addiu       $s3, $v0, 0x56A8
    ctx->pc = 0x20f5b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 22184));
label_20f5b8:
    // 0x20f5b8: 0x8ee2002c  lw          $v0, 0x2C($s7)
    ctx->pc = 0x20f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 44)));
label_20f5bc:
    // 0x20f5bc: 0x145e0002  bne         $v0, $fp, . + 4 + (0x2 << 2)
label_20f5c0:
    if (ctx->pc == 0x20F5C0u) {
        ctx->pc = 0x20F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5BCu;
        // 0x20f5c0: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F5C4u;
        goto label_20f5c4;
    }
    ctx->pc = 0x20F5BCu;
    {
        const bool branch_taken_0x20f5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x20F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5BCu;
        // 0x20f5c0: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5bc) {
            ctx->pc = 0x20F5C8u;
            goto label_20f5c8;
        }
    }
    ctx->pc = 0x20F5C4u;
label_20f5c4:
    // 0x20f5c4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x20f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20f5c8:
    // 0x20f5c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x20f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20f5cc:
    // 0x20f5cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20f5d0:
    // 0x20f5d0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x20f5d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20f5d4:
    // 0x20f5d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20f5d8:
    // 0x20f5d8: 0x282001a  div         $zero, $s4, $v0
    ctx->pc = 0x20f5d8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_20f5dc:
    // 0x20f5dc: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x20f5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20f5e0:
    // 0x20f5e0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_20f5e4:
    if (ctx->pc == 0x20F5E4u) {
        ctx->pc = 0x20F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5E0u;
        // 0x20f5e4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F5E8u;
        goto label_20f5e8;
    }
    ctx->pc = 0x20F5E0u;
    {
        const bool branch_taken_0x20f5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f5e0) {
            ctx->pc = 0x20F5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F5E0u;
            // 0x20f5e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F5E8u;
            goto label_20f5e8;
        }
    }
    ctx->pc = 0x20F5E8u;
label_20f5e8:
    // 0x20f5e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20f5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f5ec:
    // 0x20f5ec: 0x2012  mflo        $a0
    ctx->pc = 0x20f5ecu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_20f5f0:
    // 0x20f5f0: 0xc07e4e4  jal         func_1F9390
label_20f5f4:
    if (ctx->pc == 0x20F5F4u) {
        ctx->pc = 0x20F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5F0u;
        // 0x20f5f4: 0x80202d  daddu       $a0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F5F8u;
        goto label_20f5f8;
    }
    ctx->pc = 0x20F5F0u;
    SET_GPR_U32(ctx, 31, 0x20F5F8u);
    ctx->pc = 0x20F5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F5F0u;
    // 0x20f5f4: 0x80202d  daddu       $a0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x20F5F0u, 0x20F5F8u)) {
        return;
    }
    ctx->pc = 0x20F5F8u;
label_20f5f8:
    // 0x20f5f8: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x20f5f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20f5fc:
    // 0x20f5fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20f5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20f600:
    // 0x20f600: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x20f600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_20f604:
    // 0x20f604: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_20f608:
    if (ctx->pc == 0x20F608u) {
        ctx->pc = 0x20F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F604u;
        // 0x20f608: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F60Cu;
        goto label_20f60c;
    }
    ctx->pc = 0x20F604u;
    {
        const bool branch_taken_0x20f604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F604u;
        // 0x20f608: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f604) {
            ctx->pc = 0x20F628u;
            goto label_20f628;
        }
    }
    ctx->pc = 0x20F60Cu;
label_20f60c:
    // 0x20f60c: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x20f60cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_20f610:
    // 0x20f610: 0x4a03c  dsll32      $s4, $a0, 0
    ctx->pc = 0x20f610u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) << (32 + 0));
label_20f614:
    // 0x20f614: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x20f614u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
label_20f618:
    // 0x20f618: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x20f618u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f61c:
    // 0x20f61c: 0x236102a  slt         $v0, $s1, $s6
    ctx->pc = 0x20f61cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_20f620:
    // 0x20f620: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_20f624:
    if (ctx->pc == 0x20F624u) {
        ctx->pc = 0x20F624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F620u;
        // 0x20f624: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F628u;
        goto label_20f628;
    }
    ctx->pc = 0x20F620u;
    {
        const bool branch_taken_0x20f620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F620u;
        // 0x20f624: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f620) {
            ctx->pc = 0x20F5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f5b8;
        }
    }
    ctx->pc = 0x20F628u;
label_20f628:
    // 0x20f628: 0x16a0ffde  bnez        $s5, . + 4 + (-0x22 << 2)
label_20f62c:
    if (ctx->pc == 0x20F62Cu) {
        ctx->pc = 0x20F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F628u;
        // 0x20f62c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F630u;
        goto label_20f630;
    }
    ctx->pc = 0x20F628u;
    {
        const bool branch_taken_0x20f628 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F628u;
        // 0x20f62c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f628) {
            ctx->pc = 0x20F5A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f5a4;
        }
    }
    ctx->pc = 0x20F630u;
label_20f630:
    // 0x20f630: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x20f630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20f634:
    // 0x20f634: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x20f634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_20f638:
    // 0x20f638: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x20f638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20f63c:
    // 0x20f63c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x20f63cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20f640:
    // 0x20f640: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x20f640u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20f644:
    // 0x20f644: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x20f644u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20f648:
    // 0x20f648: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20f648u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20f64c:
    // 0x20f64c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x20f64cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20f650:
    // 0x20f650: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x20f650u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20f654:
    // 0x20f654: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x20f654u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20f658:
    // 0x20f658: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20f658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20f65c:
    // 0x20f65c: 0x3e00008  jr          $ra
label_20f660:
    if (ctx->pc == 0x20F660u) {
        ctx->pc = 0x20F660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F65Cu;
        // 0x20f660: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F664u;
        goto label_20f664;
    }
    ctx->pc = 0x20F65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F65Cu;
        // 0x20f660: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F664u;
label_20f664:
    // 0x20f664: 0x0  nop
    ctx->pc = 0x20f664u;
    // NOP
    ctx->pc = 0x20f668u;
}
