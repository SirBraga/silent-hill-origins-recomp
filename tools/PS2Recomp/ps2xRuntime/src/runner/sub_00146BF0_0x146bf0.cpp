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

// Function: sub_00146BF0
// Address: 0x146bf0 - 0x146c68
void sub_00146BF0_0x146bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146BF0_0x146bf0");
#endif

    switch (ctx->pc) {
        case 0x146c20u: goto label_146c20;
        case 0x146c40u: goto label_146c40;
        default: break;
    }

    ctx->pc = 0x146bf0u;

    // 0x146bf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x146bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x146bf4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x146bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x146bf8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x146bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x146bfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x146bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x146c00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146c04: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x146c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c08: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x146c08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x146c0c: 0x8c50847c  lw          $s0, -0x7B84($v0)
    ctx->pc = 0x146c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x33847Cu));
    // 0x146c10: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x146C10u;
    {
        const bool branch_taken_0x146c10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x146C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146C10u;
        // 0x146c14: 0xc4940048  lwc1        $f20, 0x48($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146c10) {
            ctx->pc = 0x146C4Cu;
            goto label_146c4c;
        }
    }
    ctx->pc = 0x146C18u;
    // 0x146c18: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x146c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x146c1c: 0x0  nop
    ctx->pc = 0x146c1cu;
    // NOP
label_146c20:
    // 0x146c20: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x146C20u;
    {
        const bool branch_taken_0x146c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146c20) {
            ctx->pc = 0x146C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146C20u;
            // 0x146c24: 0x8e1000ec  lw          $s0, 0xEC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146C44u;
            goto label_146c44;
        }
    }
    ctx->pc = 0x146C28u;
    // 0x146c28: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x146c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x146c2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x146C2Cu;
    {
        const bool branch_taken_0x146c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146C2Cu;
        // 0x146c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146c2c) {
            ctx->pc = 0x146C40u;
            goto label_146c40;
        }
    }
    ctx->pc = 0x146C34u;
    // 0x146c34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x146c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c38: 0xc050dbc  jal         func_1436F0
    ctx->pc = 0x146C38u;
    SET_GPR_U32(ctx, 31, 0x146C40u);
    ctx->pc = 0x146C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146C38u;
    // 0x146c3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1436F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1436F0u, 0x146C38u, 0x146C40u)) {
        return;
    }
    ctx->pc = 0x146C40u;
label_146c40:
    // 0x146c40: 0x8e1000ec  lw          $s0, 0xEC($s0)
    ctx->pc = 0x146c40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_146c44:
    // 0x146c44: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x146C44u;
    {
        const bool branch_taken_0x146c44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x146c44) {
            ctx->pc = 0x146C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146C44u;
            // 0x146c48: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146c20;
        }
    }
    ctx->pc = 0x146C4Cu;
label_146c4c:
    // 0x146c4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x146c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146c50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x146c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146c58: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x146c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x146c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x146C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146C5Cu;
        // 0x146c60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146C64u;
    // 0x146c64: 0x0  nop
    ctx->pc = 0x146c64u;
    // NOP
    ctx->pc = 0x146c68u;
}
