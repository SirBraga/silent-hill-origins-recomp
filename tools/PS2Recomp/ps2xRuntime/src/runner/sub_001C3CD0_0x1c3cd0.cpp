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

// Function: sub_001C3CD0
// Address: 0x1c3cd0 - 0x1c3d20
void sub_001C3CD0_0x1c3cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3CD0_0x1c3cd0");
#endif

    switch (ctx->pc) {
        case 0x1c3cf4u: goto label_1c3cf4;
        case 0x1c3d0cu: goto label_1c3d0c;
        default: break;
    }

    ctx->pc = 0x1c3cd0u;

    // 0x1c3cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c3cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c3cd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c3cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c3cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c3cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c3cdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c3cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ce0: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x1c3ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1c3ce4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C3CE4u;
    {
        const bool branch_taken_0x1c3ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3ce4) {
            ctx->pc = 0x1C3CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3CE4u;
            // 0x1c3ce8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3D10u;
            goto label_1c3d10;
        }
    }
    ctx->pc = 0x1C3CECu;
    // 0x1c3cec: 0xc0603e4  jal         func_180F90
    ctx->pc = 0x1C3CECu;
    SET_GPR_U32(ctx, 31, 0x1C3CF4u);
    ctx->pc = 0x180F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F90u, 0x1C3CECu, 0x1C3CF4u)) {
        return;
    }
    ctx->pc = 0x1C3CF4u;
label_1c3cf4:
    // 0x1c3cf4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3CF4u;
    {
        const bool branch_taken_0x1c3cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3cf4) {
            ctx->pc = 0x1C3CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3CF4u;
            // 0x1c3cf8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3D10u;
            goto label_1c3d10;
        }
    }
    ctx->pc = 0x1C3CFCu;
    // 0x1c3cfc: 0x8e05026c  lw          $a1, 0x26C($s0)
    ctx->pc = 0x1c3cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x1c3d00: 0x8e040264  lw          $a0, 0x264($s0)
    ctx->pc = 0x1c3d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1c3d04: 0xc06037e  jal         func_180DF8
    ctx->pc = 0x1C3D04u;
    SET_GPR_U32(ctx, 31, 0x1C3D0Cu);
    ctx->pc = 0x1C3D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D04u;
    // 0x1c3d08: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x180DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180DF8u, 0x1C3D04u, 0x1C3D0Cu)) {
        return;
    }
    ctx->pc = 0x1C3D0Cu;
label_1c3d0c:
    // 0x1c3d0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c3d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3d10:
    // 0x1c3d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c3d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3d14: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D14u;
        // 0x1c3d18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3D1Cu;
    // 0x1c3d1c: 0x0  nop
    ctx->pc = 0x1c3d1cu;
    // NOP
    ctx->pc = 0x1c3d20u;
}
