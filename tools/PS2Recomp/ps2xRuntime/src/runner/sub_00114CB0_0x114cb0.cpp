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

// Function: sub_00114CB0
// Address: 0x114cb0 - 0x114d30
void sub_00114CB0_0x114cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114CB0_0x114cb0");
#endif

    switch (ctx->pc) {
        case 0x114cb0u: goto label_114cb0;
        case 0x114cb4u: goto label_114cb4;
        case 0x114cb8u: goto label_114cb8;
        case 0x114cbcu: goto label_114cbc;
        case 0x114cc0u: goto label_114cc0;
        case 0x114cc4u: goto label_114cc4;
        case 0x114cc8u: goto label_114cc8;
        case 0x114cccu: goto label_114ccc;
        case 0x114cd0u: goto label_114cd0;
        case 0x114cd4u: goto label_114cd4;
        case 0x114cd8u: goto label_114cd8;
        case 0x114cdcu: goto label_114cdc;
        case 0x114ce0u: goto label_114ce0;
        case 0x114ce4u: goto label_114ce4;
        case 0x114ce8u: goto label_114ce8;
        case 0x114cecu: goto label_114cec;
        case 0x114cf0u: goto label_114cf0;
        case 0x114cf4u: goto label_114cf4;
        case 0x114cf8u: goto label_114cf8;
        case 0x114cfcu: goto label_114cfc;
        case 0x114d00u: goto label_114d00;
        case 0x114d04u: goto label_114d04;
        case 0x114d08u: goto label_114d08;
        case 0x114d0cu: goto label_114d0c;
        case 0x114d10u: goto label_114d10;
        case 0x114d14u: goto label_114d14;
        case 0x114d18u: goto label_114d18;
        case 0x114d1cu: goto label_114d1c;
        case 0x114d20u: goto label_114d20;
        case 0x114d24u: goto label_114d24;
        case 0x114d28u: goto label_114d28;
        case 0x114d2cu: goto label_114d2c;
        default: break;
    }

    ctx->pc = 0x114cb0u;

label_114cb0:
    // 0x114cb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x114cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_114cb4:
    // 0x114cb4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x114cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_114cb8:
    // 0x114cb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x114cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_114cbc:
    // 0x114cbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x114cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_114cc0:
    // 0x114cc0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x114cc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_114cc4:
    // 0x114cc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x114cc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_114cc8:
    // 0x114cc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_114ccc:
    // 0x114ccc: 0x8e0600e0  lw          $a2, 0xE0($s0)
    ctx->pc = 0x114cccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_114cd0:
    // 0x114cd0: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_114cd4:
    if (ctx->pc == 0x114CD4u) {
        ctx->pc = 0x114CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CD0u;
        // 0x114cd4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x114CD8u;
        goto label_114cd8;
    }
    ctx->pc = 0x114CD0u;
    {
        const bool branch_taken_0x114cd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x114CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CD0u;
        // 0x114cd4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114cd0) {
            ctx->pc = 0x114D18u;
            goto label_114d18;
        }
    }
    ctx->pc = 0x114CD8u;
label_114cd8:
    // 0x114cd8: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x114cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_114cdc:
    // 0x114cdc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_114ce0:
    if (ctx->pc == 0x114CE0u) {
        ctx->pc = 0x114CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CDCu;
        // 0x114ce0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114CE4u;
        goto label_114ce4;
    }
    ctx->pc = 0x114CDCu;
    {
        const bool branch_taken_0x114cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114cdc) {
            ctx->pc = 0x114CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114CDCu;
            // 0x114ce0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114D1Cu;
            goto label_114d1c;
        }
    }
    ctx->pc = 0x114CE4u;
label_114ce4:
    // 0x114ce4: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x114ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_114ce8:
    // 0x114ce8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x114ce8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_114cec:
    // 0x114cec: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x114cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_114cf0:
    // 0x114cf0: 0x40f809  jalr        $v0
label_114cf4:
    if (ctx->pc == 0x114CF4u) {
        ctx->pc = 0x114CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CF0u;
        // 0x114cf4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114CF8u;
        goto label_114cf8;
    }
    ctx->pc = 0x114CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x114CF8u);
        ctx->pc = 0x114CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CF0u;
        // 0x114cf4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114CF0u, 0x114CF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114CF8u;
label_114cf8:
    // 0x114cf8: 0x8e0600e4  lw          $a2, 0xE4($s0)
    ctx->pc = 0x114cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_114cfc:
    // 0x114cfc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x114cfcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_114d00:
    // 0x114d00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x114d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114d04:
    // 0x114d04: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x114d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_114d08:
    // 0x114d08: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x114d08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_114d0c:
    // 0x114d0c: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x114d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_114d10:
    // 0x114d10: 0x60f809  jalr        $v1
label_114d14:
    if (ctx->pc == 0x114D14u) {
        ctx->pc = 0x114D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D10u;
        // 0x114d14: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114D18u;
        goto label_114d18;
    }
    ctx->pc = 0x114D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x114D18u);
        ctx->pc = 0x114D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D10u;
        // 0x114d14: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114D10u, 0x114D18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114D18u;
label_114d18:
    // 0x114d18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x114d18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_114d1c:
    // 0x114d1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x114d1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_114d20:
    // 0x114d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_114d24:
    // 0x114d24: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x114d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_114d28:
    // 0x114d28: 0x3e00008  jr          $ra
label_114d2c:
    if (ctx->pc == 0x114D2Cu) {
        ctx->pc = 0x114D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D28u;
        // 0x114d2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114D30u;
        goto label_fallthrough_0x114d28;
    }
    ctx->pc = 0x114D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D28u;
        // 0x114d2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x114d28:
    ctx->pc = 0x114D30u;
}
