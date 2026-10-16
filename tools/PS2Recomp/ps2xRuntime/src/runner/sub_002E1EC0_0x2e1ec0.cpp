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

// Function: sub_002E1EC0
// Address: 0x2e1ec0 - 0x2e1f48
void sub_002E1EC0_0x2e1ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1EC0_0x2e1ec0");
#endif

    switch (ctx->pc) {
        case 0x2e1f38u: goto label_2e1f38;
        default: break;
    }

    ctx->pc = 0x2e1ec0u;

    // 0x2e1ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e1ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e1ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e1ec8: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x2e1ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2e1ecc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1ECCu;
    {
        const bool branch_taken_0x2e1ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1ecc) {
            ctx->pc = 0x2E1ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1ECCu;
            // 0x2e1ed0: 0xac800068  sw          $zero, 0x68($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1ED4u;
            goto label_2e1ed4;
        }
    }
    ctx->pc = 0x2E1ED4u;
label_2e1ed4:
    // 0x2e1ed4: 0x50a00012  beql        $a1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E1ED4u;
    {
        const bool branch_taken_0x2e1ed4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1ed4) {
            ctx->pc = 0x2E1ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1ED4u;
            // 0x2e1ed8: 0x8c820048  lw          $v0, 0x48($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1F20u;
            goto label_2e1f20;
        }
    }
    ctx->pc = 0x2E1EDCu;
    // 0x2e1edc: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x2e1edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x2e1ee0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E1EE0u;
    {
        const bool branch_taken_0x2e1ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1EE0u;
        // 0x2e1ee4: 0xac850068  sw          $a1, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1ee0) {
            ctx->pc = 0x2E1F1Cu;
            goto label_2e1f1c;
        }
    }
    ctx->pc = 0x2E1EE8u;
    // 0x2e1ee8: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2e1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2e1eec: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1EECu;
    {
        const bool branch_taken_0x2e1eec = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E1EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1EECu;
        // 0x2e1ef0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1eec) {
            ctx->pc = 0x2E1F04u;
            goto label_2e1f04;
        }
    }
    ctx->pc = 0x2E1EF4u;
    // 0x2e1ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1ef8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e1ef8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e1efc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1EFCu;
    {
        const bool branch_taken_0x2e1efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1EFCu;
        // 0x2e1f00: 0xe4800054  swc1        $f0, 0x54($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1efc) {
            ctx->pc = 0x2E1F1Cu;
            goto label_2e1f1c;
        }
    }
    ctx->pc = 0x2E1F04u;
label_2e1f04:
    // 0x2e1f04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e1f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e1f08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e1f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e1f0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1f10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e1f10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e1f14: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e1f14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2e1f18: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x2e1f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
label_2e1f1c:
    // 0x2e1f1c: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2e1f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2e1f20:
    // 0x2e1f20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1F20u;
    {
        const bool branch_taken_0x2e1f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F20u;
        // 0x2e1f24: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1f20) {
            ctx->pc = 0x2E1F38u;
            goto label_2e1f38;
        }
    }
    ctx->pc = 0x2E1F28u;
    // 0x2e1f28: 0x8c870068  lw          $a3, 0x68($a0)
    ctx->pc = 0x2e1f28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2e1f2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e1f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1f30: 0xc0b673c  jal         func_2D9CF0
    ctx->pc = 0x2E1F30u;
    SET_GPR_U32(ctx, 31, 0x2E1F38u);
    ctx->pc = 0x2E1F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1F30u;
    // 0x2e1f34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9CF0u, 0x2E1F30u, 0x2E1F38u)) {
        return;
    }
    ctx->pc = 0x2E1F38u;
label_2e1f38:
    // 0x2e1f38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F3Cu;
        // 0x2e1f40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1F44u;
    // 0x2e1f44: 0x0  nop
    ctx->pc = 0x2e1f44u;
    // NOP
    ctx->pc = 0x2e1f48u;
}
