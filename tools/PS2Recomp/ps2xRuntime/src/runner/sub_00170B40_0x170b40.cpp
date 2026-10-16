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

// Function: sub_00170B40
// Address: 0x170b40 - 0x170c58
void sub_00170B40_0x170b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170B40_0x170b40");
#endif

    switch (ctx->pc) {
        case 0x170b40u: goto label_170b40;
        case 0x170b44u: goto label_170b44;
        case 0x170b48u: goto label_170b48;
        case 0x170b4cu: goto label_170b4c;
        case 0x170b50u: goto label_170b50;
        case 0x170b54u: goto label_170b54;
        case 0x170b58u: goto label_170b58;
        case 0x170b5cu: goto label_170b5c;
        case 0x170b60u: goto label_170b60;
        case 0x170b64u: goto label_170b64;
        case 0x170b68u: goto label_170b68;
        case 0x170b6cu: goto label_170b6c;
        case 0x170b70u: goto label_170b70;
        case 0x170b74u: goto label_170b74;
        case 0x170b78u: goto label_170b78;
        case 0x170b7cu: goto label_170b7c;
        case 0x170b80u: goto label_170b80;
        case 0x170b84u: goto label_170b84;
        case 0x170b88u: goto label_170b88;
        case 0x170b8cu: goto label_170b8c;
        case 0x170b90u: goto label_170b90;
        case 0x170b94u: goto label_170b94;
        case 0x170b98u: goto label_170b98;
        case 0x170b9cu: goto label_170b9c;
        case 0x170ba0u: goto label_170ba0;
        case 0x170ba4u: goto label_170ba4;
        case 0x170ba8u: goto label_170ba8;
        case 0x170bacu: goto label_170bac;
        case 0x170bb0u: goto label_170bb0;
        case 0x170bb4u: goto label_170bb4;
        case 0x170bb8u: goto label_170bb8;
        case 0x170bbcu: goto label_170bbc;
        case 0x170bc0u: goto label_170bc0;
        case 0x170bc4u: goto label_170bc4;
        case 0x170bc8u: goto label_170bc8;
        case 0x170bccu: goto label_170bcc;
        case 0x170bd0u: goto label_170bd0;
        case 0x170bd4u: goto label_170bd4;
        case 0x170bd8u: goto label_170bd8;
        case 0x170bdcu: goto label_170bdc;
        case 0x170be0u: goto label_170be0;
        case 0x170be4u: goto label_170be4;
        case 0x170be8u: goto label_170be8;
        case 0x170becu: goto label_170bec;
        case 0x170bf0u: goto label_170bf0;
        case 0x170bf4u: goto label_170bf4;
        case 0x170bf8u: goto label_170bf8;
        case 0x170bfcu: goto label_170bfc;
        case 0x170c00u: goto label_170c00;
        case 0x170c04u: goto label_170c04;
        case 0x170c08u: goto label_170c08;
        case 0x170c0cu: goto label_170c0c;
        case 0x170c10u: goto label_170c10;
        case 0x170c14u: goto label_170c14;
        case 0x170c18u: goto label_170c18;
        case 0x170c1cu: goto label_170c1c;
        case 0x170c20u: goto label_170c20;
        case 0x170c24u: goto label_170c24;
        case 0x170c28u: goto label_170c28;
        case 0x170c2cu: goto label_170c2c;
        case 0x170c30u: goto label_170c30;
        case 0x170c34u: goto label_170c34;
        case 0x170c38u: goto label_170c38;
        case 0x170c3cu: goto label_170c3c;
        case 0x170c40u: goto label_170c40;
        case 0x170c44u: goto label_170c44;
        case 0x170c48u: goto label_170c48;
        case 0x170c4cu: goto label_170c4c;
        case 0x170c50u: goto label_170c50;
        case 0x170c54u: goto label_170c54;
        default: break;
    }

    ctx->pc = 0x170b40u;

label_170b40:
    // 0x170b40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x170b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_170b44:
    // 0x170b44: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x170b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_170b48:
    // 0x170b48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x170b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_170b4c:
    // 0x170b4c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x170b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
label_170b50:
    // 0x170b50: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x170b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_170b54:
    // 0x170b54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x170b54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_170b58:
    // 0x170b58: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x170b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_170b5c:
    // 0x170b5c: 0x24425328  addiu       $v0, $v0, 0x5328
    ctx->pc = 0x170b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21288));
label_170b60:
    // 0x170b60: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x170b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_170b64:
    // 0x170b64: 0x24635348  addiu       $v1, $v1, 0x5348
    ctx->pc = 0x170b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21320));
label_170b68:
    // 0x170b68: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x170b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_170b6c:
    // 0x170b6c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x170b6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_170b70:
    // 0x170b70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_170b74:
    // 0x170b74: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x170b74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
