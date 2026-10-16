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

// Function: sub_00174148
// Address: 0x174148 - 0x1741d0
void sub_00174148_0x174148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174148_0x174148");
#endif

    switch (ctx->pc) {
        case 0x174180u: goto label_174180;
        case 0x17419cu: goto label_17419c;
        default: break;
    }

    ctx->pc = 0x174148u;

    // 0x174148: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x174148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x17414c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17414cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x174150: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x174150u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x174154: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x174154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x174158: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x174158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x17415c: 0x24840078  addiu       $a0, $a0, 0x78
    ctx->pc = 0x17415cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    // 0x174160: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x174160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x174164: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x174164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174168: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x174168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x17416c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17416cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174170: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x174170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x174174: 0x3c130017  lui         $s3, 0x17
    ctx->pc = 0x174174u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
    // 0x174178: 0xc48821  addu        $s1, $a2, $a0
    ctx->pc = 0x174178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x17417c: 0x0  nop
    ctx->pc = 0x17417cu;
    // NOP
label_174180:
    // 0x174180: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x174180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x174184: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x174184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x174188: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x174188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x17418c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17418cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174190: 0x266543a8  addiu       $a1, $s3, 0x43A8
    ctx->pc = 0x174190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 17320));
    // 0x174194: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x174194u;
    SET_GPR_U32(ctx, 31, 0x17419Cu);
    ctx->pc = 0x174198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174194u;
    // 0x174198: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2266F0u, 0x174194u, 0x17419Cu)) {
        return;
    }
    ctx->pc = 0x17419Cu;
label_17419c:
    // 0x17419c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17419cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1741a0: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1741a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1741a4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1741a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1741a8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1741A8u;
    {
        const bool branch_taken_0x1741a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1741ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1741A8u;
        // 0x1741ac: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1741a8) {
            ctx->pc = 0x174180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174180;
        }
    }
    ctx->pc = 0x1741B0u;
    // 0x1741b0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1741b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1741b4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1741b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1741b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1741b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1741bc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1741bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1741c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1741c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1741c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1741C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1741C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1741C4u;
        // 0x1741c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1741C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1741CCu;
    // 0x1741cc: 0x0  nop
    ctx->pc = 0x1741ccu;
    // NOP
    ctx->pc = 0x1741d0u;
}
