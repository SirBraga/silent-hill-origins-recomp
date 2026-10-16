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

// Function: sub_00183D68
// Address: 0x183d68 - 0x183dd0
void sub_00183D68_0x183d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183D68_0x183d68");
#endif

    switch (ctx->pc) {
        case 0x183d90u: goto label_183d90;
        case 0x183da8u: goto label_183da8;
        default: break;
    }

    ctx->pc = 0x183d68u;

    // 0x183d68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x183d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x183d6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x183d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x183d74: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x183d74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x183d78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x183d78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x183d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x183d80: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x183d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x183d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x183d88: 0xc08063c  jal         func_2018F0
    ctx->pc = 0x183D88u;
    SET_GPR_U32(ctx, 31, 0x183D90u);
    ctx->pc = 0x183D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D88u;
    // 0x183d8c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x183D88u, 0x183D90u)) {
        return;
    }
    ctx->pc = 0x183D90u;
label_183d90:
    // 0x183d90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x183d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d94: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x183D94u;
    {
        const bool branch_taken_0x183d94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x183D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D94u;
        // 0x183d98: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d94) {
            ctx->pc = 0x183DB8u;
            goto label_183db8;
        }
    }
    ctx->pc = 0x183D9Cu;
    // 0x183d9c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x183d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x183da0: 0xc065c58  jal         func_197160
    ctx->pc = 0x183DA0u;
    SET_GPR_U32(ctx, 31, 0x183DA8u);
    ctx->pc = 0x183DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183DA0u;
    // 0x183da4: 0x24847fb8  addiu       $a0, $a0, 0x7FB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x183DA0u, 0x183DA8u)) {
        return;
    }
    ctx->pc = 0x183DA8u;
label_183da8:
    // 0x183da8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x183DA8u;
    {
        const bool branch_taken_0x183da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183da8) {
            ctx->pc = 0x183DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183DA8u;
            // 0x183dac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183DBCu;
            goto label_183dbc;
        }
    }
    ctx->pc = 0x183DB0u;
    // 0x183db0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x183db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x183db4: 0xae2200a4  sw          $v0, 0xA4($s1)
    ctx->pc = 0x183db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
label_183db8:
    // 0x183db8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x183db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_183dbc:
    // 0x183dbc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x183dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183dc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x183dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x183DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183DC4u;
        // 0x183dc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183DCCu;
    // 0x183dcc: 0x0  nop
    ctx->pc = 0x183dccu;
    // NOP
    ctx->pc = 0x183dd0u;
}