label_170b78:
    // 0x170b78: 0x8e4600d0  lw          $a2, 0xD0($s2)
    ctx->pc = 0x170b78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_170b7c:
    // 0x170b7c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_170b80:
    if (ctx->pc == 0x170B80u) {
        ctx->pc = 0x170B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B7Cu;
        // 0x170b80: 0xae430034  sw          $v1, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170B84u;
        goto label_170b84;
    }
    ctx->pc = 0x170B7Cu;
    {
        const bool branch_taken_0x170b7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x170B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B7Cu;
        // 0x170b80: 0xae430034  sw          $v1, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b7c) {
            ctx->pc = 0x170BA0u;
            goto label_170ba0;
        }
    }
    ctx->pc = 0x170B84u;
label_170b84:
    // 0x170b84: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x170b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_170b88:
    // 0x170b88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x170b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_170b8c:
    // 0x170b8c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x170b8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_170b90:
    // 0x170b90: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x170b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_170b94:
    // 0x170b94: 0x60f809  jalr        $v1
label_170b98:
    if (ctx->pc == 0x170B98u) {
        ctx->pc = 0x170B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B94u;
        // 0x170b98: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170B9Cu;
        goto label_170b9c;
    }
    ctx->pc = 0x170B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x170B9Cu);
        ctx->pc = 0x170B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B94u;
        // 0x170b98: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170B94u, 0x170B9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x170B9Cu;
label_170b9c:
    // 0x170b9c: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x170b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
label_170ba0:
    // 0x170ba0: 0x8e4500ec  lw          $a1, 0xEC($s2)
    ctx->pc = 0x170ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 236)));
label_170ba4:
    // 0x170ba4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_170ba8:
    if (ctx->pc == 0x170BA8u) {
        ctx->pc = 0x170BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BA4u;
        // 0x170ba8: 0x26530038  addiu       $s3, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170BACu;
        goto label_170bac;
    }
    ctx->pc = 0x170BA4u;
    {
        const bool branch_taken_0x170ba4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x170BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BA4u;
        // 0x170ba8: 0x26530038  addiu       $s3, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ba4) {
            ctx->pc = 0x170BB4u;
            goto label_170bb4;
        }
    }
    ctx->pc = 0x170BACu;
label_170bac:
    // 0x170bac: 0xc07fb0c  jal         func_1FEC30
label_170bb0:
    if (ctx->pc == 0x170BB0u) {
        ctx->pc = 0x170BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BACu;
        // 0x170bb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170BB4u;
        goto label_170bb4;
    }
    ctx->pc = 0x170BACu;
    SET_GPR_U32(ctx, 31, 0x170BB4u);
    ctx->pc = 0x170BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BACu;
    // 0x170bb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x170BACu, 0x170BB4u)) {
        return;
    }
    ctx->pc = 0x170BB4u;
label_170bb4:
    // 0x170bb4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x170bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_170bb8:
    // 0x170bb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x170bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_170bbc:
    // 0x170bbc: 0x24a5f880  addiu       $a1, $a1, -0x780
    ctx->pc = 0x170bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
label_170bc0:
    // 0x170bc0: 0xc07fb0c  jal         func_1FEC30
label_170bc4:
    if (ctx->pc == 0x170BC4u) {
        ctx->pc = 0x170BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BC0u;
        // 0x170bc4: 0x265100d4  addiu       $s1, $s2, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 212));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170BC8u;
        goto label_170bc8;
    }
    ctx->pc = 0x170BC0u;
    SET_GPR_U32(ctx, 31, 0x170BC8u);
    ctx->pc = 0x170BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BC0u;
    // 0x170bc4: 0x265100d4  addiu       $s1, $s2, 0xD4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 212));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x170BC0u, 0x170BC8u)) {
        return;
    }
    ctx->pc = 0x170BC8u;
label_170bc8:
    // 0x170bc8: 0x265000dc  addiu       $s0, $s2, 0xDC
    ctx->pc = 0x170bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 220));
label_170bcc:
    // 0x170bcc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x170bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_170bd0:
    // 0x170bd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x170bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_170bd4:
    // 0x170bd4: 0xc07fb0c  jal         func_1FEC30
label_170bd8:
    if (ctx->pc == 0x170BD8u) {
        ctx->pc = 0x170BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BD4u;
        // 0x170bd8: 0x24a5f888  addiu       $a1, $a1, -0x778 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170BDCu;
        goto label_170bdc;
    }
    ctx->pc = 0x170BD4u;
    SET_GPR_U32(ctx, 31, 0x170BDCu);
    ctx->pc = 0x170BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BD4u;
    // 0x170bd8: 0x24a5f888  addiu       $a1, $a1, -0x778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x170BD4u, 0x170BDCu)) {
        return;
    }
    ctx->pc = 0x170BDCu;
label_170bdc:
    // 0x170bdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x170bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_170be0:
    // 0x170be0: 0xc07fb0c  jal         func_1FEC30
label_170be4:
    if (ctx->pc == 0x170BE4u) {
        ctx->pc = 0x170BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BE0u;
        // 0x170be4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170BE8u;
        goto label_170be8;
    }
    ctx->pc = 0x170BE0u;
    SET_GPR_U32(ctx, 31, 0x170BE8u);
    ctx->pc = 0x170BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BE0u;
    // 0x170be4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x170BE0u, 0x170BE8u)) {
        return;
    }
    ctx->pc = 0x170BE8u;
