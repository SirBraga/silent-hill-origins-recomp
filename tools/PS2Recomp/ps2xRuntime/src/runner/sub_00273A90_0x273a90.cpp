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

// Function: sub_00273A90
// Address: 0x273a90 - 0x273c90
void sub_00273A90_0x273a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273A90_0x273a90");
#endif

    switch (ctx->pc) {
        case 0x273a90u: goto label_273a90;
        case 0x273a94u: goto label_273a94;
        case 0x273a98u: goto label_273a98;
        case 0x273a9cu: goto label_273a9c;
        case 0x273aa0u: goto label_273aa0;
        case 0x273aa4u: goto label_273aa4;
        case 0x273aa8u: goto label_273aa8;
        case 0x273aacu: goto label_273aac;
        case 0x273ab0u: goto label_273ab0;
        case 0x273ab4u: goto label_273ab4;
        case 0x273ab8u: goto label_273ab8;
        case 0x273abcu: goto label_273abc;
        case 0x273ac0u: goto label_273ac0;
        case 0x273ac4u: goto label_273ac4;
        case 0x273ac8u: goto label_273ac8;
        case 0x273accu: goto label_273acc;
        case 0x273ad0u: goto label_273ad0;
        case 0x273ad4u: goto label_273ad4;
        case 0x273ad8u: goto label_273ad8;
        case 0x273adcu: goto label_273adc;
        case 0x273ae0u: goto label_273ae0;
        case 0x273ae4u: goto label_273ae4;
        case 0x273ae8u: goto label_273ae8;
        case 0x273aecu: goto label_273aec;
        case 0x273af0u: goto label_273af0;
        case 0x273af4u: goto label_273af4;
        case 0x273af8u: goto label_273af8;
        case 0x273afcu: goto label_273afc;
        case 0x273b00u: goto label_273b00;
        case 0x273b04u: goto label_273b04;
        case 0x273b08u: goto label_273b08;
        case 0x273b0cu: goto label_273b0c;
        case 0x273b10u: goto label_273b10;
        case 0x273b14u: goto label_273b14;
        case 0x273b18u: goto label_273b18;
        case 0x273b1cu: goto label_273b1c;
        case 0x273b20u: goto label_273b20;
        case 0x273b24u: goto label_273b24;
        case 0x273b28u: goto label_273b28;
        case 0x273b2cu: goto label_273b2c;
        case 0x273b30u: goto label_273b30;
        case 0x273b34u: goto label_273b34;
        case 0x273b38u: goto label_273b38;
        case 0x273b3cu: goto label_273b3c;
        case 0x273b40u: goto label_273b40;
        case 0x273b44u: goto label_273b44;
        case 0x273b48u: goto label_273b48;
        case 0x273b4cu: goto label_273b4c;
        case 0x273b50u: goto label_273b50;
        case 0x273b54u: goto label_273b54;
        case 0x273b58u: goto label_273b58;
        case 0x273b5cu: goto label_273b5c;
        case 0x273b60u: goto label_273b60;
        case 0x273b64u: goto label_273b64;
        case 0x273b68u: goto label_273b68;
        case 0x273b6cu: goto label_273b6c;
        case 0x273b70u: goto label_273b70;
        case 0x273b74u: goto label_273b74;
        case 0x273b78u: goto label_273b78;
        case 0x273b7cu: goto label_273b7c;
        case 0x273b80u: goto label_273b80;
        case 0x273b84u: goto label_273b84;
        case 0x273b88u: goto label_273b88;
        case 0x273b8cu: goto label_273b8c;
        case 0x273b90u: goto label_273b90;
        case 0x273b94u: goto label_273b94;
        case 0x273b98u: goto label_273b98;
        case 0x273b9cu: goto label_273b9c;
        case 0x273ba0u: goto label_273ba0;
        case 0x273ba4u: goto label_273ba4;
        case 0x273ba8u: goto label_273ba8;
        case 0x273bacu: goto label_273bac;
        case 0x273bb0u: goto label_273bb0;
        case 0x273bb4u: goto label_273bb4;
        case 0x273bb8u: goto label_273bb8;
        case 0x273bbcu: goto label_273bbc;
        case 0x273bc0u: goto label_273bc0;
        case 0x273bc4u: goto label_273bc4;
        case 0x273bc8u: goto label_273bc8;
        case 0x273bccu: goto label_273bcc;
        case 0x273bd0u: goto label_273bd0;
        case 0x273bd4u: goto label_273bd4;
        case 0x273bd8u: goto label_273bd8;
        case 0x273bdcu: goto label_273bdc;
        case 0x273be0u: goto label_273be0;
        case 0x273be4u: goto label_273be4;
        case 0x273be8u: goto label_273be8;
        case 0x273becu: goto label_273bec;
        case 0x273bf0u: goto label_273bf0;
        case 0x273bf4u: goto label_273bf4;
        case 0x273bf8u: goto label_273bf8;
        case 0x273bfcu: goto label_273bfc;
        case 0x273c00u: goto label_273c00;
        case 0x273c04u: goto label_273c04;
        case 0x273c08u: goto label_273c08;
        case 0x273c0cu: goto label_273c0c;
        case 0x273c10u: goto label_273c10;
        case 0x273c14u: goto label_273c14;
        case 0x273c18u: goto label_273c18;
        case 0x273c1cu: goto label_273c1c;
        case 0x273c20u: goto label_273c20;
        case 0x273c24u: goto label_273c24;
        case 0x273c28u: goto label_273c28;
        case 0x273c2cu: goto label_273c2c;
        case 0x273c30u: goto label_273c30;
        case 0x273c34u: goto label_273c34;
        case 0x273c38u: goto label_273c38;
        case 0x273c3cu: goto label_273c3c;
        case 0x273c40u: goto label_273c40;
        case 0x273c44u: goto label_273c44;
        case 0x273c48u: goto label_273c48;
        case 0x273c4cu: goto label_273c4c;
        case 0x273c50u: goto label_273c50;
        case 0x273c54u: goto label_273c54;
        case 0x273c58u: goto label_273c58;
        case 0x273c5cu: goto label_273c5c;
        case 0x273c60u: goto label_273c60;
        case 0x273c64u: goto label_273c64;
        case 0x273c68u: goto label_273c68;
        case 0x273c6cu: goto label_273c6c;
        case 0x273c70u: goto label_273c70;
        case 0x273c74u: goto label_273c74;
        case 0x273c78u: goto label_273c78;
        case 0x273c7cu: goto label_273c7c;
        case 0x273c80u: goto label_273c80;
        case 0x273c84u: goto label_273c84;
        case 0x273c88u: goto label_273c88;
        case 0x273c8cu: goto label_273c8c;
        default: break;
    }

    ctx->pc = 0x273a90u;

