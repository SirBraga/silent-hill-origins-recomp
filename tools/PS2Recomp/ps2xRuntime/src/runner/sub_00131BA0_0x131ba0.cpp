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

// Function: sub_00131BA0
// Address: 0x131ba0 - 0x131ce0
void sub_00131BA0_0x131ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131BA0_0x131ba0");
#endif

    switch (ctx->pc) {
        case 0x131ba0u: goto label_131ba0;
        case 0x131ba4u: goto label_131ba4;
        case 0x131ba8u: goto label_131ba8;
        case 0x131bacu: goto label_131bac;
        case 0x131bb0u: goto label_131bb0;
        case 0x131bb4u: goto label_131bb4;
        case 0x131bb8u: goto label_131bb8;
        case 0x131bbcu: goto label_131bbc;
        case 0x131bc0u: goto label_131bc0;
        case 0x131bc4u: goto label_131bc4;
        case 0x131bc8u: goto label_131bc8;
        case 0x131bccu: goto label_131bcc;
        case 0x131bd0u: goto label_131bd0;
        case 0x131bd4u: goto label_131bd4;
        case 0x131bd8u: goto label_131bd8;
        case 0x131bdcu: goto label_131bdc;
        case 0x131be0u: goto label_131be0;
        case 0x131be4u: goto label_131be4;
        case 0x131be8u: goto label_131be8;
        case 0x131becu: goto label_131bec;
        case 0x131bf0u: goto label_131bf0;
        case 0x131bf4u: goto label_131bf4;
        case 0x131bf8u: goto label_131bf8;
        case 0x131bfcu: goto label_131bfc;
        case 0x131c00u: goto label_131c00;
        case 0x131c04u: goto label_131c04;
        case 0x131c08u: goto label_131c08;
        case 0x131c0cu: goto label_131c0c;
        case 0x131c10u: goto label_131c10;
        case 0x131c14u: goto label_131c14;
        case 0x131c18u: goto label_131c18;
        case 0x131c1cu: goto label_131c1c;
        case 0x131c20u: goto label_131c20;
        case 0x131c24u: goto label_131c24;
        case 0x131c28u: goto label_131c28;
        case 0x131c2cu: goto label_131c2c;
        case 0x131c30u: goto label_131c30;
        case 0x131c34u: goto label_131c34;
        case 0x131c38u: goto label_131c38;
        case 0x131c3cu: goto label_131c3c;
        case 0x131c40u: goto label_131c40;
        case 0x131c44u: goto label_131c44;
        case 0x131c48u: goto label_131c48;
        case 0x131c4cu: goto label_131c4c;
        case 0x131c50u: goto label_131c50;
        case 0x131c54u: goto label_131c54;
        case 0x131c58u: goto label_131c58;
        case 0x131c5cu: goto label_131c5c;
        case 0x131c60u: goto label_131c60;
        case 0x131c64u: goto label_131c64;
        case 0x131c68u: goto label_131c68;
        case 0x131c6cu: goto label_131c6c;
        case 0x131c70u: goto label_131c70;
        case 0x131c74u: goto label_131c74;
        case 0x131c78u: goto label_131c78;
        case 0x131c7cu: goto label_131c7c;
        case 0x131c80u: goto label_131c80;
        case 0x131c84u: goto label_131c84;
        case 0x131c88u: goto label_131c88;
        case 0x131c8cu: goto label_131c8c;
        case 0x131c90u: goto label_131c90;
        case 0x131c94u: goto label_131c94;
        case 0x131c98u: goto label_131c98;
        case 0x131c9cu: goto label_131c9c;
        case 0x131ca0u: goto label_131ca0;
        case 0x131ca4u: goto label_131ca4;
        case 0x131ca8u: goto label_131ca8;
        case 0x131cacu: goto label_131cac;
        case 0x131cb0u: goto label_131cb0;
        case 0x131cb4u: goto label_131cb4;
        case 0x131cb8u: goto label_131cb8;
        case 0x131cbcu: goto label_131cbc;
        case 0x131cc0u: goto label_131cc0;
        case 0x131cc4u: goto label_131cc4;
        case 0x131cc8u: goto label_131cc8;
        case 0x131cccu: goto label_131ccc;
        case 0x131cd0u: goto label_131cd0;
        case 0x131cd4u: goto label_131cd4;
        case 0x131cd8u: goto label_131cd8;
        case 0x131cdcu: goto label_131cdc;
        default: break;
    }

    ctx->pc = 0x131ba0u;

