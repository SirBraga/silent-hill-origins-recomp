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

// Function: sub_00114BF0
// Address: 0x114bf0 - 0x114cb0
void sub_00114BF0_0x114bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114BF0_0x114bf0");
#endif

    switch (ctx->pc) {
        case 0x114bf0u: goto label_114bf0;
        case 0x114bf4u: goto label_114bf4;
        case 0x114bf8u: goto label_114bf8;
        case 0x114bfcu: goto label_114bfc;
        case 0x114c00u: goto label_114c00;
        case 0x114c04u: goto label_114c04;
        case 0x114c08u: goto label_114c08;
        case 0x114c0cu: goto label_114c0c;
        case 0x114c10u: goto label_114c10;
        case 0x114c14u: goto label_114c14;
        case 0x114c18u: goto label_114c18;
        case 0x114c1cu: goto label_114c1c;
        case 0x114c20u: goto label_114c20;
        case 0x114c24u: goto label_114c24;
        case 0x114c28u: goto label_114c28;
        case 0x114c2cu: goto label_114c2c;
        case 0x114c30u: goto label_114c30;
        case 0x114c34u: goto label_114c34;
        case 0x114c38u: goto label_114c38;
        case 0x114c3cu: goto label_114c3c;
        case 0x114c40u: goto label_114c40;
        case 0x114c44u: goto label_114c44;
        case 0x114c48u: goto label_114c48;
        case 0x114c4cu: goto label_114c4c;
        case 0x114c50u: goto label_114c50;
        case 0x114c54u: goto label_114c54;
        case 0x114c58u: goto label_114c58;
        case 0x114c5cu: goto label_114c5c;
        case 0x114c60u: goto label_114c60;
        case 0x114c64u: goto label_114c64;
        case 0x114c68u: goto label_114c68;
        case 0x114c6cu: goto label_114c6c;
        case 0x114c70u: goto label_114c70;
        case 0x114c74u: goto label_114c74;
        case 0x114c78u: goto label_114c78;
        case 0x114c7cu: goto label_114c7c;
        case 0x114c80u: goto label_114c80;
        case 0x114c84u: goto label_114c84;
        case 0x114c88u: goto label_114c88;
        case 0x114c8cu: goto label_114c8c;
        case 0x114c90u: goto label_114c90;
        case 0x114c94u: goto label_114c94;
        case 0x114c98u: goto label_114c98;
        case 0x114c9cu: goto label_114c9c;
        case 0x114ca0u: goto label_114ca0;
        case 0x114ca4u: goto label_114ca4;
        case 0x114ca8u: goto label_114ca8;
        case 0x114cacu: goto label_114cac;
        default: break;
    }

    ctx->pc = 0x114bf0u;

label_114bf0:
    // 0x114bf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x114bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_114bf4:
    // 0x114bf4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x114bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_114bf8:
    // 0x114bf8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x114bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_114bfc:
    // 0x114bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x114bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_114c00:
    // 0x114c00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x114c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_114c04:
    // 0x114c04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x114c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_114c08:
    // 0x114c08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x114c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_114c0c:
    // 0x114c0c: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x114c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_114c10:
    // 0x114c10: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_114c14:
    if (ctx->pc == 0x114C14u) {
        ctx->pc = 0x114C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C10u;
        // 0x114c14: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114C18u;
        goto label_114c18;
    }
    ctx->pc = 0x114C10u;
    {
        const bool branch_taken_0x114c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C10u;
        // 0x114c14: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c10) {
            ctx->pc = 0x114C98u;
            goto label_114c98;
        }
    }
    ctx->pc = 0x114C18u;
label_114c18:
    // 0x114c18: 0x8e0700e4  lw          $a3, 0xE4($s0)
    ctx->pc = 0x114c18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_114c1c:
    // 0x114c1c: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
label_114c20:
    if (ctx->pc == 0x114C20u) {
        ctx->pc = 0x114C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C1Cu;
        // 0x114c20: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114C24u;
        goto label_114c24;
    }
    ctx->pc = 0x114C1Cu;
    {
        const bool branch_taken_0x114c1c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x114C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C1Cu;
        // 0x114c20: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c1c) {
            ctx->pc = 0x114C98u;
            goto label_114c98;
        }
    }
    ctx->pc = 0x114C24u;
label_114c24:
    // 0x114c24: 0x8ce30034  lw          $v1, 0x34($a3)
    ctx->pc = 0x114c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_114c28:
    // 0x114c28: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x114c28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_114c2c:
    // 0x114c2c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x114c2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_114c30:
    // 0x114c30: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x114c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_114c34:
    // 0x114c34: 0x40f809  jalr        $v0
label_114c38:
    if (ctx->pc == 0x114C38u) {
        ctx->pc = 0x114C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C34u;
        // 0x114c38: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114C3Cu;
        goto label_114c3c;
    }
    ctx->pc = 0x114C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x114C3Cu);
        ctx->pc = 0x114C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C34u;
        // 0x114c38: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114C34u, 0x114C3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114C3Cu;
label_114c3c:
    // 0x114c3c: 0x8e0700e0  lw          $a3, 0xE0($s0)
    ctx->pc = 0x114c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_114c40:
    // 0x114c40: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x114c40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_114c44:
    // 0x114c44: 0x37a6000c  ori         $a2, $sp, 0xC
    ctx->pc = 0x114c44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
label_114c48:
    // 0x114c48: 0x8ce20034  lw          $v0, 0x34($a3)
    ctx->pc = 0x114c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_114c4c:
    // 0x114c4c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x114c4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_114c50:
    // 0x114c50: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x114c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_114c54:
    // 0x114c54: 0x60f809  jalr        $v1
label_114c58:
    if (ctx->pc == 0x114C58u) {
        ctx->pc = 0x114C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C54u;
        // 0x114c58: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114C5Cu;
        goto label_114c5c;
    }
    ctx->pc = 0x114C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x114C5Cu);
        ctx->pc = 0x114C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C54u;
        // 0x114c58: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114C54u, 0x114C5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114C5Cu;
label_114c5c:
    // 0x114c5c: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x114c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_114c60:
    // 0x114c60: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x114c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_114c64:
    // 0x114c64: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x114c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114c68:
    // 0x114c68: 0xc4428318  lwc1        $f2, -0x7CE8($v0)
    ctx->pc = 0x114c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_114c6c:
    // 0x114c6c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x114c6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_114c70:
    // 0x114c70: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x114c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_114c74:
    // 0x114c74: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x114c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_114c78:
    // 0x114c78: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x114c78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_114c7c:
    // 0x114c7c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x114c7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_114c80:
    // 0x114c80: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x114c80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_114c84:
    // 0x114c84: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x114c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_114c88:
    // 0x114c88: 0xc4428318  lwc1        $f2, -0x7CE8($v0)
    ctx->pc = 0x114c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_114c8c:
    // 0x114c8c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x114c8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_114c90:
    // 0x114c90: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x114c90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_114c94:
    // 0x114c94: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x114c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_114c98:
    // 0x114c98: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x114c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_114c9c:
    // 0x114c9c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x114c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_114ca0:
    // 0x114ca0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x114ca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_114ca4:
    // 0x114ca4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x114ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_114ca8:
    // 0x114ca8: 0x3e00008  jr          $ra
label_114cac:
    if (ctx->pc == 0x114CACu) {
        ctx->pc = 0x114CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CA8u;
        // 0x114cac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114CB0u;
        goto label_fallthrough_0x114ca8;
    }
    ctx->pc = 0x114CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CA8u;
        // 0x114cac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x114ca8:
    ctx->pc = 0x114CB0u;
}
