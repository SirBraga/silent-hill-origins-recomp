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

// Function: sub_00225A70
// Address: 0x225a70 - 0x225b20
void sub_00225A70_0x225a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225A70_0x225a70");
#endif

    switch (ctx->pc) {
        case 0x225aa0u: goto label_225aa0;
        case 0x225ab8u: goto label_225ab8;
        case 0x225ac8u: goto label_225ac8;
        case 0x225ae0u: goto label_225ae0;
        case 0x225b04u: goto label_225b04;
        default: break;
    }

    ctx->pc = 0x225a70u;

    // 0x225a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225a74: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x225a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x225a78: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x225a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x225a7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x225a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x225a80: 0x24500fd8  addiu       $s0, $v0, 0xFD8
    ctx->pc = 0x225a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
    // 0x225a84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x225a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x225a88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225a8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x225a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x225a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a98: 0xc08959e  jal         func_225678
    ctx->pc = 0x225A98u;
    SET_GPR_U32(ctx, 31, 0x225AA0u);
    ctx->pc = 0x225A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225A98u;
    // 0x225a9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225678u, 0x225A98u, 0x225AA0u)) {
        return;
    }
    ctx->pc = 0x225AA0u;
label_225aa0:
    // 0x225aa0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x225AA0u;
    {
        const bool branch_taken_0x225aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AA0u;
        // 0x225aa4: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225aa0) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225AA8u;
    // 0x225aa8: 0x2611fff0  addiu       $s1, $s0, -0x10
    ctx->pc = 0x225aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x225aac: 0x248402e8  addiu       $a0, $a0, 0x2E8
    ctx->pc = 0x225aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 744));
    // 0x225ab0: 0xc093958  jal         func_24E560
    ctx->pc = 0x225AB0u;
    SET_GPR_U32(ctx, 31, 0x225AB8u);
    ctx->pc = 0x225AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225AB0u;
    // 0x225ab4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E560u, 0x225AB0u, 0x225AB8u)) {
        return;
    }
    ctx->pc = 0x225AB8u;
label_225ab8:
    // 0x225ab8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x225AB8u;
    {
        const bool branch_taken_0x225ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AB8u;
        // 0x225abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ab8) {
            ctx->pc = 0x225AF0u;
            goto label_225af0;
        }
    }
    ctx->pc = 0x225AC0u;
    // 0x225ac0: 0xc089ff6  jal         func_227FD8
    ctx->pc = 0x225AC0u;
    SET_GPR_U32(ctx, 31, 0x225AC8u);
    ctx->pc = 0x225AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225AC0u;
    // 0x225ac4: 0xc62c0010  lwc1        $f12, 0x10($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x227FD8u, 0x225AC0u, 0x225AC8u)) {
        return;
    }
    ctx->pc = 0x225AC8u;
label_225ac8:
    // 0x225ac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225acc: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x225accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x225ad0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x225ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225ad4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x225ad4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225ad8: 0xc08959e  jal         func_225678
    ctx->pc = 0x225AD8u;
    SET_GPR_U32(ctx, 31, 0x225AE0u);
    ctx->pc = 0x225ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225AD8u;
    // 0x225adc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225678u, 0x225AD8u, 0x225AE0u)) {
        return;
    }
    ctx->pc = 0x225AE0u;
label_225ae0:
    // 0x225ae0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x225ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225ae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225ae8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x225AE8u;
    {
        const bool branch_taken_0x225ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AE8u;
        // 0x225aec: 0xae230124  sw          $v1, 0x124($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ae8) {
            ctx->pc = 0x225B08u;
            goto label_225b08;
        }
    }
    ctx->pc = 0x225AF0u;
label_225af0:
    // 0x225af0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x225af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225af4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x225af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225af8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x225af8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225afc: 0xc08959e  jal         func_225678
    ctx->pc = 0x225AFCu;
    SET_GPR_U32(ctx, 31, 0x225B04u);
    ctx->pc = 0x225B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225AFCu;
    // 0x225b00: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225678u, 0x225AFCu, 0x225B04u)) {
        return;
    }
    ctx->pc = 0x225B04u;
label_225b04:
    // 0x225b04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x225b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225b08:
    // 0x225b08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x225b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225b0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225b0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225b14: 0x3e00008  jr          $ra
    ctx->pc = 0x225B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B14u;
        // 0x225b18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225B1Cu;
    // 0x225b1c: 0x0  nop
    ctx->pc = 0x225b1cu;
    // NOP
    ctx->pc = 0x225b20u;
}
