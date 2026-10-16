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

// Function: sub_00164B70
// Address: 0x164b70 - 0x164ca0
void sub_00164B70_0x164b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164B70_0x164b70");
#endif

    switch (ctx->pc) {
        case 0x164b70u: goto label_164b70;
        case 0x164b74u: goto label_164b74;
        case 0x164b78u: goto label_164b78;
        case 0x164b7cu: goto label_164b7c;
        case 0x164b80u: goto label_164b80;
        case 0x164b84u: goto label_164b84;
        case 0x164b88u: goto label_164b88;
        case 0x164b8cu: goto label_164b8c;
        case 0x164b90u: goto label_164b90;
        case 0x164b94u: goto label_164b94;
        case 0x164b98u: goto label_164b98;
        case 0x164b9cu: goto label_164b9c;
        case 0x164ba0u: goto label_164ba0;
        case 0x164ba4u: goto label_164ba4;
        case 0x164ba8u: goto label_164ba8;
        case 0x164bacu: goto label_164bac;
        case 0x164bb0u: goto label_164bb0;
        case 0x164bb4u: goto label_164bb4;
        case 0x164bb8u: goto label_164bb8;
        case 0x164bbcu: goto label_164bbc;
        case 0x164bc0u: goto label_164bc0;
        case 0x164bc4u: goto label_164bc4;
        case 0x164bc8u: goto label_164bc8;
        case 0x164bccu: goto label_164bcc;
        case 0x164bd0u: goto label_164bd0;
        case 0x164bd4u: goto label_164bd4;
        case 0x164bd8u: goto label_164bd8;
        case 0x164bdcu: goto label_164bdc;
        case 0x164be0u: goto label_164be0;
        case 0x164be4u: goto label_164be4;
        case 0x164be8u: goto label_164be8;
        case 0x164becu: goto label_164bec;
        case 0x164bf0u: goto label_164bf0;
        case 0x164bf4u: goto label_164bf4;
        case 0x164bf8u: goto label_164bf8;
        case 0x164bfcu: goto label_164bfc;
        case 0x164c00u: goto label_164c00;
        case 0x164c04u: goto label_164c04;
        case 0x164c08u: goto label_164c08;
        case 0x164c0cu: goto label_164c0c;
        case 0x164c10u: goto label_164c10;
        case 0x164c14u: goto label_164c14;
        case 0x164c18u: goto label_164c18;
        case 0x164c1cu: goto label_164c1c;
        case 0x164c20u: goto label_164c20;
        case 0x164c24u: goto label_164c24;
        case 0x164c28u: goto label_164c28;
        case 0x164c2cu: goto label_164c2c;
        case 0x164c30u: goto label_164c30;
        case 0x164c34u: goto label_164c34;
        case 0x164c38u: goto label_164c38;
        case 0x164c3cu: goto label_164c3c;
        case 0x164c40u: goto label_164c40;
        case 0x164c44u: goto label_164c44;
        case 0x164c48u: goto label_164c48;
        case 0x164c4cu: goto label_164c4c;
        case 0x164c50u: goto label_164c50;
        case 0x164c54u: goto label_164c54;
        case 0x164c58u: goto label_164c58;
        case 0x164c5cu: goto label_164c5c;
        case 0x164c60u: goto label_164c60;
        case 0x164c64u: goto label_164c64;
        case 0x164c68u: goto label_164c68;
        case 0x164c6cu: goto label_164c6c;
        case 0x164c70u: goto label_164c70;
        case 0x164c74u: goto label_164c74;
        case 0x164c78u: goto label_164c78;
        case 0x164c7cu: goto label_164c7c;
        case 0x164c80u: goto label_164c80;
        case 0x164c84u: goto label_164c84;
        case 0x164c88u: goto label_164c88;
        case 0x164c8cu: goto label_164c8c;
        case 0x164c90u: goto label_164c90;
        case 0x164c94u: goto label_164c94;
        case 0x164c98u: goto label_164c98;
        case 0x164c9cu: goto label_164c9c;
        default: break;
    }

    ctx->pc = 0x164b70u;

label_164b70:
    // 0x164b70: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x164b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_164b74:
    // 0x164b74: 0x7fb301d0  sq          $s3, 0x1D0($sp)
    ctx->pc = 0x164b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 19));