label_170be8:
    // 0x170be8: 0xc07fac2  jal         func_1FEB08
label_170bec:
    if (ctx->pc == 0x170BECu) {
        ctx->pc = 0x170BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BE8u;
        // 0x170bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170BF0u;
        goto label_170bf0;
    }
    ctx->pc = 0x170BE8u;
    SET_GPR_U32(ctx, 31, 0x170BF0u);
    ctx->pc = 0x170BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BE8u;
    // 0x170bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x170BE8u, 0x170BF0u)) {
        return;
    }
    ctx->pc = 0x170BF0u;
label_170bf0:
    // 0x170bf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170bf4:
    // 0x170bf4: 0xc07fb0c  jal         func_1FEC30
label_170bf8:
    if (ctx->pc == 0x170BF8u) {
        ctx->pc = 0x170BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BF4u;
        // 0x170bf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170BFCu;
        goto label_170bfc;
    }
    ctx->pc = 0x170BF4u;
    SET_GPR_U32(ctx, 31, 0x170BFCu);
    ctx->pc = 0x170BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BF4u;
    // 0x170bf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x170BF4u, 0x170BFCu)) {
        return;
    }
    ctx->pc = 0x170BFCu;
label_170bfc:
    // 0x170bfc: 0xc07fac2  jal         func_1FEB08
label_170c00:
    if (ctx->pc == 0x170C00u) {
        ctx->pc = 0x170C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BFCu;
        // 0x170c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170C04u;
        goto label_170c04;
    }
    ctx->pc = 0x170BFCu;
    SET_GPR_U32(ctx, 31, 0x170C04u);
    ctx->pc = 0x170C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BFCu;
    // 0x170c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x170BFCu, 0x170C04u)) {
        return;
    }
    ctx->pc = 0x170C04u;
label_170c04:
    // 0x170c04: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x170c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_170c08:
    // 0x170c08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x170c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_170c0c:
    // 0x170c0c: 0xc07fb0c  jal         func_1FEC30
label_170c10:
    if (ctx->pc == 0x170C10u) {
        ctx->pc = 0x170C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C0Cu;
        // 0x170c10: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170C14u;
        goto label_170c14;
    }
    ctx->pc = 0x170C0Cu;
    SET_GPR_U32(ctx, 31, 0x170C14u);
    ctx->pc = 0x170C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C0Cu;
    // 0x170c10: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x170C0Cu, 0x170C14u)) {
        return;
    }
    ctx->pc = 0x170C14u;
label_170c14:
    // 0x170c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170c18:
    // 0x170c18: 0xc07fbec  jal         func_1FEFB0
label_170c1c:
    if (ctx->pc == 0x170C1Cu) {
        ctx->pc = 0x170C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C18u;
        // 0x170c1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170C20u;
        goto label_170c20;
    }
    ctx->pc = 0x170C18u;
    SET_GPR_U32(ctx, 31, 0x170C20u);
    ctx->pc = 0x170C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C18u;
    // 0x170c1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x170C18u, 0x170C20u)) {
        return;
    }
    ctx->pc = 0x170C20u;
label_170c20:
    // 0x170c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x170c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_170c24:
    // 0x170c24: 0xc07fbec  jal         func_1FEFB0
label_170c28:
    if (ctx->pc == 0x170C28u) {
        ctx->pc = 0x170C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C24u;
        // 0x170c28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170C2Cu;
        goto label_170c2c;
    }
    ctx->pc = 0x170C24u;
    SET_GPR_U32(ctx, 31, 0x170C2Cu);
    ctx->pc = 0x170C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C24u;
    // 0x170c28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x170C24u, 0x170C2Cu)) {
        return;
    }
    ctx->pc = 0x170C2Cu;
label_170c2c:
    // 0x170c2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x170c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_170c30:
    // 0x170c30: 0xc04f084  jal         func_13C210
label_170c34:
    if (ctx->pc == 0x170C34u) {
        ctx->pc = 0x170C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C30u;
        // 0x170c34: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170C38u;
        goto label_170c38;
    }
    ctx->pc = 0x170C30u;
    SET_GPR_U32(ctx, 31, 0x170C38u);
    ctx->pc = 0x170C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C30u;
    // 0x170c34: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x170C30u, 0x170C38u)) {
        return;
    }
    ctx->pc = 0x170C38u;
label_170c38:
    // 0x170c38: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x170c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_170c3c:
    // 0x170c3c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x170c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_170c40:
    // 0x170c40: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x170c40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_170c44:
    // 0x170c44: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x170c44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_170c48:
    // 0x170c48: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x170c48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_170c4c:
    // 0x170c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_170c50:
    // 0x170c50: 0x3e00008  jr          $ra
label_170c54:
    if (ctx->pc == 0x170C54u) {
        ctx->pc = 0x170C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C50u;
        // 0x170c54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170C58u;
        goto label_fallthrough_0x170c50;
    }
    ctx->pc = 0x170C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C50u;
        // 0x170c54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x170c50:
    ctx->pc = 0x170C58u;
}
