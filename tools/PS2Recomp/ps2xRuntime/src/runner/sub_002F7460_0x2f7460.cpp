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

// Function: sub_002F7460
// Address: 0x2f7460 - 0x2f7560
void sub_002F7460_0x2f7460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7460_0x2f7460");
#endif

    switch (ctx->pc) {
        case 0x2f749cu: goto label_2f749c;
        case 0x2f7508u: goto label_2f7508;
        case 0x2f7518u: goto label_2f7518;
        case 0x2f752cu: goto label_2f752c;
        case 0x2f753cu: goto label_2f753c;
        default: break;
    }

    ctx->pc = 0x2f7460u;

    // 0x2f7460: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f7460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f7464: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2f7464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2f7468: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f7468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f746c: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2f746cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2f7470: 0x828018  mult        $s0, $a0, $v0
    ctx->pc = 0x2f7470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2f7474: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f7474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f7478: 0x247114c8  addiu       $s1, $v1, 0x14C8
    ctx->pc = 0x2f7478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 5320));
    // 0x2f747c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f747cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f7480: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f7480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f7484: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x2f7484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2f7488: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f7488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f748c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f748cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f7490: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x2f7490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f7494: 0xc0be154  jal         func_2F8550
    ctx->pc = 0x2F7494u;
    SET_GPR_U32(ctx, 31, 0x2F749Cu);
    ctx->pc = 0x2F7498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7494u;
    // 0x2f7498: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F8550u, 0x2F7494u, 0x2F749Cu)) {
        return;
    }
    ctx->pc = 0x2F749Cu;
label_2f749c:
    // 0x2f749c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f749cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f74a0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F74A0u;
    {
        const bool branch_taken_0x2f74a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F74A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F74A0u;
        // 0x2f74a4: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f74a0) {
            ctx->pc = 0x2F74B0u;
            goto label_2f74b0;
        }
    }
    ctx->pc = 0x2F74A8u;
    // 0x2f74a8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2F74A8u;
    {
        const bool branch_taken_0x2f74a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F74ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F74A8u;
        // 0x2f74ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f74a8) {
            ctx->pc = 0x2F7540u;
            goto label_2f7540;
        }
    }
    ctx->pc = 0x2F74B0u;
label_2f74b0:
    // 0x2f74b0: 0x3c130072  lui         $s3, 0x72
    ctx->pc = 0x2f74b0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)114 << 16));
    // 0x2f74b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f74b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f74b8: 0x24072080  addiu       $a3, $zero, 0x2080
    ctx->pc = 0x2f74b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8320));
    // 0x2f74bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f74bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f74c0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2f74c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f74c4: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x2f74c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2f74c8: 0x26621540  addiu       $v0, $s3, 0x1540
    ctx->pc = 0x2f74c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5440));
    // 0x2f74cc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2f74ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2f74d0: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x2f74d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x2f74d4: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x2f74d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x721548u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721548u, _value); } while (0);
    // 0x2f74d8: 0x3c040072  lui         $a0, 0x72
    ctx->pc = 0x2f74d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)114 << 16));
    // 0x2f74dc: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x2f74dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x72154Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72154Cu, _value); } while (0);
    // 0x2f74e0: 0x248435c0  addiu       $a0, $a0, 0x35C0
    ctx->pc = 0x2f74e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13760));
    // 0x2f74e4: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2f74e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x721550u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721550u, _value); } while (0);
    // 0x2f74e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f74e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f74ec: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2f74ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x721558u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721558u, _value); } while (0);
    // 0x2f74f0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2f74f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f74f4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2f74f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x2f74f8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2f74f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f74fc: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2f74fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x721554u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721554u, _value); } while (0);
    // 0x2f7500: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2F7500u;
    SET_GPR_U32(ctx, 31, 0x2F7508u);
    ctx->pc = 0x2F7504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7500u;
    // 0x2f7504: 0x3c14002f  lui         $s4, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)47 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2F7500u, 0x2F7508u)) {
        return;
    }
    ctx->pc = 0x2F7508u;
label_2f7508:
    // 0x2f7508: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f7508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f750c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f750cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f7510: 0xae02664c  sw          $v0, 0x664C($s0)
    ctx->pc = 0x2f7510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26188), GPR_U32(ctx, 2));
    // 0x2f7514: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f7514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f7518:
    // 0x2f7518: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2f7518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f751c: 0x8e05664c  lw          $a1, 0x664C($s0)
    ctx->pc = 0x2f751cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26188)));
    // 0x2f7520: 0x26671540  addiu       $a3, $s3, 0x1540
    ctx->pc = 0x2f7520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 5440));
    // 0x2f7524: 0xc0be19a  jal         func_2F8668
    ctx->pc = 0x2F7524u;
    SET_GPR_U32(ctx, 31, 0x2F752Cu);
    ctx->pc = 0x2F7528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7524u;
    // 0x2f7528: 0x268870e8  addiu       $t0, $s4, 0x70E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 28904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F8668u, 0x2F7524u, 0x2F752Cu)) {
        return;
    }
    ctx->pc = 0x2F752Cu;
label_2f752c:
    // 0x2f752c: 0x5452fffa  bnel        $v0, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F752Cu;
    {
        const bool branch_taken_0x2f752c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2f752c) {
            ctx->pc = 0x2F7530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F752Cu;
            // 0x2f7530: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7518;
        }
    }
    ctx->pc = 0x2F7534u;
    // 0x2f7534: 0xc0bdbf0  jal         func_2F6FC0
    ctx->pc = 0x2F7534u;
    SET_GPR_U32(ctx, 31, 0x2F753Cu);
    ctx->pc = 0x2F6FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6FC0u, 0x2F7534u, 0x2F753Cu)) {
        return;
    }
    ctx->pc = 0x2F753Cu;
label_2f753c:
    // 0x2f753c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2f753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2f7540:
    // 0x2f7540: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f7540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f7544: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f7544u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f7548: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f7548u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f754c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f754cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7550: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f7550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7554: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f7554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7558: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7558u;
        // 0x2f755c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7560u;
}