label_273a90:
    // 0x273a90: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x273a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_273a94:
    // 0x273a94: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x273a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
label_273a98:
    // 0x273a98: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x273a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
label_273a9c:
    // 0x273a9c: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x273a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
label_273aa0:
    // 0x273aa0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x273aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_273aa4:
    // 0x273aa4: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x273aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
label_273aa8:
    // 0x273aa8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x273aa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_273aac:
    // 0x273aac: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x273aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
label_273ab0:
    // 0x273ab0: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x273ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
label_273ab4:
    // 0x273ab4: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x273ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
label_273ab8:
    // 0x273ab8: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x273ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_273abc:
    // 0x273abc: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x273abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_273ac0:
    // 0x273ac0: 0x40f809  jalr        $v0
label_273ac4:
    if (ctx->pc == 0x273AC4u) {
        ctx->pc = 0x273AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AC0u;
        // 0x273ac4: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273AC8u;
        goto label_273ac8;
    }
    ctx->pc = 0x273AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x273AC8u);
        ctx->pc = 0x273AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AC0u;
        // 0x273ac4: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273AC0u, 0x273AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273AC8u;
label_273ac8:
    // 0x273ac8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x273ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_273acc:
    // 0x273acc: 0xc09d362  jal         func_274D88
label_273ad0:
    if (ctx->pc == 0x273AD0u) {
        ctx->pc = 0x273AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273ACCu;
        // 0x273ad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273AD4u;
        goto label_273ad4;
    }
    ctx->pc = 0x273ACCu;
    SET_GPR_U32(ctx, 31, 0x273AD4u);
    ctx->pc = 0x273AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273ACCu;
    // 0x273ad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274D88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x274D88u, 0x273ACCu, 0x273AD4u)) {
        return;
    }
    ctx->pc = 0x273AD4u;
label_273ad4:
    // 0x273ad4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x273ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_273ad8:
    // 0x273ad8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x273ad8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_273adc:
    // 0x273adc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x273adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_273ae0:
    // 0x273ae0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x273ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_273ae4:
    // 0x273ae4: 0xc09d37e  jal         func_274DF8