label_131ba0:
    // 0x131ba0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x131ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_131ba4:
    // 0x131ba4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x131ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_131ba8:
    // 0x131ba8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x131ba8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_131bac:
    // 0x131bac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x131bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_131bb0:
    // 0x131bb0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x131bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_131bb4:
    // 0x131bb4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x131bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_131bb8:
    // 0x131bb8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x131bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_131bbc:
    // 0x131bbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_131bc0:
    // 0x131bc0: 0xc048d20  jal         func_123480
label_131bc4:
    if (ctx->pc == 0x131BC4u) {
        ctx->pc = 0x131BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BC0u;
        // 0x131bc4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x131BC8u;
        goto label_131bc8;
    }
    ctx->pc = 0x131BC0u;
    SET_GPR_U32(ctx, 31, 0x131BC8u);
    ctx->pc = 0x131BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131BC0u;
    // 0x131bc4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x123480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x123480u, 0x131BC0u, 0x131BC8u)) {
        return;
    }
    ctx->pc = 0x131BC8u;
label_131bc8:
    // 0x131bc8: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x131bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_131bcc:
    // 0x131bcc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x131bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_131bd0:
    // 0x131bd0: 0x8c634788  lw          $v1, 0x4788($v1)
    ctx->pc = 0x131bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18312)));
label_131bd4:
    // 0x131bd4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x131bd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_131bd8:
    // 0x131bd8: 0x8c441a70  lw          $a0, 0x1A70($v0)
    ctx->pc = 0x131bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
label_131bdc:
    // 0x131bdc: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
label_131be0:
    if (ctx->pc == 0x131BE0u) {
        ctx->pc = 0x131BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BDCu;
        // 0x131be0: 0x8e0500c4  lw          $a1, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131BE4u;
        goto label_131be4;
    }
    ctx->pc = 0x131BDCu;
    {
        const bool branch_taken_0x131bdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x131BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BDCu;
        // 0x131be0: 0x8e0500c4  lw          $a1, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131bdc) {
            ctx->pc = 0x131C00u;
            goto label_131c00;
        }
    }
    ctx->pc = 0x131BE4u;
label_131be4:
    // 0x131be4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x131be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_131be8:
    // 0x131be8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_131bec:
    if (ctx->pc == 0x131BECu) {
        ctx->pc = 0x131BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BE8u;
        // 0x131bec: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131BF0u;
        goto label_131bf0;
    }
    ctx->pc = 0x131BE8u;
    {
        const bool branch_taken_0x131be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BE8u;
        // 0x131bec: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131be8) {
            ctx->pc = 0x131C04u;
            goto label_131c04;
        }
    }
    ctx->pc = 0x131BF0u;
label_131bf0:
    // 0x131bf0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x131bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_131bf4:
    // 0x131bf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x131bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_131bf8:
    // 0x131bf8: 0xc07fd18  jal         func_1FF460
label_131bfc:
    if (ctx->pc == 0x131BFCu) {
        ctx->pc = 0x131BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BF8u;
        // 0x131bfc: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131C00u;
        goto label_131c00;
    }
    ctx->pc = 0x131BF8u;
    SET_GPR_U32(ctx, 31, 0x131C00u);
    ctx->pc = 0x131BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131BF8u;
    // 0x131bfc: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x131BF8u, 0x131C00u)) {
        return;
    }
    ctx->pc = 0x131C00u;
label_131c00:
    // 0x131c00: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x131c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_131c04:
    // 0x131c04: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x131c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_131c08:
    // 0x131c08: 0x8c448acc  lw          $a0, -0x7534($v0)
    ctx->pc = 0x131c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937292)));
label_131c0c:
    // 0x131c0c: 0xc062e3a  jal         func_18B8E8
label_131c10:
    if (ctx->pc == 0x131C10u) {
        ctx->pc = 0x131C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C0Cu;
        // 0x131c10: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131C14u;
        goto label_131c14;
    }
    ctx->pc = 0x131C0Cu;
    SET_GPR_U32(ctx, 31, 0x131C14u);
    ctx->pc = 0x131C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C0Cu;
    // 0x131c10: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B8E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18B8E8u, 0x131C0Cu, 0x131C14u)) {
        return;
    }
    ctx->pc = 0x131C14u;
label_131c14:
    // 0x131c14: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x131c14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_131c18:
    // 0x131c18: 0xc04d63c  jal         func_1358F0
label_131c1c:
    if (ctx->pc == 0x131C1Cu) {
        ctx->pc = 0x131C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C18u;
        // 0x131c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131C20u;
        goto label_131c20;
    }
    ctx->pc = 0x131C18u;
    SET_GPR_U32(ctx, 31, 0x131C20u);
    ctx->pc = 0x131C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C18u;
    // 0x131c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1358F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1358F0u, 0x131C18u, 0x131C20u)) {
        return;
    }
    ctx->pc = 0x131C20u;
