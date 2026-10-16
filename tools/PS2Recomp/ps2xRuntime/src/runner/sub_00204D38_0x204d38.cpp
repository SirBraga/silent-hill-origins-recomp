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

// Function: sub_00204D38
// Address: 0x204d38 - 0x204d90
void sub_00204D38_0x204d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204D38_0x204d38");
#endif

    switch (ctx->pc) {
        case 0x204d60u: goto label_204d60;
        case 0x204d7cu: goto label_204d7c;
        default: break;
    }

    ctx->pc = 0x204d38u;

    // 0x204d38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x204d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x204d3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x204d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x204d40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x204d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x204d44: 0x24423c80  addiu       $v0, $v0, 0x3C80
    ctx->pc = 0x204d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15488));
    // 0x204d48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x204d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x204d4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x204d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204d54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x204d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d58: 0xc08136a  jal         func_204DA8
    ctx->pc = 0x204D58u;
    SET_GPR_U32(ctx, 31, 0x204D60u);
    ctx->pc = 0x204D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204D58u;
    // 0x204d5c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204DA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204DA8u, 0x204D58u, 0x204D60u)) {
        return;
    }
    ctx->pc = 0x204D60u;
label_204d60:
    // 0x204d60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x204d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x204d64: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x204d64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x204d68: 0x24423cb8  addiu       $v0, $v0, 0x3CB8
    ctx->pc = 0x204d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15544));
    // 0x204d6c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204D6Cu;
    {
        const bool branch_taken_0x204d6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x204D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D6Cu;
        // 0x204d70: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d6c) {
            ctx->pc = 0x204D7Cu;
            goto label_204d7c;
        }
    }
    ctx->pc = 0x204D74u;
    // 0x204d74: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x204D74u;
    SET_GPR_U32(ctx, 31, 0x204D7Cu);
    ctx->pc = 0x204D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204D74u;
    // 0x204d78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x204D74u, 0x204D7Cu)) {
        return;
    }
    ctx->pc = 0x204D7Cu;
label_204d7c:
    // 0x204d7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x204d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204d80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x204d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204d88: 0x3e00008  jr          $ra
    ctx->pc = 0x204D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D88u;
        // 0x204d8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204D90u;
}