label_273ae8:
    if (ctx->pc == 0x273AE8u) {
        ctx->pc = 0x273AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AE4u;
        // 0x273ae8: 0x2408005c  addiu       $t0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273AECu;
        goto label_273aec;
    }
    ctx->pc = 0x273AE4u;
    SET_GPR_U32(ctx, 31, 0x273AECu);
    ctx->pc = 0x273AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273AE4u;
    // 0x273ae8: 0x2408005c  addiu       $t0, $zero, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x274DF8u, 0x273AE4u, 0x273AECu)) {
        return;
    }
    ctx->pc = 0x273AECu;
label_273aec:
    // 0x273aec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_273af0:
    if (ctx->pc == 0x273AF0u) {
        ctx->pc = 0x273AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AECu;
        // 0x273af0: 0x3262000e  andi        $v0, $s3, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        ctx->pc = 0x273AF4u;
        goto label_273af4;
    }
    ctx->pc = 0x273AECu;
    {
        const bool branch_taken_0x273aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AECu;
        // 0x273af0: 0x3262000e  andi        $v0, $s3, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273aec) {
            ctx->pc = 0x273AFCu;
            goto label_273afc;
        }
    }
    ctx->pc = 0x273AF4u;
label_273af4:
    // 0x273af4: 0x1000005b  b           . + 4 + (0x5B << 2)
label_273af8:
    if (ctx->pc == 0x273AF8u) {
        ctx->pc = 0x273AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AF4u;
        // 0x273af8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273AFCu;
        goto label_273afc;
    }
    ctx->pc = 0x273AF4u;
    {
        const bool branch_taken_0x273af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AF4u;
        // 0x273af8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273af4) {
            ctx->pc = 0x273C64u;
            goto label_273c64;
        }
    }
    ctx->pc = 0x273AFCu;
label_273afc:
    // 0x273afc: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
label_273b00:
    if (ctx->pc == 0x273B00u) {
        ctx->pc = 0x273B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AFCu;
        // 0x273b00: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273B04u;
        goto label_273b04;
    }
    ctx->pc = 0x273AFCu;
    {
        const bool branch_taken_0x273afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AFCu;
        // 0x273b00: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273afc) {
            ctx->pc = 0x273C64u;
            goto label_273c64;
        }
    }
    ctx->pc = 0x273B04u;
label_273b04:
    // 0x273b04: 0x32620010  andi        $v0, $s3, 0x10
    ctx->pc = 0x273b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
label_273b08:
    // 0x273b08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_273b0c:
    if (ctx->pc == 0x273B0Cu) {
        ctx->pc = 0x273B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B08u;
        // 0x273b0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273B10u;
        goto label_273b10;
    }
    ctx->pc = 0x273B08u;
    {
        const bool branch_taken_0x273b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B08u;
        // 0x273b0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b08) {
            ctx->pc = 0x273B18u;
            goto label_273b18;
        }
    }
    ctx->pc = 0x273B10u;
label_273b10:
    // 0x273b10: 0x10000002  b           . + 4 + (0x2 << 2)
label_273b14:
    if (ctx->pc == 0x273B14u) {
        ctx->pc = 0x273B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B10u;
        // 0x273b14: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273B18u;
        goto label_273b18;
    }
    ctx->pc = 0x273B10u;
    {
        const bool branch_taken_0x273b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B10u;
        // 0x273b14: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b10) {
            ctx->pc = 0x273B1Cu;
            goto label_273b1c;
        }
    }
    ctx->pc = 0x273B18u;
label_273b18:
    // 0x273b18: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x273b18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_273b1c:
    // 0x273b1c: 0x8f828f90  lw          $v0, -0x7070($gp)
    ctx->pc = 0x273b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938512)));
label_273b20:
    // 0x273b20: 0x3c150070  lui         $s5, 0x70
    ctx->pc = 0x273b20u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)112 << 16));
label_273b24:
    // 0x273b24: 0x8f848f8c  lw          $a0, -0x7074($gp)
    ctx->pc = 0x273b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
label_273b28:
    // 0x273b28: 0x26b15480  addiu       $s1, $s5, 0x5480
    ctx->pc = 0x273b28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 21632));
label_273b2c:
    // 0x273b2c: 0xaea25480  sw          $v0, 0x5480($s5)
    ctx->pc = 0x273b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 21632), GPR_U32(ctx, 2));
label_273b30:
    // 0x273b30: 0xc0c84d8  jal         func_321360
