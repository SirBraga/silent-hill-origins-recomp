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

// Function: sub_00114D30
// Address: 0x114d30 - 0x114db0
void sub_00114D30_0x114d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114D30_0x114d30");
#endif

    switch (ctx->pc) {
        case 0x114d30u: goto label_114d30;
        case 0x114d34u: goto label_114d34;
        case 0x114d38u: goto label_114d38;
        case 0x114d3cu: goto label_114d3c;
        case 0x114d40u: goto label_114d40;
        case 0x114d44u: goto label_114d44;
        case 0x114d48u: goto label_114d48;
        case 0x114d4cu: goto label_114d4c;
        case 0x114d50u: goto label_114d50;
        case 0x114d54u: goto label_114d54;
        case 0x114d58u: goto label_114d58;
        case 0x114d5cu: goto label_114d5c;
        case 0x114d60u: goto label_114d60;
        case 0x114d64u: goto label_114d64;
        case 0x114d68u: goto label_114d68;
        case 0x114d6cu: goto label_114d6c;
        case 0x114d70u: goto label_114d70;
        case 0x114d74u: goto label_114d74;
        case 0x114d78u: goto label_114d78;
        case 0x114d7cu: goto label_114d7c;
        case 0x114d80u: goto label_114d80;
        case 0x114d84u: goto label_114d84;
        case 0x114d88u: goto label_114d88;
        case 0x114d8cu: goto label_114d8c;
        case 0x114d90u: goto label_114d90;
        case 0x114d94u: goto label_114d94;
        case 0x114d98u: goto label_114d98;
        case 0x114d9cu: goto label_114d9c;
        case 0x114da0u: goto label_114da0;
        case 0x114da4u: goto label_114da4;
        case 0x114da8u: goto label_114da8;
        case 0x114dacu: goto label_114dac;
        default: break;
    }

    ctx->pc = 0x114d30u;

label_114d30:
    // 0x114d30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x114d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_114d34:
    // 0x114d34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x114d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_114d38:
    // 0x114d38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x114d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_114d3c:
    // 0x114d3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x114d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_114d40:
    // 0x114d40: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x114d40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_114d44:
    // 0x114d44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x114d44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_114d48:
    // 0x114d48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_114d4c:
    // 0x114d4c: 0x8e0600e0  lw          $a2, 0xE0($s0)
    ctx->pc = 0x114d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_114d50:
    // 0x114d50: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_114d54:
    if (ctx->pc == 0x114D54u) {
        ctx->pc = 0x114D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D50u;
        // 0x114d54: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x114D58u;
        goto label_114d58;
    }
    ctx->pc = 0x114D50u;
    {
        const bool branch_taken_0x114d50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D50u;
        // 0x114d54: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d50) {
            ctx->pc = 0x114D98u;
            goto label_114d98;
        }
    }
    ctx->pc = 0x114D58u;
label_114d58:
    // 0x114d58: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x114d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_114d5c:
    // 0x114d5c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_114d60:
    if (ctx->pc == 0x114D60u) {
        ctx->pc = 0x114D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D5Cu;
        // 0x114d60: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114D64u;
        goto label_114d64;
    }
    ctx->pc = 0x114D5Cu;
    {
        const bool branch_taken_0x114d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114d5c) {
            ctx->pc = 0x114D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114D5Cu;
            // 0x114d60: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114D9Cu;
            goto label_114d9c;
        }
    }
    ctx->pc = 0x114D64u;
label_114d64:
    // 0x114d64: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x114d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_114d68:
    // 0x114d68: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x114d68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_114d6c:
    // 0x114d6c: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x114d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_114d70:
    // 0x114d70: 0x40f809  jalr        $v0
label_114d74:
    if (ctx->pc == 0x114D74u) {
        ctx->pc = 0x114D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D70u;
        // 0x114d74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114D78u;
        goto label_114d78;
    }
    ctx->pc = 0x114D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x114D78u);
        ctx->pc = 0x114D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D70u;
        // 0x114d74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114D70u, 0x114D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114D78u;
label_114d78:
    // 0x114d78: 0x8e0600e4  lw          $a2, 0xE4($s0)
    ctx->pc = 0x114d78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_114d7c:
    // 0x114d7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x114d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114d80:
    // 0x114d80: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x114d80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_114d84:
    // 0x114d84: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x114d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_114d88:
    // 0x114d88: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x114d88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_114d8c:
    // 0x114d8c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x114d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_114d90:
    // 0x114d90: 0x60f809  jalr        $v1
label_114d94:
    if (ctx->pc == 0x114D94u) {
        ctx->pc = 0x114D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D90u;
        // 0x114d94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114D98u;
        goto label_114d98;
    }
    ctx->pc = 0x114D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x114D98u);
        ctx->pc = 0x114D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D90u;
        // 0x114d94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114D90u, 0x114D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114D98u;
label_114d98:
    // 0x114d98: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x114d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_114d9c:
    // 0x114d9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x114d9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_114da0:
    // 0x114da0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_114da4:
    // 0x114da4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x114da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_114da8:
    // 0x114da8: 0x3e00008  jr          $ra
label_114dac:
    if (ctx->pc == 0x114DACu) {
        ctx->pc = 0x114DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DA8u;
        // 0x114dac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114DB0u;
        goto label_fallthrough_0x114da8;
    }
    ctx->pc = 0x114DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DA8u;
        // 0x114dac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x114da8:
    ctx->pc = 0x114DB0u;
}