label_164b78:
    // 0x164b78: 0xe7b40210  swc1        $f20, 0x210($sp)
    ctx->pc = 0x164b78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_164b7c:
    // 0x164b7c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x164b7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_164b80:
    // 0x164b80: 0x7fb00200  sq          $s0, 0x200($sp)
    ctx->pc = 0x164b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 16));
label_164b84:
    // 0x164b84: 0x7fb101f0  sq          $s1, 0x1F0($sp)
    ctx->pc = 0x164b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 17));
label_164b88:
    // 0x164b88: 0x7fb201e0  sq          $s2, 0x1E0($sp)
    ctx->pc = 0x164b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 18));
label_164b8c:
    // 0x164b8c: 0x7fb401c0  sq          $s4, 0x1C0($sp)
    ctx->pc = 0x164b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 20));
label_164b90:
    // 0x164b90: 0x7fb501b0  sq          $s5, 0x1B0($sp)
    ctx->pc = 0x164b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 21));
label_164b94:
    // 0x164b94: 0x7fb601a0  sq          $s6, 0x1A0($sp)
    ctx->pc = 0x164b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 22));
label_164b98:
    // 0x164b98: 0xffbf0190  sd          $ra, 0x190($sp)
    ctx->pc = 0x164b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
label_164b9c:
    // 0x164b9c: 0xc080d20  jal         func_203480
label_164ba0:
    if (ctx->pc == 0x164BA0u) {
        ctx->pc = 0x164BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B9Cu;
        // 0x164ba0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x164BA4u;
        goto label_164ba4;
    }
    ctx->pc = 0x164B9Cu;
    SET_GPR_U32(ctx, 31, 0x164BA4u);
    ctx->pc = 0x164BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164B9Cu;
    // 0x164ba0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203480u, 0x164B9Cu, 0x164BA4u)) {
        return;
    }
    ctx->pc = 0x164BA4u;
label_164ba4:
    // 0x164ba4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_164ba8:
    if (ctx->pc == 0x164BA8u) {
        ctx->pc = 0x164BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BA4u;
        // 0x164ba8: 0x7bb00200  lq          $s0, 0x200($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164BACu;
        goto label_164bac;
    }
    ctx->pc = 0x164BA4u;
    {
        const bool branch_taken_0x164ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BA4u;
        // 0x164ba8: 0x7bb00200  lq          $s0, 0x200($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ba4) {
            ctx->pc = 0x164C78u;
            goto label_164c78;
        }
    }
    ctx->pc = 0x164BACu;
label_164bac:
    // 0x164bac: 0x8e716490  lw          $s1, 0x6490($s3)
    ctx->pc = 0x164bacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 25744)));
label_164bb0:
    // 0x164bb0: 0xc07600c  jal         func_1D8030
label_164bb4:
    if (ctx->pc == 0x164BB4u) {
        ctx->pc = 0x164BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BB0u;
        // 0x164bb4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164BB8u;
        goto label_164bb8;
    }
    ctx->pc = 0x164BB0u;
    SET_GPR_U32(ctx, 31, 0x164BB8u);
    ctx->pc = 0x164BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164BB0u;
    // 0x164bb4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x164BB0u, 0x164BB8u)) {
        return;
    }
    ctx->pc = 0x164BB8u;
label_164bb8:
    // 0x164bb8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x164bb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164bbc:
    // 0x164bbc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x164bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_164bc0:
    // 0x164bc0: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_164bc4:
    if (ctx->pc == 0x164BC4u) {
        ctx->pc = 0x164BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BC0u;
        // 0x164bc4: 0x8c760004  lw          $s6, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164BC8u;
        goto label_164bc8;
    }
    ctx->pc = 0x164BC0u;
    {
        const bool branch_taken_0x164bc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x164BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BC0u;
        // 0x164bc4: 0x8c760004  lw          $s6, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164bc0) {
            ctx->pc = 0x164C30u;
            goto label_164c30;
        }
    }
    ctx->pc = 0x164BC8u;
label_164bc8:
    // 0x164bc8: 0x26703c0c  addiu       $s0, $s3, 0x3C0C
    ctx->pc = 0x164bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 15372));
label_164bcc:
    // 0x164bcc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x164bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_164bd0:
    // 0x164bd0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x164bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_164bd4:
    // 0x164bd4: 0x0  nop
    ctx->pc = 0x164bd4u;
    // NOP
