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

// Function: sub_00138D10
// Address: 0x138d10 - 0x138d58
void sub_00138D10_0x138d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138D10_0x138d10");
#endif

    switch (ctx->pc) {
        case 0x138d28u: goto label_138d28;
        case 0x138d3cu: goto label_138d3c;
        case 0x138d48u: goto label_138d48;
        default: break;
    }

    ctx->pc = 0x138d10u;

    // 0x138d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x138d14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x138d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x138d18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138d1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x138d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138d20: 0xc097a3e  jal         func_25E8F8
    ctx->pc = 0x138D20u;
    SET_GPR_U32(ctx, 31, 0x138D28u);
    ctx->pc = 0x138D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138D20u;
    // 0x138d24: 0x8e041ab0  lw          $a0, 0x1AB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6832)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E8F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E8F8u, 0x138D20u, 0x138D28u)) {
        return;
    }
    ctx->pc = 0x138D28u;
label_138d28:
    // 0x138d28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x138D28u;
    {
        const bool branch_taken_0x138d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D28u;
        // 0x138d2c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d28) {
            ctx->pc = 0x138D48u;
            goto label_138d48;
        }
    }
    ctx->pc = 0x138D30u;
    // 0x138d30: 0x8e051ab0  lw          $a1, 0x1AB0($s0)
    ctx->pc = 0x138d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6832)));
    // 0x138d34: 0xc05eeb4  jal         func_17BAD0
    ctx->pc = 0x138D34u;
    SET_GPR_U32(ctx, 31, 0x138D3Cu);
    ctx->pc = 0x138D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138D34u;
    // 0x138d38: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BAD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BAD0u, 0x138D34u, 0x138D3Cu)) {
        return;
    }
    ctx->pc = 0x138D3Cu;
label_138d3c:
    // 0x138d3c: 0x8e041ab0  lw          $a0, 0x1AB0($s0)
    ctx->pc = 0x138d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6832)));
    // 0x138d40: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x138D40u;
    SET_GPR_U32(ctx, 31, 0x138D48u);
    ctx->pc = 0x138D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138D40u;
    // 0x138d44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x138D40u, 0x138D48u)) {
        return;
    }
    ctx->pc = 0x138D48u;
label_138d48:
    // 0x138d48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x138d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138d4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138d50: 0x3e00008  jr          $ra
    ctx->pc = 0x138D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D50u;
        // 0x138d54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138D58u;
}