label_273b34:
    if (ctx->pc == 0x273B34u) {
        ctx->pc = 0x273B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B30u;
        // 0x273b34: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273B38u;
        goto label_273b38;
    }
    ctx->pc = 0x273B30u;
    SET_GPR_U32(ctx, 31, 0x273B38u);
    ctx->pc = 0x273B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273B30u;
    // 0x273b34: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x273B30u, 0x273B38u)) {
        return;
    }
    ctx->pc = 0x273B38u;
label_273b38:
    // 0x273b38: 0x26165600  addiu       $s6, $s0, 0x5600
    ctx->pc = 0x273b38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 22016));
label_273b3c:
    // 0x273b3c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x273b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_273b40:
    // 0x273b40: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x273b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_273b44:
    // 0x273b44: 0x24545448  addiu       $s4, $v0, 0x5448
    ctx->pc = 0x273b44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 21576));
label_273b48:
    // 0x273b48: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x273b48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_273b4c:
    // 0x273b4c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x273b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_273b50:
    // 0x273b50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x273b50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273b54:
    // 0x273b54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x273b54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273b58:
    // 0x273b58: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x273b58u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273b5c:
    // 0x273b5c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x273b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_273b60:
    // 0x273b60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x273b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273b64:
    // 0x273b64: 0xc0c92ee  jal         func_324BB8
label_273b68:
    if (ctx->pc == 0x273B68u) {
        ctx->pc = 0x273B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B64u;
        // 0x273b68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273B6Cu;
        goto label_273b6c;
    }
    ctx->pc = 0x273B64u;
    SET_GPR_U32(ctx, 31, 0x273B6Cu);
    ctx->pc = 0x273B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273B64u;
    // 0x273b68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324BB8u, 0x273B64u, 0x273B6Cu)) {
        return;
    }
    ctx->pc = 0x273B6Cu;
label_273b6c:
    // 0x273b6c: 0xc0c84d0  jal         func_321340
label_273b70:
    if (ctx->pc == 0x273B70u) {
        ctx->pc = 0x273B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B6Cu;
        // 0x273b70: 0x8f848f8c  lw          $a0, -0x7074($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273B74u;
        goto label_273b74;
    }
    ctx->pc = 0x273B6Cu;
    SET_GPR_U32(ctx, 31, 0x273B74u);
    ctx->pc = 0x273B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273B6Cu;
    // 0x273b70: 0x8f848f8c  lw          $a0, -0x7074($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x273B6Cu, 0x273B74u)) {
        return;
    }
    ctx->pc = 0x273B74u;
label_273b74:
    // 0x273b74: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x273b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_273b78:
    // 0x273b78: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x273b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_273b7c:
    // 0x273b7c: 0x8c621098  lw          $v0, 0x1098($v1)
    ctx->pc = 0x273b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4248)));
label_273b80:
    // 0x273b80: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x273b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_273b84:
    // 0x273b84: 0x40f809  jalr        $v0
label_273b88:
    if (ctx->pc == 0x273B88u) {
        ctx->pc = 0x273B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B84u;
        // 0x273b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273B8Cu;
        goto label_273b8c;
    }
    ctx->pc = 0x273B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x273B8Cu);
        ctx->pc = 0x273B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B84u;
        // 0x273b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273B84u, 0x273B8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273B8Cu;
label_273b8c:
    // 0x273b8c: 0xc0c84d8  jal         func_321360
label_273b90:
    if (ctx->pc == 0x273B90u) {
        ctx->pc = 0x273B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B8Cu;
        // 0x273b90: 0x8f848f8c  lw          $a0, -0x7074($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273B94u;
        goto label_273b94;
    }
    ctx->pc = 0x273B8Cu;
    SET_GPR_U32(ctx, 31, 0x273B94u);
    ctx->pc = 0x273B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273B8Cu;
    // 0x273b90: 0x8f848f8c  lw          $a0, -0x7074($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x273B8Cu, 0x273B94u)) {
        return;
    }
    ctx->pc = 0x273B94u;
label_273b94:
    // 0x273b94: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x273b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_273b98:
    // 0x273b98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x273b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_273b9c:
    // 0x273b9c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x273b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_273ba0:
    // 0x273ba0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x273ba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273ba4:
    // 0x273ba4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x273ba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_273ba8:
    // 0x273ba8: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x273ba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_273bac:
    // 0x273bac: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x273bacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_273bb0:
    // 0x273bb0: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x273bb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_273bb4:
    // 0x273bb4: 0xc0c92ee  jal         func_324BB8