label_131c20:
    // 0x131c20: 0xc04d928  jal         func_1364A0
label_131c24:
    if (ctx->pc == 0x131C24u) {
        ctx->pc = 0x131C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C20u;
        // 0x131c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131C28u;
        goto label_131c28;
    }
    ctx->pc = 0x131C20u;
    SET_GPR_U32(ctx, 31, 0x131C28u);
    ctx->pc = 0x131C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C20u;
    // 0x131c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1364A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1364A0u, 0x131C20u, 0x131C28u)) {
        return;
    }
    ctx->pc = 0x131C28u;
label_131c28:
    // 0x131c28: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x131c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_131c2c:
    // 0x131c2c: 0x844402c0  lh          $a0, 0x2C0($v0)
    ctx->pc = 0x131c2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 704)));
label_131c30:
    // 0x131c30: 0x8c4302c4  lw          $v1, 0x2C4($v0)
    ctx->pc = 0x131c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 708)));
label_131c34:
    // 0x131c34: 0x60f809  jalr        $v1
label_131c38:
    if (ctx->pc == 0x131C38u) {
        ctx->pc = 0x131C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C34u;
        // 0x131c38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131C3Cu;
        goto label_131c3c;
    }
    ctx->pc = 0x131C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x131C3Cu);
        ctx->pc = 0x131C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C34u;
        // 0x131c38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131C34u, 0x131C3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x131C3Cu;
label_131c3c:
    // 0x131c3c: 0x8e031b88  lw          $v1, 0x1B88($s0)
    ctx->pc = 0x131c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7048)));
label_131c40:
    // 0x131c40: 0x8e021b84  lw          $v0, 0x1B84($s0)
    ctx->pc = 0x131c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7044)));
label_131c44:
    // 0x131c44: 0x5062001f  beql        $v1, $v0, . + 4 + (0x1F << 2)
label_131c48:
    if (ctx->pc == 0x131C48u) {
        ctx->pc = 0x131C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C44u;
        // 0x131c48: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131C4Cu;
        goto label_131c4c;
    }
    ctx->pc = 0x131C44u;
    {
        const bool branch_taken_0x131c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x131c44) {
            ctx->pc = 0x131C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131C44u;
            // 0x131c48: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131CC4u;
            goto label_131cc4;
        }
    }
    ctx->pc = 0x131C4Cu;
label_131c4c:
    // 0x131c4c: 0xae031b84  sw          $v1, 0x1B84($s0)
    ctx->pc = 0x131c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7044), GPR_U32(ctx, 3));
label_131c50:
    // 0x131c50: 0xc04e448  jal         func_139120
label_131c54:
    if (ctx->pc == 0x131C54u) {
        ctx->pc = 0x131C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C50u;
        // 0x131c54: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131C58u;
        goto label_131c58;
    }
    ctx->pc = 0x131C50u;
    SET_GPR_U32(ctx, 31, 0x131C58u);
    ctx->pc = 0x131C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C50u;
    // 0x131c54: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x131C50u, 0x131C58u)) {
        return;
    }
    ctx->pc = 0x131C58u;
label_131c58:
    // 0x131c58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x131c58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_131c5c:
    // 0x131c5c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x131c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_131c60:
    // 0x131c60: 0xc07d234  jal         func_1F48D0
label_131c64:
    if (ctx->pc == 0x131C64u) {
        ctx->pc = 0x131C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C60u;
        // 0x131c64: 0x2451dc80  addiu       $s1, $v0, -0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131C68u;
        goto label_131c68;
    }
    ctx->pc = 0x131C60u;
    SET_GPR_U32(ctx, 31, 0x131C68u);
    ctx->pc = 0x131C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C60u;
    // 0x131c64: 0x2451dc80  addiu       $s1, $v0, -0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x131C60u, 0x131C68u)) {
        return;
    }
    ctx->pc = 0x131C68u;
label_131c68:
    // 0x131c68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_131c6c:
    if (ctx->pc == 0x131C6Cu) {
        ctx->pc = 0x131C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C68u;
        // 0x131c6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131C70u;
        goto label_131c70;
    }
    ctx->pc = 0x131C68u;
    {
        const bool branch_taken_0x131c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C68u;
        // 0x131c6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c68) {
            ctx->pc = 0x131C90u;
            goto label_131c90;
        }
    }
    ctx->pc = 0x131C70u;
label_131c70:
    // 0x131c70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x131c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_131c74:
    // 0x131c74: 0xc07d3d6  jal         func_1F4F58
