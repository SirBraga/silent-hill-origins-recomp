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

// Function: sub_001A9FA8
// Address: 0x1a9fa8 - 0x1aa000
void sub_001A9FA8_0x1a9fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9FA8_0x1a9fa8");
#endif

    switch (ctx->pc) {
        case 0x1a9fd8u: goto label_1a9fd8;
        case 0x1a9fecu: goto label_1a9fec;
        default: break;
    }

    ctx->pc = 0x1a9fa8u;

    // 0x1a9fa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a9fac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1a9facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1a9fb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a9fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a9fb4: 0x2442b5d0  addiu       $v0, $v0, -0x4A30
    ctx->pc = 0x1a9fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948304));
    // 0x1a9fb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a9fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a9fbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a9fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9fc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9fc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a9fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9fc8: 0xae2200ec  sw          $v0, 0xEC($s1)
    ctx->pc = 0x1a9fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 2));
    // 0x1a9fcc: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x1a9fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x1a9fd0: 0xc06a576  jal         func_1A95D8
    ctx->pc = 0x1A9FD0u;
    SET_GPR_U32(ctx, 31, 0x1A9FD8u);
    ctx->pc = 0x1A9FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9FD0u;
    // 0x1a9fd4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A95D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A95D8u, 0x1A9FD0u, 0x1A9FD8u)) {
        return;
    }
    ctx->pc = 0x1A9FD8u;
label_1a9fd8:
    // 0x1a9fd8: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1a9fd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1a9fdc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9FDCu;
    {
        const bool branch_taken_0x1a9fdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FDCu;
        // 0x1a9fe0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9fdc) {
            ctx->pc = 0x1A9FF0u;
            goto label_1a9ff0;
        }
    }
    ctx->pc = 0x1A9FE4u;
    // 0x1a9fe4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1A9FE4u;
    SET_GPR_U32(ctx, 31, 0x1A9FECu);
    ctx->pc = 0x1A9FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9FE4u;
    // 0x1a9fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1A9FE4u, 0x1A9FECu)) {
        return;
    }
    ctx->pc = 0x1A9FECu;
label_1a9fec:
    // 0x1a9fec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a9fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a9ff0:
    // 0x1a9ff0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a9ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FF8u;
        // 0x1a9ffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA000u;
}
