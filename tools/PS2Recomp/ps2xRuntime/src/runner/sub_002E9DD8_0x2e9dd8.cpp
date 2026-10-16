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

// Function: sub_002E9DD8
// Address: 0x2e9dd8 - 0x2e9e58
void sub_002E9DD8_0x2e9dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9DD8_0x2e9dd8");
#endif

    switch (ctx->pc) {
        case 0x2e9e10u: goto label_2e9e10;
        case 0x2e9e38u: goto label_2e9e38;
        default: break;
    }

    ctx->pc = 0x2e9dd8u;

    // 0x2e9dd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e9dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e9ddc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2e9ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e9de0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e9de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2e9de4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e9de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e9de8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e9de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e9dec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e9decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9df0: 0x8e230f40  lw          $v1, 0xF40($s1)
    ctx->pc = 0x2e9df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3904)));
    // 0x2e9df4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E9DF4u;
    {
        const bool branch_taken_0x2e9df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E9DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9DF4u;
        // 0x2e9df8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9df4) {
            ctx->pc = 0x2E9E38u;
            goto label_2e9e38;
        }
    }
    ctx->pc = 0x2E9DFCu;
    // 0x2e9dfc: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2e9dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9e00: 0x3c014b80  lui         $at, 0x4B80
    ctx->pc = 0x2e9e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19328 << 16));
    // 0x2e9e04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e9e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e9e08: 0xc07e022  jal         func_1F8088
    ctx->pc = 0x2E9E08u;
    SET_GPR_U32(ctx, 31, 0x2E9E10u);
    ctx->pc = 0x2E9E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9E08u;
    // 0x2e9e0c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8088u, 0x2E9E08u, 0x2E9E10u)) {
        return;
    }
    ctx->pc = 0x2E9E10u;
label_2e9e10:
    // 0x2e9e10: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x2e9e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x2e9e14: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x2e9e14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e9e18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e9e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2e9e1c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2e9e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e9e20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e9e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e9e24: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x2e9e24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e9e28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e9e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e9e2c: 0x26250f00  addiu       $a1, $s1, 0xF00
    ctx->pc = 0x2e9e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3840));
    // 0x2e9e30: 0xc0bb74e  jal         func_2EDD38
    ctx->pc = 0x2E9E30u;
    SET_GPR_U32(ctx, 31, 0x2E9E38u);
    ctx->pc = 0x2E9E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9E30u;
    // 0x2e9e34: 0x262402c0  addiu       $a0, $s1, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EDD38u, 0x2E9E30u, 0x2E9E38u)) {
        return;
    }
    ctx->pc = 0x2E9E38u;
label_2e9e38:
    // 0x2e9e38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e9e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9e3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e9e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9e40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e9e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9e44: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E44u;
        // 0x2e9e48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9E4Cu;
    // 0x2e9e4c: 0x0  nop
    ctx->pc = 0x2e9e4cu;
    // NOP
    // 0x2e9e50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9e50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9e54: 0x0  nop
    ctx->pc = 0x2e9e54u;
    // NOP
    ctx->pc = 0x2e9e58u;
}
