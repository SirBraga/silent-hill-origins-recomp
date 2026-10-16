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

// Function: sub_0022B2D0
// Address: 0x22b2d0 - 0x22b420
void sub_0022B2D0_0x22b2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B2D0_0x22b2d0");
#endif

    switch (ctx->pc) {
        case 0x22b2d0u: goto label_22b2d0;
        case 0x22b2d4u: goto label_22b2d4;
        case 0x22b2d8u: goto label_22b2d8;
        case 0x22b2dcu: goto label_22b2dc;
        case 0x22b2e0u: goto label_22b2e0;
        case 0x22b2e4u: goto label_22b2e4;
        case 0x22b2e8u: goto label_22b2e8;
        case 0x22b2ecu: goto label_22b2ec;
        case 0x22b2f0u: goto label_22b2f0;
        case 0x22b2f4u: goto label_22b2f4;
        case 0x22b2f8u: goto label_22b2f8;
        case 0x22b2fcu: goto label_22b2fc;
        case 0x22b300u: goto label_22b300;
        case 0x22b304u: goto label_22b304;
        case 0x22b308u: goto label_22b308;
        case 0x22b30cu: goto label_22b30c;
        case 0x22b310u: goto label_22b310;
        case 0x22b314u: goto label_22b314;
        case 0x22b318u: goto label_22b318;
        case 0x22b31cu: goto label_22b31c;
        case 0x22b320u: goto label_22b320;
        case 0x22b324u: goto label_22b324;
        case 0x22b328u: goto label_22b328;
        case 0x22b32cu: goto label_22b32c;
        case 0x22b330u: goto label_22b330;
        case 0x22b334u: goto label_22b334;
        case 0x22b338u: goto label_22b338;
        case 0x22b33cu: goto label_22b33c;
        case 0x22b340u: goto label_22b340;
        case 0x22b344u: goto label_22b344;
        case 0x22b348u: goto label_22b348;
        case 0x22b34cu: goto label_22b34c;
        case 0x22b350u: goto label_22b350;
        case 0x22b354u: goto label_22b354;
        case 0x22b358u: goto label_22b358;
        case 0x22b35cu: goto label_22b35c;
        case 0x22b360u: goto label_22b360;
        case 0x22b364u: goto label_22b364;
        case 0x22b368u: goto label_22b368;
        case 0x22b36cu: goto label_22b36c;
        case 0x22b370u: goto label_22b370;
        case 0x22b374u: goto label_22b374;
        case 0x22b378u: goto label_22b378;
        case 0x22b37cu: goto label_22b37c;
        case 0x22b380u: goto label_22b380;
        case 0x22b384u: goto label_22b384;
        case 0x22b388u: goto label_22b388;
        case 0x22b38cu: goto label_22b38c;
        case 0x22b390u: goto label_22b390;
        case 0x22b394u: goto label_22b394;
        case 0x22b398u: goto label_22b398;
        case 0x22b39cu: goto label_22b39c;
        case 0x22b3a0u: goto label_22b3a0;
        case 0x22b3a4u: goto label_22b3a4;
        case 0x22b3a8u: goto label_22b3a8;
        case 0x22b3acu: goto label_22b3ac;
        case 0x22b3b0u: goto label_22b3b0;
        case 0x22b3b4u: goto label_22b3b4;
        case 0x22b3b8u: goto label_22b3b8;
        case 0x22b3bcu: goto label_22b3bc;
        case 0x22b3c0u: goto label_22b3c0;
        case 0x22b3c4u: goto label_22b3c4;
        case 0x22b3c8u: goto label_22b3c8;
        case 0x22b3ccu: goto label_22b3cc;
        case 0x22b3d0u: goto label_22b3d0;
        case 0x22b3d4u: goto label_22b3d4;
        case 0x22b3d8u: goto label_22b3d8;
        case 0x22b3dcu: goto label_22b3dc;
        case 0x22b3e0u: goto label_22b3e0;
        case 0x22b3e4u: goto label_22b3e4;
        case 0x22b3e8u: goto label_22b3e8;
        case 0x22b3ecu: goto label_22b3ec;
        case 0x22b3f0u: goto label_22b3f0;
        case 0x22b3f4u: goto label_22b3f4;
        case 0x22b3f8u: goto label_22b3f8;
        case 0x22b3fcu: goto label_22b3fc;
        case 0x22b400u: goto label_22b400;
        case 0x22b404u: goto label_22b404;
        case 0x22b408u: goto label_22b408;
        case 0x22b40cu: goto label_22b40c;
        case 0x22b410u: goto label_22b410;
        case 0x22b414u: goto label_22b414;
        case 0x22b418u: goto label_22b418;
        case 0x22b41cu: goto label_22b41c;
        default: break;
    }

    ctx->pc = 0x22b2d0u;

