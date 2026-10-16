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

// Function: sub_00224BD8
// Address: 0x224bd8 - 0x224c48
void sub_00224BD8_0x224bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224BD8_0x224bd8");
#endif

    switch (ctx->pc) {
        case 0x224c00u: goto label_224c00;
        case 0x224c08u: goto label_224c08;
        case 0x224c18u: goto label_224c18;
        case 0x224c20u: goto label_224c20;
        case 0x224c30u: goto label_224c30;
        default: break;
    }

    ctx->pc = 0x224bd8u;

    // 0x224bd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224bdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x224bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224be0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x224be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x224be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224be8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224bec: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x224becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x224bf0: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x224BF0u;
    {
        const bool branch_taken_0x224bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x224bf0) {
            ctx->pc = 0x224C10u;
            goto label_224c10;
        }
    }
    ctx->pc = 0x224BF8u;
    // 0x224bf8: 0xc0890b4  jal         func_2242D0
    ctx->pc = 0x224BF8u;
    SET_GPR_U32(ctx, 31, 0x224C00u);
    ctx->pc = 0x2242D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2242D0u, 0x224BF8u, 0x224C00u)) {
        return;
    }
    ctx->pc = 0x224C00u;
label_224c00:
    // 0x224c00: 0xc088e7a  jal         func_2239E8
    ctx->pc = 0x224C00u;
    SET_GPR_U32(ctx, 31, 0x224C08u);
    ctx->pc = 0x224C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C00u;
    // 0x224c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2239E8u, 0x224C00u, 0x224C08u)) {
        return;
    }
    ctx->pc = 0x224C08u;
label_224c08:
    // 0x224c08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x224C08u;
    {
        const bool branch_taken_0x224c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C08u;
        // 0x224c0c: 0x2604010c  addiu       $a0, $s0, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c08) {
            ctx->pc = 0x224C24u;
            goto label_224c24;
        }
    }
    ctx->pc = 0x224C10u;
label_224c10:
    // 0x224c10: 0xc089280  jal         func_224A00
    ctx->pc = 0x224C10u;
    SET_GPR_U32(ctx, 31, 0x224C18u);
    ctx->pc = 0x224C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C10u;
    // 0x224c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224A00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224A00u, 0x224C10u, 0x224C18u)) {
        return;
    }
    ctx->pc = 0x224C18u;
label_224c18:
    // 0x224c18: 0xc08912a  jal         func_2244A8
    ctx->pc = 0x224C18u;
    SET_GPR_U32(ctx, 31, 0x224C20u);
    ctx->pc = 0x224C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C18u;
    // 0x224c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2244A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2244A8u, 0x224C18u, 0x224C20u)) {
        return;
    }
    ctx->pc = 0x224C20u;
label_224c20:
    // 0x224c20: 0x2604010c  addiu       $a0, $s0, 0x10C
    ctx->pc = 0x224c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
label_224c24:
    // 0x224c24: 0x26050124  addiu       $a1, $s0, 0x124
    ctx->pc = 0x224c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x224c28: 0xc088b4a  jal         func_222D28
    ctx->pc = 0x224C28u;
    SET_GPR_U32(ctx, 31, 0x224C30u);
    ctx->pc = 0x224C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C28u;
    // 0x224c2c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222D28u, 0x224C28u, 0x224C30u)) {
        return;
    }
    ctx->pc = 0x224C30u;
label_224c30:
    // 0x224c30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x224c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224c38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x224c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x224C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C3Cu;
        // 0x224c40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224C44u;
    // 0x224c44: 0x0  nop
    ctx->pc = 0x224c44u;
    // NOP
    ctx->pc = 0x224c48u;
}
