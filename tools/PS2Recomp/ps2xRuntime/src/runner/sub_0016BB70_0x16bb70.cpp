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

// Function: sub_0016BB70
// Address: 0x16bb70 - 0x16bc10
void sub_0016BB70_0x16bb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BB70_0x16bb70");
#endif

    switch (ctx->pc) {
        case 0x16bbc0u: goto label_16bbc0;
        case 0x16bbd4u: goto label_16bbd4;
        case 0x16bbf8u: goto label_16bbf8;
        default: break;
    }

    ctx->pc = 0x16bb70u;

    // 0x16bb70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16bb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16bb74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bb78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16bb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16bb7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16bb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16bb80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16bb80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bb84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16bb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16bb88: 0xae25006c  sw          $a1, 0x6C($s1)
    ctx->pc = 0x16bb88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 5));
    // 0x16bb8c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x16BB8Cu;
    {
        const bool branch_taken_0x16bb8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB8Cu;
        // 0x16bb90: 0xae220068  sw          $v0, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb8c) {
            ctx->pc = 0x16BBC8u;
            goto label_16bbc8;
        }
    }
    ctx->pc = 0x16BB94u;
    // 0x16bb94: 0xc62c007c  lwc1        $f12, 0x7C($s1)
    ctx->pc = 0x16bb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16bb98: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x16bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x16bb9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16bb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16bba0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16bba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16bba4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16bba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bba8: 0x8c444120  lw          $a0, 0x4120($v0)
    ctx->pc = 0x16bba8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4120u));
    // 0x16bbac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16bbacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bbb0: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x16bbb0u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[12]);
    // 0x16bbb4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16bbb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bbb8: 0xc07bf14  jal         func_1EFC50
    ctx->pc = 0x16BBB8u;
    SET_GPR_U32(ctx, 31, 0x16BBC0u);
    ctx->pc = 0x16BBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BBB8u;
    // 0x16bbbc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFC50u, 0x16BBB8u, 0x16BBC0u)) {
        return;
    }
    ctx->pc = 0x16BBC0u;
label_16bbc0:
    // 0x16bbc0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16BBC0u;
    {
        const bool branch_taken_0x16bbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBC0u;
        // 0x16bbc4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bbc0) {
            ctx->pc = 0x16BBFCu;
            goto label_16bbfc;
        }
    }
    ctx->pc = 0x16BBC8u;
label_16bbc8:
    // 0x16bbc8: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x16bbc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x16bbcc: 0xc07bf02  jal         func_1EFC08
    ctx->pc = 0x16BBCCu;
    SET_GPR_U32(ctx, 31, 0x16BBD4u);
    ctx->pc = 0x16BBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BBCCu;
    // 0x16bbd0: 0x8e044120  lw          $a0, 0x4120($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFC08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFC08u, 0x16BBCCu, 0x16BBD4u)) {
        return;
    }
    ctx->pc = 0x16BBD4u;
label_16bbd4:
    // 0x16bbd4: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x16bbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bbd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16bbd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bbdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16bbdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16bbe0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16bbe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16bbe4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16bbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bbe8: 0x8e044120  lw          $a0, 0x4120($s0)
    ctx->pc = 0x16bbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16672)));
    // 0x16bbec: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x16bbecu;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[0]);
    // 0x16bbf0: 0xc07bf5e  jal         func_1EFD78
    ctx->pc = 0x16BBF0u;
    SET_GPR_U32(ctx, 31, 0x16BBF8u);
    ctx->pc = 0x16BBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BBF0u;
    // 0x16bbf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFD78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFD78u, 0x16BBF0u, 0x16BBF8u)) {
        return;
    }
    ctx->pc = 0x16BBF8u;
label_16bbf8:
    // 0x16bbf8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16bbf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16bbfc:
    // 0x16bbfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16bbfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bc00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bc04: 0x3e00008  jr          $ra
    ctx->pc = 0x16BC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC04u;
        // 0x16bc08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BC0Cu;
    // 0x16bc0c: 0x0  nop
    ctx->pc = 0x16bc0cu;
    // NOP
    ctx->pc = 0x16bc10u;
}
