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

// Function: sub_00126E10
// Address: 0x126e10 - 0x126e90
void sub_00126E10_0x126e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126E10_0x126e10");
#endif

    switch (ctx->pc) {
        case 0x126e38u: goto label_126e38;
        case 0x126e50u: goto label_126e50;
        case 0x126e5cu: goto label_126e5c;
        case 0x126e74u: goto label_126e74;
        default: break;
    }

    ctx->pc = 0x126e10u;

    // 0x126e10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x126e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x126e14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x126e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x126e18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x126e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x126e1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x126e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e20: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x126e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x126e24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x126e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126e2c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x126e2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e30: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x126E30u;
    SET_GPR_U32(ctx, 31, 0x126E38u);
    ctx->pc = 0x126E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126E30u;
    // 0x126e34: 0x8e240f70  lw          $a0, 0xF70($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3952)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x126E30u, 0x126E38u)) {
        return;
    }
    ctx->pc = 0x126E38u;
label_126e38:
    // 0x126e38: 0xae200f70  sw          $zero, 0xF70($s1)
    ctx->pc = 0x126e38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3952), GPR_U32(ctx, 0));
    // 0x126e3c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x126e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x126e40: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x126E40u;
    {
        const bool branch_taken_0x126e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x126e40) {
            ctx->pc = 0x126E54u;
            goto label_126e54;
        }
    }
    ctx->pc = 0x126E48u;
    // 0x126e48: 0xc081b56  jal         func_206D58
    ctx->pc = 0x126E48u;
    SET_GPR_U32(ctx, 31, 0x126E50u);
    ctx->pc = 0x126E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126E48u;
    // 0x126e4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x126E48u, 0x126E50u)) {
        return;
    }
    ctx->pc = 0x126E50u;
label_126e50:
    // 0x126e50: 0xae220f70  sw          $v0, 0xF70($s1)
    ctx->pc = 0x126e50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3952), GPR_U32(ctx, 2));
label_126e54:
    // 0x126e54: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x126E54u;
    SET_GPR_U32(ctx, 31, 0x126E5Cu);
    ctx->pc = 0x126E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126E54u;
    // 0x126e58: 0x8e240f74  lw          $a0, 0xF74($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3956)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x126E54u, 0x126E5Cu)) {
        return;
    }
    ctx->pc = 0x126E5Cu;
label_126e5c:
    // 0x126e5c: 0xae200f74  sw          $zero, 0xF74($s1)
    ctx->pc = 0x126e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3956), GPR_U32(ctx, 0));
    // 0x126e60: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x126e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x126e64: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x126E64u;
    {
        const bool branch_taken_0x126e64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E64u;
        // 0x126e68: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e64) {
            ctx->pc = 0x126E7Cu;
            goto label_126e7c;
        }
    }
    ctx->pc = 0x126E6Cu;
    // 0x126e6c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x126E6Cu;
    SET_GPR_U32(ctx, 31, 0x126E74u);
    ctx->pc = 0x126E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126E6Cu;
    // 0x126e70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x126E6Cu, 0x126E74u)) {
        return;
    }
    ctx->pc = 0x126E74u;
label_126e74:
    // 0x126e74: 0xae220f74  sw          $v0, 0xF74($s1)
    ctx->pc = 0x126e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3956), GPR_U32(ctx, 2));
    // 0x126e78: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x126e78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_126e7c:
    // 0x126e7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x126e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126e80: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x126e80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126e84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126e88: 0x3e00008  jr          $ra
    ctx->pc = 0x126E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E88u;
        // 0x126e8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126E90u;
}
