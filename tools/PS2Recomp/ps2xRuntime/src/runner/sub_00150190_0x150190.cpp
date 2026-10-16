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

// Function: sub_00150190
// Address: 0x150190 - 0x150228
void sub_00150190_0x150190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150190_0x150190");
#endif

    switch (ctx->pc) {
        case 0x1501b8u: goto label_1501b8;
        case 0x1501c4u: goto label_1501c4;
        case 0x1501d4u: goto label_1501d4;
        default: break;
    }

    ctx->pc = 0x150190u;

    // 0x150190: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x150190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x150194: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x150194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x150198: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x150198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15019c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x15019cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1501a0: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x1501a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1501a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1501a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1501a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1501a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1501ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1501acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1501b0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1501b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1501b4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1501b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1501b8:
    // 0x1501b8: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x1501b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x1501bc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1501BCu;
    SET_GPR_U32(ctx, 31, 0x1501C4u);
    ctx->pc = 0x1501C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1501BCu;
    // 0x1501c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1501BCu, 0x1501C4u)) {
        return;
    }
    ctx->pc = 0x1501C4u;
label_1501c4:
    // 0x1501c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1501c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1501c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1501c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1501cc: 0xc05352a  jal         func_14D4A8
    ctx->pc = 0x1501CCu;
    SET_GPR_U32(ctx, 31, 0x1501D4u);
    ctx->pc = 0x1501D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1501CCu;
    // 0x1501d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D4A8u, 0x1501CCu, 0x1501D4u)) {
        return;
    }
    ctx->pc = 0x1501D4u;
label_1501d4:
    // 0x1501d4: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x1501d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
    // 0x1501d8: 0xae000184  sw          $zero, 0x184($s0)
    ctx->pc = 0x1501d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 0));
    // 0x1501dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1501dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1501e0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1501E0u;
    {
        const bool branch_taken_0x1501e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1501e0) {
            ctx->pc = 0x1501E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1501E0u;
            // 0x1501e4: 0xac500184  sw          $s0, 0x184($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 388), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1501E8u;
            goto label_1501e8;
        }
    }
    ctx->pc = 0x1501E8u;
label_1501e8:
    // 0x1501e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1501e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1501ec: 0xae000184  sw          $zero, 0x184($s0)
    ctx->pc = 0x1501ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 0));
    // 0x1501f0: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x1501f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x1501f4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1501f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1501f8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1501f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1501fc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1501fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x150200: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150204: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x150204u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x150208: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x150208u;
    {
        const bool branch_taken_0x150208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150208u;
        // 0x15020c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150208) {
            ctx->pc = 0x1501B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1501b8;
        }
    }
    ctx->pc = 0x150210u;
    // 0x150210: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x150210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150214: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x150214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150218: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x150218u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15021c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15021cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150220: 0x3e00008  jr          $ra
    ctx->pc = 0x150220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150220u;
        // 0x150224: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150228u;
}