label_273bb8:
    if (ctx->pc == 0x273BB8u) {
        ctx->pc = 0x273BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BB4u;
        // 0x273bb8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273BBCu;
        goto label_273bbc;
    }
    ctx->pc = 0x273BB4u;
    SET_GPR_U32(ctx, 31, 0x273BBCu);
    ctx->pc = 0x273BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273BB4u;
    // 0x273bb8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324BB8u, 0x273BB4u, 0x273BBCu)) {
        return;
    }
    ctx->pc = 0x273BBCu;
label_273bbc:
    // 0x273bbc: 0xc0c84d0  jal         func_321340
label_273bc0:
    if (ctx->pc == 0x273BC0u) {
        ctx->pc = 0x273BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BBCu;
        // 0x273bc0: 0x8f848f8c  lw          $a0, -0x7074($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273BC4u;
        goto label_273bc4;
    }
    ctx->pc = 0x273BBCu;
    SET_GPR_U32(ctx, 31, 0x273BC4u);
    ctx->pc = 0x273BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273BBCu;
    // 0x273bc0: 0x8f848f8c  lw          $a0, -0x7074($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x273BBCu, 0x273BC4u)) {
        return;
    }
    ctx->pc = 0x273BC4u;
label_273bc4:
    // 0x273bc4: 0x8e045600  lw          $a0, 0x5600($s0)
    ctx->pc = 0x273bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22016)));
label_273bc8:
    // 0x273bc8: 0x4830003  bgezl       $a0, . + 4 + (0x3 << 2)
label_273bcc:
    if (ctx->pc == 0x273BCCu) {
        ctx->pc = 0x273BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BC8u;
        // 0x273bcc: 0xae440064  sw          $a0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273BD0u;
        goto label_273bd0;
    }
    ctx->pc = 0x273BC8u;
    {
        const bool branch_taken_0x273bc8 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x273bc8) {
            ctx->pc = 0x273BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273BC8u;
            // 0x273bcc: 0xae440064  sw          $a0, 0x64($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273BD8u;
            goto label_273bd8;
        }
    }
    ctx->pc = 0x273BD0u;
label_273bd0:
    // 0x273bd0: 0x10000024  b           . + 4 + (0x24 << 2)
label_273bd4:
    if (ctx->pc == 0x273BD4u) {
        ctx->pc = 0x273BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BD0u;
        // 0x273bd4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273BD8u;
        goto label_273bd8;
    }
    ctx->pc = 0x273BD0u;
    {
        const bool branch_taken_0x273bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BD0u;
        // 0x273bd4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273bd0) {
            ctx->pc = 0x273C64u;
            goto label_273c64;
        }
    }
    ctx->pc = 0x273BD8u;
label_273bd8:
    // 0x273bd8: 0xfe400010  sd          $zero, 0x10($s2)
    ctx->pc = 0x273bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 0));
label_273bdc:
    // 0x273bdc: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x273bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_273be0:
    // 0x273be0: 0x9ec20004  lwu         $v0, 0x4($s6)
    ctx->pc = 0x273be0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_273be4:
    // 0x273be4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_273be8:
    if (ctx->pc == 0x273BE8u) {
        ctx->pc = 0x273BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BE4u;
        // 0x273be8: 0xfe420000  sd          $v0, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273BECu;
        goto label_273bec;
    }
    ctx->pc = 0x273BE4u;
    {
        const bool branch_taken_0x273be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BE4u;
        // 0x273be8: 0xfe420000  sd          $v0, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273be4) {
            ctx->pc = 0x273C38u;
            goto label_273c38;
        }
    }
    ctx->pc = 0x273BECu;
label_273bec:
    // 0x273bec: 0xaea45480  sw          $a0, 0x5480($s5)
    ctx->pc = 0x273becu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 21632), GPR_U32(ctx, 4));
label_273bf0:
    // 0x273bf0: 0x32630020  andi        $v1, $s3, 0x20
    ctx->pc = 0x273bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
label_273bf4:
    // 0x273bf4: 0x8f848f8c  lw          $a0, -0x7074($gp)
    ctx->pc = 0x273bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
label_273bf8:
    // 0x273bf8: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x273bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_273bfc:
    // 0x273bfc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x273bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_273c00:
    // 0x273c00: 0xc0c84d8  jal         func_321360
