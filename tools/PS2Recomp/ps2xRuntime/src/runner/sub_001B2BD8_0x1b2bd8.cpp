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

// Function: sub_001B2BD8
// Address: 0x1b2bd8 - 0x1b2c20
void sub_001B2BD8_0x1b2bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2BD8_0x1b2bd8");
#endif

    switch (ctx->pc) {
        case 0x1b2bfcu: goto label_1b2bfc;
        case 0x1b2c0cu: goto label_1b2c0c;
        default: break;
    }

    ctx->pc = 0x1b2bd8u;

    // 0x1b2bd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2bdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b2bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b2be0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2be4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2be8: 0x8e040210  lw          $a0, 0x210($s0)
    ctx->pc = 0x1b2be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x1b2bec: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2BECu;
    {
        const bool branch_taken_0x1b2bec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2bec) {
            ctx->pc = 0x1B2BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2BECu;
            // 0x1b2bf0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2C10u;
            goto label_1b2c10;
        }
    }
    ctx->pc = 0x1B2BF4u;
    // 0x1b2bf4: 0xc091c52  jal         func_247148
    ctx->pc = 0x1B2BF4u;
    SET_GPR_U32(ctx, 31, 0x1B2BFCu);
    ctx->pc = 0x1B2BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2BF4u;
    // 0x1b2bf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247148u, 0x1B2BF4u, 0x1B2BFCu)) {
        return;
    }
    ctx->pc = 0x1B2BFCu;
label_1b2bfc:
    // 0x1b2bfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2c00: 0x8e040210  lw          $a0, 0x210($s0)
    ctx->pc = 0x1b2c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x1b2c04: 0xc0761ce  jal         func_1D8738
    ctx->pc = 0x1B2C04u;
    SET_GPR_U32(ctx, 31, 0x1B2C0Cu);
    ctx->pc = 0x1B2C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C04u;
    // 0x1b2c08: 0xae020214  sw          $v0, 0x214($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8738u, 0x1B2C04u, 0x1B2C0Cu)) {
        return;
    }
    ctx->pc = 0x1B2C0Cu;
label_1b2c0c:
    // 0x1b2c0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b2c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b2c10:
    // 0x1b2c10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2c14: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C14u;
        // 0x1b2c18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2C1Cu;
    // 0x1b2c1c: 0x0  nop
    ctx->pc = 0x1b2c1cu;
    // NOP
    ctx->pc = 0x1b2c20u;
}
