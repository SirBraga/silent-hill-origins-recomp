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

// Function: sub_00167260
// Address: 0x167260 - 0x1672b8
void sub_00167260_0x167260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167260_0x167260");
#endif

    switch (ctx->pc) {
        case 0x16727cu: goto label_16727c;
        case 0x1672a4u: goto label_1672a4;
        default: break;
    }

    ctx->pc = 0x167260u;

    // 0x167260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167264: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x167264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x167268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16726c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16726cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167270: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x167270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x167274: 0xc09793e  jal         func_25E4F8
    ctx->pc = 0x167274u;
    SET_GPR_U32(ctx, 31, 0x16727Cu);
    ctx->pc = 0x167278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167274u;
    // 0x167278: 0x8e040068  lw          $a0, 0x68($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E4F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E4F8u, 0x167274u, 0x16727Cu)) {
        return;
    }
    ctx->pc = 0x16727Cu;
label_16727c:
    // 0x16727c: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x16727cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x167280: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x167280u;
    {
        const bool branch_taken_0x167280 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x167284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167280u;
        // 0x167284: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167280) {
            ctx->pc = 0x1672A4u;
            goto label_1672a4;
        }
    }
    ctx->pc = 0x167288u;
    // 0x167288: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x167288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    // 0x16728c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x16728cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x167290: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x167290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x167294: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x167294u;
    {
        const bool branch_taken_0x167294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x167294) {
            ctx->pc = 0x167298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167294u;
            // 0x167298: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16729Cu;
            goto label_16729c;
        }
    }
    ctx->pc = 0x16729Cu;
label_16729c:
    // 0x16729c: 0xc09799a  jal         func_25E668
    ctx->pc = 0x16729Cu;
    SET_GPR_U32(ctx, 31, 0x1672A4u);
    ctx->pc = 0x25E668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E668u, 0x16729Cu, 0x1672A4u)) {
        return;
    }
    ctx->pc = 0x1672A4u;
label_1672a4:
    // 0x1672a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1672a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1672a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1672a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1672ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1672ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1672B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672ACu;
        // 0x1672b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1672ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1672B4u;
    // 0x1672b4: 0x0  nop
    ctx->pc = 0x1672b4u;
    // NOP
    ctx->pc = 0x1672b8u;
}