label_22b2d0:
    // 0x22b2d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22b2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22b2d4:
    // 0x22b2d4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x22b2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_22b2d8:
    // 0x22b2d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22b2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_22b2dc:
    // 0x22b2dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22b2e0:
    // 0x22b2e0: 0x8c423ea0  lw          $v0, 0x3EA0($v0)
    ctx->pc = 0x22b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16032)));
label_22b2e4:
    // 0x22b2e4: 0x24700fc8  addiu       $s0, $v1, 0xFC8
    ctx->pc = 0x22b2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_22b2e8:
    // 0x22b2e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22b2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22b2ec:
    // 0x22b2ec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22b2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_22b2f0:
    // 0x22b2f0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_22b2f4:
    // 0x22b2f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22b2f8:
    // 0x22b2f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22b2f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22b2fc:
    // 0x22b2fc: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x22b2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_22b300:
    // 0x22b300: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_22b304:
    if (ctx->pc == 0x22B304u) {
        ctx->pc = 0x22B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B300u;
        // 0x22b304: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B308u;
        goto label_22b308;
    }
    ctx->pc = 0x22B300u;
    {
        const bool branch_taken_0x22b300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B300u;
        // 0x22b304: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b300) {
            ctx->pc = 0x22B328u;
            goto label_22b328;
        }
    }
    ctx->pc = 0x22B308u;
label_22b308:
    // 0x22b308: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x22b308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_22b30c:
    // 0x22b30c: 0x60f809  jalr        $v1
label_22b310:
    if (ctx->pc == 0x22B310u) {
        ctx->pc = 0x22B314u;
        goto label_22b314;
    }
    ctx->pc = 0x22B30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22B314u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B30Cu, 0x22B314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B314u;
label_22b314:
    // 0x22b314: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22b314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22b318:
    // 0x22b318: 0x8c423ea0  lw          $v0, 0x3EA0($v0)
    ctx->pc = 0x22b318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16032)));
label_22b31c:
    // 0x22b31c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_22b320:
    // 0x22b320: 0xa4400028  sh          $zero, 0x28($v0)
    ctx->pc = 0x22b320u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 0));
label_22b324:
    // 0x22b324: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x22b324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_22b328:
    // 0x22b328: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22b328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22b32c:
    // 0x22b32c: 0x8c423ea0  lw          $v0, 0x3EA0($v0)
    ctx->pc = 0x22b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16032)));
label_22b330:
    // 0x22b330: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x22b330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_22b334:
    // 0x22b334: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x22b334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_22b338:
    // 0x22b338: 0x5060001e  beql        $v1, $zero, . + 4 + (0x1E << 2)
label_22b33c:
    if (ctx->pc == 0x22B33Cu) {
        ctx->pc = 0x22B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B338u;
        // 0x22b33c: 0x26500fc8  addiu       $s0, $s2, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B340u;
        goto label_22b340;
    }
    ctx->pc = 0x22B338u;
    {
        const bool branch_taken_0x22b338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b338) {
            ctx->pc = 0x22B33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B338u;
            // 0x22b33c: 0x26500fc8  addiu       $s0, $s2, 0xFC8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4040));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B3B4u;
            goto label_22b3b4;
        }
    }
    ctx->pc = 0x22B340u;
