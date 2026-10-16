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

// Function: sub_00169EB8
// Address: 0x169eb8 - 0x169f28
void sub_00169EB8_0x169eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169EB8_0x169eb8");
#endif

    switch (ctx->pc) {
        case 0x169ed4u: goto label_169ed4;
        case 0x169ef8u: goto label_169ef8;
        case 0x169f10u: goto label_169f10;
        default: break;
    }

    ctx->pc = 0x169eb8u;

    // 0x169eb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x169ebc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x169ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x169ec0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x169ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x169ec4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x169ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169ecc: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x169ECCu;
    SET_GPR_U32(ctx, 31, 0x169ED4u);
    ctx->pc = 0x169ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169ECCu;
    // 0x169ed0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x169ECCu, 0x169ED4u)) {
        return;
    }
    ctx->pc = 0x169ED4u;
label_169ed4:
    // 0x169ed4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x169ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x169ed8: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x169ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x169edc: 0x56020008  bnel        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x169EDCu;
    {
        const bool branch_taken_0x169edc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x169edc) {
            ctx->pc = 0x169EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169EDCu;
            // 0x169ee0: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169F00u;
            goto label_169f00;
        }
    }
    ctx->pc = 0x169EE4u;
    // 0x169ee4: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x169ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x169ee8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x169EE8u;
    {
        const bool branch_taken_0x169ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EE8u;
        // 0x169eec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ee8) {
            ctx->pc = 0x169F14u;
            goto label_169f14;
        }
    }
    ctx->pc = 0x169EF0u;
    // 0x169ef0: 0xc05a7d8  jal         func_169F60
    ctx->pc = 0x169EF0u;
    SET_GPR_U32(ctx, 31, 0x169EF8u);
    ctx->pc = 0x169EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169EF0u;
    // 0x169ef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169F60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x169F60u, 0x169EF0u, 0x169EF8u)) {
        return;
    }
    ctx->pc = 0x169EF8u;
label_169ef8:
    // 0x169ef8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x169EF8u;
    {
        const bool branch_taken_0x169ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EF8u;
        // 0x169efc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ef8) {
            ctx->pc = 0x169F14u;
            goto label_169f14;
        }
    }
    ctx->pc = 0x169F00u;
label_169f00:
    // 0x169f00: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169F00u;
    {
        const bool branch_taken_0x169f00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x169F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F00u;
        // 0x169f04: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f00) {
            ctx->pc = 0x169F14u;
            goto label_169f14;
        }
    }
    ctx->pc = 0x169F08u;
    // 0x169f08: 0xc05a7ca  jal         func_169F28
    ctx->pc = 0x169F08u;
    SET_GPR_U32(ctx, 31, 0x169F10u);
    ctx->pc = 0x169F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169F08u;
    // 0x169f0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169F28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x169F28u, 0x169F08u, 0x169F10u)) {
        return;
    }
    ctx->pc = 0x169F10u;
label_169f10:
    // 0x169f10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x169f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_169f14:
    // 0x169f14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169f18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x169F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F1Cu;
        // 0x169f20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169F24u;
    // 0x169f24: 0x0  nop
    ctx->pc = 0x169f24u;
    // NOP
    ctx->pc = 0x169f28u;
}
