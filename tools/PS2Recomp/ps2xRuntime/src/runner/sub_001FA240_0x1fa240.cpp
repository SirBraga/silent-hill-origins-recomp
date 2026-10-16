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

// Function: sub_001FA240
// Address: 0x1fa240 - 0x1fa348
void sub_001FA240_0x1fa240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA240_0x1fa240");
#endif

    switch (ctx->pc) {
        case 0x1fa27cu: goto label_1fa27c;
        case 0x1fa290u: goto label_1fa290;
        case 0x1fa2b0u: goto label_1fa2b0;
        case 0x1fa2c4u: goto label_1fa2c4;
        case 0x1fa2e8u: goto label_1fa2e8;
        case 0x1fa2f4u: goto label_1fa2f4;
        case 0x1fa320u: goto label_1fa320;
        default: break;
    }

    ctx->pc = 0x1fa240u;

    // 0x1fa240: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fa240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fa244: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fa244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa248: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1fa248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1fa24c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fa24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1fa250: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fa250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa254: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1fa254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1fa258: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1fa258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1fa25c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fa25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1fa260: 0x24a52d30  addiu       $a1, $a1, 0x2D30
    ctx->pc = 0x1fa260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11568));
    // 0x1fa264: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1fa264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fa268: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fa268u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa26c: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x1fa26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
    // 0x1fa270: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa274: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1FA274u;
    SET_GPR_U32(ctx, 31, 0x1FA27Cu);
    ctx->pc = 0x1FA278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA274u;
    // 0x1fa278: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1FA274u, 0x1FA27Cu)) {
        return;
    }
    ctx->pc = 0x1FA27Cu;
label_1fa27c:
    // 0x1fa27c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FA27Cu;
    {
        const bool branch_taken_0x1fa27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA27Cu;
        // 0x1fa280: 0x3c10006a  lui         $s0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa27c) {
            ctx->pc = 0x1FA2A8u;
            goto label_1fa2a8;
        }
    }
    ctx->pc = 0x1FA284u;
    // 0x1fa284: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1fa284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fa288: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1FA288u;
    SET_GPR_U32(ctx, 31, 0x1FA290u);
    ctx->pc = 0x1FA28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA288u;
    // 0x1fa28c: 0x26052d38  addiu       $a1, $s0, 0x2D38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1FA288u, 0x1FA290u)) {
        return;
    }
    ctx->pc = 0x1FA290u;
label_1fa290:
    // 0x1fa290: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA290u;
    {
        const bool branch_taken_0x1fa290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA290u;
        // 0x1fa294: 0x2404007a  addiu       $a0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa290) {
            ctx->pc = 0x1FA2A8u;
            goto label_1fa2a8;
        }
    }
    ctx->pc = 0x1FA298u;
    // 0x1fa298: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fa298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fa29c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1fa29cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa2a0: 0x14640022  bne         $v1, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1FA2A0u;
    {
        const bool branch_taken_0x1fa2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FA2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2A0u;
        // 0x1fa2a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa2a0) {
            ctx->pc = 0x1FA32Cu;
            goto label_1fa32c;
        }
    }
    ctx->pc = 0x1FA2A8u;
label_1fa2a8:
    // 0x1fa2a8: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x1FA2A8u;
    SET_GPR_U32(ctx, 31, 0x1FA2B0u);
    ctx->pc = 0x1FA2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA2A8u;
    // 0x1fa2ac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x1FA2A8u, 0x1FA2B0u)) {
        return;
    }
    ctx->pc = 0x1FA2B0u;
label_1fa2b0:
    // 0x1fa2b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1fa2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fa2b4: 0x26052d38  addiu       $a1, $s0, 0x2D38
    ctx->pc = 0x1fa2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11576));
    // 0x1fa2b8: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x1fa2b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fa2bc: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1FA2BCu;
    SET_GPR_U32(ctx, 31, 0x1FA2C4u);
    ctx->pc = 0x1FA2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA2BCu;
    // 0x1fa2c0: 0x26500001  addiu       $s0, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1FA2BCu, 0x1FA2C4u)) {
        return;
    }
    ctx->pc = 0x1FA2C4u;
label_1fa2c4:
    // 0x1fa2c4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA2C4u;
    {
        const bool branch_taken_0x1fa2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa2c4) {
            ctx->pc = 0x1FA2C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA2C4u;
            // 0x1fa2c8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA2DCu;
            goto label_1fa2dc;
        }
    }
    ctx->pc = 0x1FA2CCu;
    // 0x1fa2cc: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x1fa2ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x1fa2d0: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x1fa2d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x1fa2d4: 0x26500005  addiu       $s0, $s2, 0x5
    ctx->pc = 0x1fa2d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x1fa2d8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1fa2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1fa2dc:
    // 0x1fa2dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa2e0: 0xc07e6d2  jal         func_1F9B48
    ctx->pc = 0x1FA2E0u;
    SET_GPR_U32(ctx, 31, 0x1FA2E8u);
    ctx->pc = 0x1FA2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA2E0u;
    // 0x1fa2e4: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9B48u, 0x1FA2E0u, 0x1FA2E8u)) {
        return;
    }
    ctx->pc = 0x1FA2E8u;
label_1fa2e8:
    // 0x1fa2e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa2ec: 0xc07e6e4  jal         func_1F9B90
    ctx->pc = 0x1FA2ECu;
    SET_GPR_U32(ctx, 31, 0x1FA2F4u);
    ctx->pc = 0x1FA2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA2ECu;
    // 0x1fa2f0: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9B90u, 0x1FA2ECu, 0x1FA2F4u)) {
        return;
    }
    ctx->pc = 0x1FA2F4u;
label_1fa2f4:
    // 0x1fa2f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fa2f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa2f8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1fa2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fa2fc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1fa2fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa300: 0x2404007a  addiu       $a0, $zero, 0x7A
    ctx->pc = 0x1fa300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x1fa304: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1fa304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x1fa308: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1fa308u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fa30c: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA30Cu;
    {
        const bool branch_taken_0x1fa30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FA310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA30Cu;
        // 0x1fa310: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa30c) {
            ctx->pc = 0x1FA328u;
            goto label_1fa328;
        }
    }
    ctx->pc = 0x1FA314u;
    // 0x1fa314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa318: 0xc07e6d2  jal         func_1F9B48
    ctx->pc = 0x1FA318u;
    SET_GPR_U32(ctx, 31, 0x1FA320u);
    ctx->pc = 0x1FA31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA318u;
    // 0x1fa31c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9B48u, 0x1FA318u, 0x1FA320u)) {
        return;
    }
    ctx->pc = 0x1FA320u;
label_1fa320:
    // 0x1fa320: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fa320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa324: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1fa324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fa328:
    // 0x1fa328: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fa328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fa32c:
    // 0x1fa32c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fa32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fa330: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1fa330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa334: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1fa334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa338: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fa338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa33c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA33Cu;
        // 0x1fa340: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA344u;
    // 0x1fa344: 0x0  nop
    ctx->pc = 0x1fa344u;
    // NOP
    ctx->pc = 0x1fa348u;
}