label_22b340:
    // 0x22b340: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x22b340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_22b344:
    // 0x22b344: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_22b348:
    if (ctx->pc == 0x22B348u) {
        ctx->pc = 0x22B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B344u;
        // 0x22b348: 0x8f828e30  lw          $v0, -0x71D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B34Cu;
        goto label_22b34c;
    }
    ctx->pc = 0x22B344u;
    {
        const bool branch_taken_0x22b344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B344u;
        // 0x22b348: 0x8f828e30  lw          $v0, -0x71D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b344) {
            ctx->pc = 0x22B37Cu;
            goto label_22b37c;
        }
    }
    ctx->pc = 0x22B34Cu;
label_22b34c:
    // 0x22b34c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x22b34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22b350:
    // 0x22b350: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
label_22b354:
    if (ctx->pc == 0x22B354u) {
        ctx->pc = 0x22B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B350u;
        // 0x22b354: 0x2464fff0  addiu       $a0, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B358u;
        goto label_22b358;
    }
    ctx->pc = 0x22B350u;
    {
        const bool branch_taken_0x22b350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x22B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B350u;
        // 0x22b354: 0x2464fff0  addiu       $a0, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b350) {
            ctx->pc = 0x22B374u;
            goto label_22b374;
        }
    }
    ctx->pc = 0x22B358u;
label_22b358:
    // 0x22b358: 0x8f8283d0  lw          $v0, -0x7C30($gp)
    ctx->pc = 0x22b358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935504)));
label_22b35c:
    // 0x22b35c: 0x0  nop
    ctx->pc = 0x22b35cu;
    // NOP
label_22b360:
    // 0x22b360: 0x1482fffb  bne         $a0, $v0, . + 4 + (-0x5 << 2)
label_22b364:
    if (ctx->pc == 0x22B364u) {
        ctx->pc = 0x22B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B360u;
        // 0x22b364: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B368u;
        goto label_22b368;
    }
    ctx->pc = 0x22B360u;
    {
        const bool branch_taken_0x22b360 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x22B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B360u;
        // 0x22b364: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b360) {
            ctx->pc = 0x22B350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22b350;
        }
    }
    ctx->pc = 0x22B368u;
label_22b368:
    // 0x22b368: 0xc08aaec  jal         func_22ABB0
label_22b36c:
    if (ctx->pc == 0x22B36Cu) {
        ctx->pc = 0x22B370u;
        goto label_22b370;
    }
    ctx->pc = 0x22B368u;
    SET_GPR_U32(ctx, 31, 0x22B370u);
    ctx->pc = 0x22ABB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ABB0u, 0x22B368u, 0x22B370u)) {
        return;
    }
    ctx->pc = 0x22B370u;
label_22b370:
    // 0x22b370: 0xaf8083d0  sw          $zero, -0x7C30($gp)
    ctx->pc = 0x22b370u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935504), GPR_U32(ctx, 0));
label_22b374:
    // 0x22b374: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22b374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22b378:
    // 0x22b378: 0x8c423ea0  lw          $v0, 0x3EA0($v0)
    ctx->pc = 0x22b378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16032)));
label_22b37c:
    // 0x22b37c: 0x26500fc8  addiu       $s0, $s2, 0xFC8
    ctx->pc = 0x22b37cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4040));
label_22b380:
    // 0x22b380: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22b380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_22b384:
    // 0x22b384: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x22b384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_22b388:
    // 0x22b388: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_22b38c:
    if (ctx->pc == 0x22B38Cu) {
        ctx->pc = 0x22B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B388u;
        // 0x22b38c: 0x8f828e30  lw          $v0, -0x71D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B390u;
        goto label_22b390;
    }
    ctx->pc = 0x22B388u;
    {
        const bool branch_taken_0x22b388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B388u;
        // 0x22b38c: 0x8f828e30  lw          $v0, -0x71D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b388) {
            ctx->pc = 0x22B3B4u;
            goto label_22b3b4;
        }
    }
    ctx->pc = 0x22B390u;
label_22b390:
    // 0x22b390: 0xc093106  jal         func_24C418
label_22b394:
    if (ctx->pc == 0x22B394u) {
        ctx->pc = 0x22B398u;
        goto label_22b398;
    }
    ctx->pc = 0x22B390u;
    SET_GPR_U32(ctx, 31, 0x22B398u);
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x22B390u, 0x22B398u)) {
        return;
    }
    ctx->pc = 0x22B398u;