label_164bd8:
    // 0x164bd8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_164bdc:
    if (ctx->pc == 0x164BDCu) {
        ctx->pc = 0x164BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BD8u;
        // 0x164bdc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164BE0u;
        goto label_164be0;
    }
    ctx->pc = 0x164BD8u;
    {
        const bool branch_taken_0x164bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164bd8) {
            ctx->pc = 0x164BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164BD8u;
            // 0x164bdc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164C1Cu;
            goto label_164c1c;
        }
    }
    ctx->pc = 0x164BE0u;
label_164be0:
    // 0x164be0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x164be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_164be4:
    // 0x164be4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_164be8:
    if (ctx->pc == 0x164BE8u) {
        ctx->pc = 0x164BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BE4u;
        // 0x164be8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164BECu;
        goto label_164bec;
    }
    ctx->pc = 0x164BE4u;
    {
        const bool branch_taken_0x164be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164be4) {
            ctx->pc = 0x164BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164BE4u;
            // 0x164be8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164C1Cu;
            goto label_164c1c;
        }
    }
    ctx->pc = 0x164BECu;
label_164bec:
    // 0x164bec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x164becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_164bf0:
    // 0x164bf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x164bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164bf4:
    // 0x164bf4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x164bf4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_164bf8:
    // 0x164bf8: 0xc0591ca  jal         func_164728
label_164bfc:
    if (ctx->pc == 0x164BFCu) {
        ctx->pc = 0x164BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BF8u;
        // 0x164bfc: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164C00u;
        goto label_164c00;
    }
    ctx->pc = 0x164BF8u;
    SET_GPR_U32(ctx, 31, 0x164C00u);
    ctx->pc = 0x164BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164BF8u;
    // 0x164bfc: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164728u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164728u, 0x164BF8u, 0x164C00u)) {
        return;
    }
    ctx->pc = 0x164C00u;
label_164c00:
    // 0x164c00: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x164c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_164c04:
    // 0x164c04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_164c08:
    if (ctx->pc == 0x164C08u) {
        ctx->pc = 0x164C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C04u;
        // 0x164c08: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164C0Cu;
        goto label_164c0c;
    }
    ctx->pc = 0x164C04u;
    {
        const bool branch_taken_0x164c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C04u;
        // 0x164c08: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c04) {
            ctx->pc = 0x164C18u;
            goto label_164c18;
        }
    }
    ctx->pc = 0x164C0Cu;
label_164c0c:
    // 0x164c0c: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x164c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_164c10:
    // 0x164c10: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x164c10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_164c14:
    // 0x164c14: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x164c14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_164c18:
    // 0x164c18: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x164c18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_164c1c:
    // 0x164c1c: 0x2a820060  slti        $v0, $s4, 0x60
    ctx->pc = 0x164c1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)96) ? 1 : 0);
label_164c20:
    // 0x164c20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_164c24:
    if (ctx->pc == 0x164C24u) {
        ctx->pc = 0x164C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C20u;
        // 0x164c24: 0x2610006c  addiu       $s0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164C28u;
        goto label_164c28;
    }
    ctx->pc = 0x164C20u;
    {
        const bool branch_taken_0x164c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C20u;
        // 0x164c24: 0x2610006c  addiu       $s0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c20) {
            ctx->pc = 0x164C30u;
            goto label_164c30;
        }
    }
    ctx->pc = 0x164C28u;
label_164c28:
    // 0x164c28: 0x5620ffeb  bnel        $s1, $zero, . + 4 + (-0x15 << 2)
label_164c2c:
    if (ctx->pc == 0x164C2Cu) {
        ctx->pc = 0x164C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C28u;
        // 0x164c2c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164C30u;
        goto label_164c30;
    }
    ctx->pc = 0x164C28u;
    {
        const bool branch_taken_0x164c28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x164c28) {
            ctx->pc = 0x164C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164C28u;
            // 0x164c2c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164bd8;
        }
    }
    ctx->pc = 0x164C30u;
label_164c30:
    // 0x164c30: 0x12a00010  beqz        $s5, . + 4 + (0x10 << 2)
label_164c34:
    if (ctx->pc == 0x164C34u) {
        ctx->pc = 0x164C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C30u;
        // 0x164c34: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164C38u;
        goto label_164c38;
    }
    ctx->pc = 0x164C30u;
    {
        const bool branch_taken_0x164c30 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x164C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C30u;
        // 0x164c34: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c30) {
            ctx->pc = 0x164C74u;
            goto label_164c74;
        }
    }
    ctx->pc = 0x164C38u;