label_131c78:
    if (ctx->pc == 0x131C78u) {
        ctx->pc = 0x131C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C74u;
        // 0x131c78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131C7Cu;
        goto label_131c7c;
    }
    ctx->pc = 0x131C74u;
    SET_GPR_U32(ctx, 31, 0x131C7Cu);
    ctx->pc = 0x131C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C74u;
    // 0x131c78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x131C74u, 0x131C7Cu)) {
        return;
    }
    ctx->pc = 0x131C7Cu;
label_131c7c:
    // 0x131c7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_131c80:
    if (ctx->pc == 0x131C80u) {
        ctx->pc = 0x131C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C7Cu;
        // 0x131c80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131C84u;
        goto label_131c84;
    }
    ctx->pc = 0x131C7Cu;
    {
        const bool branch_taken_0x131c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C7Cu;
        // 0x131c80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c7c) {
            ctx->pc = 0x131C90u;
            goto label_131c90;
        }
    }
    ctx->pc = 0x131C84u;
label_131c84:
    // 0x131c84: 0x8e061b84  lw          $a2, 0x1B84($s0)
    ctx->pc = 0x131c84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7044)));
label_131c88:
    // 0x131c88: 0xc07d2f8  jal         func_1F4BE0
label_131c8c:
    if (ctx->pc == 0x131C8Cu) {
        ctx->pc = 0x131C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C88u;
        // 0x131c8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131C90u;
        goto label_131c90;
    }
    ctx->pc = 0x131C88u;
    SET_GPR_U32(ctx, 31, 0x131C90u);
    ctx->pc = 0x131C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C88u;
    // 0x131c8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BE0u, 0x131C88u, 0x131C90u)) {
        return;
    }
    ctx->pc = 0x131C90u;
label_131c90:
    // 0x131c90: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x131c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_131c94:
    // 0x131c94: 0x8e631a70  lw          $v1, 0x1A70($s3)
    ctx->pc = 0x131c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6768)));
label_131c98:
    // 0x131c98: 0x8c44eee0  lw          $a0, -0x1120($v0)
    ctx->pc = 0x131c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962912)));
label_131c9c:
    // 0x131c9c: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_131ca0:
    if (ctx->pc == 0x131CA0u) {
        ctx->pc = 0x131CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C9Cu;
        // 0x131ca0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131CA4u;
        goto label_131ca4;
    }
    ctx->pc = 0x131C9Cu;
    {
        const bool branch_taken_0x131c9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x131CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C9Cu;
        // 0x131ca0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c9c) {
            ctx->pc = 0x131CC4u;
            goto label_131cc4;
        }
    }
    ctx->pc = 0x131CA4u;
label_131ca4:
    // 0x131ca4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x131ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_131ca8:
    // 0x131ca8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_131cac:
    if (ctx->pc == 0x131CACu) {
        ctx->pc = 0x131CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131CA8u;
        // 0x131cac: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131CB0u;
        goto label_131cb0;
    }
    ctx->pc = 0x131CA8u;
    {
        const bool branch_taken_0x131ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131CA8u;
        // 0x131cac: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131ca8) {
            ctx->pc = 0x131CC8u;
            goto label_131cc8;
        }
    }
    ctx->pc = 0x131CB0u;
label_131cb0:
    // 0x131cb0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x131cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_131cb4:
    // 0x131cb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x131cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_131cb8:
    // 0x131cb8: 0xc07fd18  jal         func_1FF460
label_131cbc:
    if (ctx->pc == 0x131CBCu) {
        ctx->pc = 0x131CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131CB8u;
        // 0x131cbc: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131CC0u;
        goto label_131cc0;
    }
    ctx->pc = 0x131CB8u;
    SET_GPR_U32(ctx, 31, 0x131CC0u);
    ctx->pc = 0x131CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131CB8u;
    // 0x131cbc: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x131CB8u, 0x131CC0u)) {
        return;
    }
    ctx->pc = 0x131CC0u;
label_131cc0:
    // 0x131cc0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x131cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_131cc4:
    // 0x131cc4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x131cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_131cc8:
    // 0x131cc8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x131cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_131ccc:
    // 0x131ccc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x131cccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_131cd0:
    // 0x131cd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x131cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_131cd4:
    // 0x131cd4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x131cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_131cd8:
    // 0x131cd8: 0x3e00008  jr          $ra
label_131cdc:
    if (ctx->pc == 0x131CDCu) {
        ctx->pc = 0x131CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131CD8u;
        // 0x131cdc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131CE0u;
        goto label_fallthrough_0x131cd8;
    }
    ctx->pc = 0x131CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131CD8u;
        // 0x131cdc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x131cd8:
    ctx->pc = 0x131CE0u;
}