label_22b398:
    // 0x22b398: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22b398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_22b39c:
    // 0x22b39c: 0x8c633ea0  lw          $v1, 0x3EA0($v1)
    ctx->pc = 0x22b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16032)));
label_22b3a0:
    // 0x22b3a0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x22b3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_22b3a4:
    // 0x22b3a4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x22b3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_22b3a8:
    // 0x22b3a8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22b3ac:
    // 0x22b3ac: 0x8c423ea0  lw          $v0, 0x3EA0($v0)
    ctx->pc = 0x22b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16032)));
label_22b3b0:
    // 0x22b3b0: 0x26500fc8  addiu       $s0, $s2, 0xFC8
    ctx->pc = 0x22b3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4040));
label_22b3b4:
    // 0x22b3b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_22b3b8:
    // 0x22b3b8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x22b3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_22b3bc:
    // 0x22b3bc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_22b3c0:
    if (ctx->pc == 0x22B3C0u) {
        ctx->pc = 0x22B3C4u;
        goto label_22b3c4;
    }
    ctx->pc = 0x22B3BCu;
    {
        const bool branch_taken_0x22b3bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b3bc) {
            ctx->pc = 0x22B3DCu;
            goto label_22b3dc;
        }
    }
    ctx->pc = 0x22B3C4u;
label_22b3c4:
    // 0x22b3c4: 0xc093106  jal         func_24C418
label_22b3c8:
    if (ctx->pc == 0x22B3C8u) {
        ctx->pc = 0x22B3CCu;
        goto label_22b3cc;
    }
    ctx->pc = 0x22B3C4u;
    SET_GPR_U32(ctx, 31, 0x22B3CCu);
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x22B3C4u, 0x22B3CCu)) {
        return;
    }
    ctx->pc = 0x22B3CCu;
label_22b3cc:
    // 0x22b3cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_22b3d0:
    // 0x22b3d0: 0x8c633ea0  lw          $v1, 0x3EA0($v1)
    ctx->pc = 0x22b3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16032)));
label_22b3d4:
    // 0x22b3d4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x22b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_22b3d8:
    // 0x22b3d8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x22b3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_22b3dc:
    // 0x22b3dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_22b3e0:
    // 0x22b3e0: 0x8c633ea4  lw          $v1, 0x3EA4($v1)
    ctx->pc = 0x22b3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16036)));
label_22b3e4:
    // 0x22b3e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22b3e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b3e8:
    // 0x22b3e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22b3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22b3ec:
    // 0x22b3ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22b3f0:
    // 0x22b3f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22b3f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22b3f4:
    // 0x22b3f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22b3f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22b3f8:
    // 0x22b3f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22b3fc:
    // 0x22b3fc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22b3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22b400:
    // 0x22b400: 0xac233ea4  sw          $v1, 0x3EA4($at)
    ctx->pc = 0x22b400u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16036), GPR_U32(ctx, 3));
label_22b404:
    // 0x22b404: 0x3e00008  jr          $ra
label_22b408:
    if (ctx->pc == 0x22B408u) {
        ctx->pc = 0x22B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B404u;
        // 0x22b408: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B40Cu;
        goto label_22b40c;
    }
    ctx->pc = 0x22B404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B404u;
        // 0x22b408: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B40Cu;
label_22b40c:
    // 0x22b40c: 0x0  nop
    ctx->pc = 0x22b40cu;
    // NOP
label_22b410:
    // 0x22b410: 0xaf85c000  sw          $a1, -0x4000($gp)
    ctx->pc = 0x22b410u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950912), GPR_U32(ctx, 5));
label_22b414:
    // 0x22b414: 0x0  nop
    ctx->pc = 0x22b414u;
    // NOP
label_22b418:
    // 0x22b418: 0xaf85c000  sw          $a1, -0x4000($gp)
    ctx->pc = 0x22b418u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950912), GPR_U32(ctx, 5));
label_22b41c:
    // 0x22b41c: 0x0  nop
    ctx->pc = 0x22b41cu;
    // NOP
    ctx->pc = 0x22b420u;
}