label_164c38:
    // 0x164c38: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x164c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_164c3c:
    // 0x164c3c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x164c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_164c40:
    // 0x164c40: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x164c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_164c44:
    // 0x164c44: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_164c48:
    if (ctx->pc == 0x164C48u) {
        ctx->pc = 0x164C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C44u;
        // 0x164c48: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164C4Cu;
        goto label_164c4c;
    }
    ctx->pc = 0x164C44u;
    {
        const bool branch_taken_0x164c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164c44) {
            ctx->pc = 0x164C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164C44u;
            // 0x164c48: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164C58u;
            goto label_164c58;
        }
    }
    ctx->pc = 0x164C4Cu;
label_164c4c:
    // 0x164c4c: 0x40f809  jalr        $v0
label_164c50:
    if (ctx->pc == 0x164C50u) {
        ctx->pc = 0x164C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C4Cu;
        // 0x164c50: 0x8c85005c  lw          $a1, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164C54u;
        goto label_164c54;
    }
    ctx->pc = 0x164C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164C54u);
        ctx->pc = 0x164C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C4Cu;
        // 0x164c50: 0x8c85005c  lw          $a1, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164C4Cu, 0x164C54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164C54u;
label_164c54:
    // 0x164c54: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x164c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_164c58:
    // 0x164c58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x164c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_164c5c:
    // 0x164c5c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x164c5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_164c60:
    // 0x164c60: 0xc059092  jal         func_164248
label_164c64:
    if (ctx->pc == 0x164C64u) {
        ctx->pc = 0x164C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C60u;
        // 0x164c64: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164C68u;
        goto label_164c68;
    }
    ctx->pc = 0x164C60u;
    SET_GPR_U32(ctx, 31, 0x164C68u);
    ctx->pc = 0x164C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164C60u;
    // 0x164c64: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164248u, 0x164C60u, 0x164C68u)) {
        return;
    }
    ctx->pc = 0x164C68u;
label_164c68:
    // 0x164c68: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x164c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_164c6c:
    // 0x164c6c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
label_164c70:
    if (ctx->pc == 0x164C70u) {
        ctx->pc = 0x164C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C6Cu;
        // 0x164c70: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164C74u;
        goto label_164c74;
    }
    ctx->pc = 0x164C6Cu;
    {
        const bool branch_taken_0x164c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164c6c) {
            ctx->pc = 0x164C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164C6Cu;
            // 0x164c70: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164c40;
        }
    }
    ctx->pc = 0x164C74u;
label_164c74:
    // 0x164c74: 0x7bb00200  lq          $s0, 0x200($sp)
    ctx->pc = 0x164c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_164c78:
    // 0x164c78: 0x7bb101f0  lq          $s1, 0x1F0($sp)
    ctx->pc = 0x164c78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_164c7c:
    // 0x164c7c: 0x7bb201e0  lq          $s2, 0x1E0($sp)
    ctx->pc = 0x164c7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_164c80:
    // 0x164c80: 0x7bb301d0  lq          $s3, 0x1D0($sp)
    ctx->pc = 0x164c80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_164c84:
    // 0x164c84: 0x7bb401c0  lq          $s4, 0x1C0($sp)
    ctx->pc = 0x164c84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_164c88:
    // 0x164c88: 0x7bb501b0  lq          $s5, 0x1B0($sp)
    ctx->pc = 0x164c88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_164c8c:
    // 0x164c8c: 0x7bb601a0  lq          $s6, 0x1A0($sp)
    ctx->pc = 0x164c8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_164c90:
    // 0x164c90: 0xdfbf0190  ld          $ra, 0x190($sp)
    ctx->pc = 0x164c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_164c94:
    // 0x164c94: 0xc7b40210  lwc1        $f20, 0x210($sp)
    ctx->pc = 0x164c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_164c98:
    // 0x164c98: 0x3e00008  jr          $ra
label_164c9c:
    if (ctx->pc == 0x164C9Cu) {
        ctx->pc = 0x164C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C98u;
        // 0x164c9c: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164CA0u;
        goto label_fallthrough_0x164c98;
    }
    ctx->pc = 0x164C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C98u;
        // 0x164c9c: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x164c98:
    ctx->pc = 0x164CA0u;
}