label_273c04:
    if (ctx->pc == 0x273C04u) {
        ctx->pc = 0x273C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C00u;
        // 0x273c04: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273C08u;
        goto label_273c08;
    }
    ctx->pc = 0x273C00u;
    SET_GPR_U32(ctx, 31, 0x273C08u);
    ctx->pc = 0x273C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273C00u;
    // 0x273c04: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x273C00u, 0x273C08u)) {
        return;
    }
    ctx->pc = 0x273C08u;
label_273c08:
    // 0x273c08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x273c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_273c0c:
    // 0x273c0c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x273c0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_273c10:
    // 0x273c10: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x273c10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_273c14:
    // 0x273c14: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x273c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_273c18:
    // 0x273c18: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x273c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_273c1c:
    // 0x273c1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x273c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273c20:
    // 0x273c20: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x273c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_273c24:
    // 0x273c24: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x273c24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_273c28:
    // 0x273c28: 0xc0c92ee  jal         func_324BB8
label_273c2c:
    if (ctx->pc == 0x273C2Cu) {
        ctx->pc = 0x273C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C28u;
        // 0x273c2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273C30u;
        goto label_273c30;
    }
    ctx->pc = 0x273C28u;
    SET_GPR_U32(ctx, 31, 0x273C30u);
    ctx->pc = 0x273C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273C28u;
    // 0x273c2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324BB8u, 0x273C28u, 0x273C30u)) {
        return;
    }
    ctx->pc = 0x273C30u;
label_273c30:
    // 0x273c30: 0xc0c84d0  jal         func_321340
label_273c34:
    if (ctx->pc == 0x273C34u) {
        ctx->pc = 0x273C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C30u;
        // 0x273c34: 0x8f848f8c  lw          $a0, -0x7074($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273C38u;
        goto label_273c38;
    }
    ctx->pc = 0x273C30u;
    SET_GPR_U32(ctx, 31, 0x273C38u);
    ctx->pc = 0x273C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273C30u;
    // 0x273c34: 0x8f848f8c  lw          $a0, -0x7074($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x273C30u, 0x273C38u)) {
        return;
    }
    ctx->pc = 0x273C38u;
label_273c38:
    // 0x273c38: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x273c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_273c3c:
    // 0x273c3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x273c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_273c40:
    // 0x273c40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x273c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_273c44:
    // 0x273c44: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x273c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_273c48:
    // 0x273c48: 0xae42006c  sw          $v0, 0x6C($s2)
    ctx->pc = 0x273c48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
label_273c4c:
    // 0x273c4c: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x273c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
label_273c50:
    // 0x273c50: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_273c54:
    if (ctx->pc == 0x273C54u) {
        ctx->pc = 0x273C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C50u;
        // 0x273c54: 0xae44003c  sw          $a0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273C58u;
        goto label_273c58;
    }
    ctx->pc = 0x273C50u;
    {
        const bool branch_taken_0x273c50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x273C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C50u;
        // 0x273c54: 0xae44003c  sw          $a0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c50) {
            ctx->pc = 0x273C60u;
            goto label_273c60;
        }
    }
    ctx->pc = 0x273C58u;
label_273c58:
    // 0x273c58: 0xc09d456  jal         func_275158
label_273c5c:
    if (ctx->pc == 0x273C5Cu) {
        ctx->pc = 0x273C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C58u;
        // 0x273c5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273C60u;
        goto label_273c60;
    }
    ctx->pc = 0x273C58u;
    SET_GPR_U32(ctx, 31, 0x273C60u);
    ctx->pc = 0x273C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273C58u;
    // 0x273c5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275158u, 0x273C58u, 0x273C60u)) {
        return;
    }
    ctx->pc = 0x273C60u;
label_273c60:
    // 0x273c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_273c64:
    // 0x273c64: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x273c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_273c68:
    // 0x273c68: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x273c68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_273c6c:
    // 0x273c6c: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x273c6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_273c70:
    // 0x273c70: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x273c70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_273c74:
    // 0x273c74: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x273c74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_273c78:
    // 0x273c78: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x273c78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_273c7c:
    // 0x273c7c: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x273c7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_273c80:
    // 0x273c80: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x273c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_273c84:
    // 0x273c84: 0x3e00008  jr          $ra
label_273c88:
    if (ctx->pc == 0x273C88u) {
        ctx->pc = 0x273C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C84u;
        // 0x273c88: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273C8Cu;
        goto label_273c8c;
    }
    ctx->pc = 0x273C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C84u;
        // 0x273c88: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273C8Cu;
label_273c8c:
    // 0x273c8c: 0x0  nop
    ctx->pc = 0x273c8cu;
    // NOP
    ctx->pc = 0x273c90u;
}
