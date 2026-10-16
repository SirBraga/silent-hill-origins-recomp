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

// Function: sub_00171258
// Address: 0x171258 - 0x171290
void sub_00171258_0x171258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171258_0x171258");
#endif

    switch (ctx->pc) {
        case 0x17126cu: goto label_17126c;
        case 0x171280u: goto label_171280;
        default: break;
    }

    ctx->pc = 0x171258u;

    // 0x171258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17125c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17125cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x171260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171264: 0xc05c518  jal         func_171460
    ctx->pc = 0x171264u;
    SET_GPR_U32(ctx, 31, 0x17126Cu);
    ctx->pc = 0x171268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171264u;
    // 0x171268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x171460u, 0x171264u, 0x17126Cu)) {
        return;
    }
    ctx->pc = 0x17126Cu;
label_17126c:
    // 0x17126c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x17126cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x171270: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x171270u;
    {
        const bool branch_taken_0x171270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171270) {
            ctx->pc = 0x171274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171270u;
            // 0x171274: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171284u;
            goto label_171284;
        }
    }
    ctx->pc = 0x171278u;
    // 0x171278: 0xc05c3bc  jal         func_170EF0
    ctx->pc = 0x171278u;
    SET_GPR_U32(ctx, 31, 0x171280u);
    ctx->pc = 0x17127Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171278u;
    // 0x17127c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x170EF0u, 0x171278u, 0x171280u)) {
        return;
    }
    ctx->pc = 0x171280u;
label_171280:
    // 0x171280: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x171280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_171284:
    // 0x171284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171288: 0x3e00008  jr          $ra
    ctx->pc = 0x171288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171288u;
        // 0x17128c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171290u;
}
