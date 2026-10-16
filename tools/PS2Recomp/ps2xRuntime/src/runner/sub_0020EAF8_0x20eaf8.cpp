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

// Function: sub_0020EAF8
// Address: 0x20eaf8 - 0x20ed30
void sub_0020EAF8_0x20eaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EAF8_0x20eaf8");
#endif

    switch (ctx->pc) {
        case 0x20eaf8u: goto label_20eaf8;
        case 0x20eafcu: goto label_20eafc;
        case 0x20eb00u: goto label_20eb00;
        case 0x20eb04u: goto label_20eb04;
        case 0x20eb08u: goto label_20eb08;
        case 0x20eb0cu: goto label_20eb0c;
        case 0x20eb10u: goto label_20eb10;
        case 0x20eb14u: goto label_20eb14;
        case 0x20eb18u: goto label_20eb18;
        case 0x20eb1cu: goto label_20eb1c;
        case 0x20eb20u: goto label_20eb20;
        case 0x20eb24u: goto label_20eb24;
        case 0x20eb28u: goto label_20eb28;
        case 0x20eb2cu: goto label_20eb2c;
        case 0x20eb30u: goto label_20eb30;
        case 0x20eb34u: goto label_20eb34;
        case 0x20eb38u: goto label_20eb38;
        case 0x20eb3cu: goto label_20eb3c;
        case 0x20eb40u: goto label_20eb40;
        case 0x20eb44u: goto label_20eb44;
        case 0x20eb48u: goto label_20eb48;
        case 0x20eb4cu: goto label_20eb4c;
        case 0x20eb50u: goto label_20eb50;
        case 0x20eb54u: goto label_20eb54;
        case 0x20eb58u: goto label_20eb58;
        case 0x20eb5cu: goto label_20eb5c;
        case 0x20eb60u: goto label_20eb60;
        case 0x20eb64u: goto label_20eb64;
        case 0x20eb68u: goto label_20eb68;
        case 0x20eb6cu: goto label_20eb6c;
        case 0x20eb70u: goto label_20eb70;
        case 0x20eb74u: goto label_20eb74;
        case 0x20eb78u: goto label_20eb78;
        case 0x20eb7cu: goto label_20eb7c;
        case 0x20eb80u: goto label_20eb80;
        case 0x20eb84u: goto label_20eb84;
        case 0x20eb88u: goto label_20eb88;
        case 0x20eb8cu: goto label_20eb8c;
        case 0x20eb90u: goto label_20eb90;
        case 0x20eb94u: goto label_20eb94;
        case 0x20eb98u: goto label_20eb98;
        case 0x20eb9cu: goto label_20eb9c;
        case 0x20eba0u: goto label_20eba0;
        case 0x20eba4u: goto label_20eba4;
        case 0x20eba8u: goto label_20eba8;
        case 0x20ebacu: goto label_20ebac;
        case 0x20ebb0u: goto label_20ebb0;
        case 0x20ebb4u: goto label_20ebb4;
        case 0x20ebb8u: goto label_20ebb8;
        case 0x20ebbcu: goto label_20ebbc;
        case 0x20ebc0u: goto label_20ebc0;
        case 0x20ebc4u: goto label_20ebc4;
        case 0x20ebc8u: goto label_20ebc8;
        case 0x20ebccu: goto label_20ebcc;
        case 0x20ebd0u: goto label_20ebd0;
        case 0x20ebd4u: goto label_20ebd4;
        case 0x20ebd8u: goto label_20ebd8;
        case 0x20ebdcu: goto label_20ebdc;
        case 0x20ebe0u: goto label_20ebe0;
        case 0x20ebe4u: goto label_20ebe4;
        case 0x20ebe8u: goto label_20ebe8;
        case 0x20ebecu: goto label_20ebec;
        case 0x20ebf0u: goto label_20ebf0;
        case 0x20ebf4u: goto label_20ebf4;
        case 0x20ebf8u: goto label_20ebf8;
        case 0x20ebfcu: goto label_20ebfc;
        case 0x20ec00u: goto label_20ec00;
        case 0x20ec04u: goto label_20ec04;
        case 0x20ec08u: goto label_20ec08;
        case 0x20ec0cu: goto label_20ec0c;
        case 0x20ec10u: goto label_20ec10;
        case 0x20ec14u: goto label_20ec14;
        case 0x20ec18u: goto label_20ec18;
        case 0x20ec1cu: goto label_20ec1c;
        case 0x20ec20u: goto label_20ec20;
        case 0x20ec24u: goto label_20ec24;
        case 0x20ec28u: goto label_20ec28;
        case 0x20ec2cu: goto label_20ec2c;
        case 0x20ec30u: goto label_20ec30;
        case 0x20ec34u: goto label_20ec34;
        case 0x20ec38u: goto label_20ec38;
        case 0x20ec3cu: goto label_20ec3c;
        case 0x20ec40u: goto label_20ec40;
        case 0x20ec44u: goto label_20ec44;
        case 0x20ec48u: goto label_20ec48;
        case 0x20ec4cu: goto label_20ec4c;
        case 0x20ec50u: goto label_20ec50;
        case 0x20ec54u: goto label_20ec54;
        case 0x20ec58u: goto label_20ec58;
        case 0x20ec5cu: goto label_20ec5c;
        case 0x20ec60u: goto label_20ec60;
        case 0x20ec64u: goto label_20ec64;
        case 0x20ec68u: goto label_20ec68;
        case 0x20ec6cu: goto label_20ec6c;
        case 0x20ec70u: goto label_20ec70;
        case 0x20ec74u: goto label_20ec74;
        case 0x20ec78u: goto label_20ec78;
        case 0x20ec7cu: goto label_20ec7c;
        case 0x20ec80u: goto label_20ec80;
        case 0x20ec84u: goto label_20ec84;
        case 0x20ec88u: goto label_20ec88;
        case 0x20ec8cu: goto label_20ec8c;
        case 0x20ec90u: goto label_20ec90;
        case 0x20ec94u: goto label_20ec94;
        case 0x20ec98u: goto label_20ec98;
        case 0x20ec9cu: goto label_20ec9c;
        case 0x20eca0u: goto label_20eca0;
        case 0x20eca4u: goto label_20eca4;
        case 0x20eca8u: goto label_20eca8;
        case 0x20ecacu: goto label_20ecac;
        case 0x20ecb0u: goto label_20ecb0;
        case 0x20ecb4u: goto label_20ecb4;
        case 0x20ecb8u: goto label_20ecb8;
        case 0x20ecbcu: goto label_20ecbc;
        case 0x20ecc0u: goto label_20ecc0;
        case 0x20ecc4u: goto label_20ecc4;
        case 0x20ecc8u: goto label_20ecc8;
        case 0x20ecccu: goto label_20eccc;
        case 0x20ecd0u: goto label_20ecd0;
        case 0x20ecd4u: goto label_20ecd4;
        case 0x20ecd8u: goto label_20ecd8;
        case 0x20ecdcu: goto label_20ecdc;
        case 0x20ece0u: goto label_20ece0;
        case 0x20ece4u: goto label_20ece4;
        case 0x20ece8u: goto label_20ece8;
        case 0x20ececu: goto label_20ecec;
        case 0x20ecf0u: goto label_20ecf0;
        case 0x20ecf4u: goto label_20ecf4;
        case 0x20ecf8u: goto label_20ecf8;
        case 0x20ecfcu: goto label_20ecfc;
        case 0x20ed00u: goto label_20ed00;
        case 0x20ed04u: goto label_20ed04;
        case 0x20ed08u: goto label_20ed08;
        case 0x20ed0cu: goto label_20ed0c;
        case 0x20ed10u: goto label_20ed10;
        case 0x20ed14u: goto label_20ed14;
        case 0x20ed18u: goto label_20ed18;
        case 0x20ed1cu: goto label_20ed1c;
        case 0x20ed20u: goto label_20ed20;
        case 0x20ed24u: goto label_20ed24;
        case 0x20ed28u: goto label_20ed28;
        case 0x20ed2cu: goto label_20ed2c;
        default: break;
    }

    ctx->pc = 0x20eaf8u;

label_20eaf8:
    // 0x20eaf8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20eaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_20eafc:
    // 0x20eafc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x20eafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_20eb00:
    // 0x20eb00: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x20eb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_20eb04:
    // 0x20eb04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20eb04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20eb08:
    // 0x20eb08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20eb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20eb0c:
    // 0x20eb0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20eb0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20eb10:
    // 0x20eb10: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x20eb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_20eb14:
    // 0x20eb14: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x20eb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_20eb18:
    // 0x20eb18: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x20eb18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20eb1c:
    // 0x20eb1c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x20eb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_20eb20:
    // 0x20eb20: 0x2879821  addu        $s3, $s4, $a3
    ctx->pc = 0x20eb20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
label_20eb24:
    // 0x20eb24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20eb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20eb28:
    // 0x20eb28: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x20eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20eb2c:
    // 0x20eb2c: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x20eb2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_20eb30:
    // 0x20eb30: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_20eb34:
    if (ctx->pc == 0x20EB34u) {
        ctx->pc = 0x20EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB30u;
        // 0x20eb34: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB38u;
        goto label_20eb38;
    }
    ctx->pc = 0x20EB30u;
    {
        const bool branch_taken_0x20eb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB30u;
        // 0x20eb34: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb30) {
            ctx->pc = 0x20EB54u;
            goto label_20eb54;
        }
    }
    ctx->pc = 0x20EB38u;
label_20eb38:
    // 0x20eb38: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x20eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_20eb3c:
    // 0x20eb3c: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x20eb3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_20eb40:
    // 0x20eb40: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_20eb44:
    if (ctx->pc == 0x20EB44u) {
        ctx->pc = 0x20EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB40u;
        // 0x20eb44: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB48u;
        goto label_20eb48;
    }
    ctx->pc = 0x20EB40u;
    {
        const bool branch_taken_0x20eb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20eb40) {
            ctx->pc = 0x20EB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EB40u;
            // 0x20eb44: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EB58u;
            goto label_20eb58;
        }
    }
    ctx->pc = 0x20EB48u;
label_20eb48:
    // 0x20eb48: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20eb4c:
    // 0x20eb4c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_20eb50:
    if (ctx->pc == 0x20EB50u) {
        ctx->pc = 0x20EB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB4Cu;
        // 0x20eb50: 0x8e230018  lw          $v1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB54u;
        goto label_20eb54;
    }
    ctx->pc = 0x20EB4Cu;
    {
        const bool branch_taken_0x20eb4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20eb4c) {
            ctx->pc = 0x20EB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EB4Cu;
            // 0x20eb50: 0x8e230018  lw          $v1, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EB74u;
            goto label_20eb74;
        }
    }
    ctx->pc = 0x20EB54u;
label_20eb54:
    // 0x20eb54: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x20eb54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20eb58:
    // 0x20eb58: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x20eb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_20eb5c:
    // 0x20eb5c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20eb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20eb60:
    // 0x20eb60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20eb64:
    // 0x20eb64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20eb68:
    // 0x20eb68: 0x60f809  jalr        $v1
label_20eb6c:
    if (ctx->pc == 0x20EB6Cu) {
        ctx->pc = 0x20EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB68u;
        // 0x20eb6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB70u;
        goto label_20eb70;
    }
    ctx->pc = 0x20EB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20EB70u);
        ctx->pc = 0x20EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB68u;
        // 0x20eb6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EB68u, 0x20EB70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20EB70u;
label_20eb70:
    // 0x20eb70: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x20eb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_20eb74:
    // 0x20eb74: 0x283102b  sltu        $v0, $s4, $v1
    ctx->pc = 0x20eb74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_20eb78:
    // 0x20eb78: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_20eb7c:
    if (ctx->pc == 0x20EB7Cu) {
        ctx->pc = 0x20EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB78u;
        // 0x20eb7c: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB80u;
        goto label_20eb80;
    }
    ctx->pc = 0x20EB78u;
    {
        const bool branch_taken_0x20eb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20eb78) {
            ctx->pc = 0x20EB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EB78u;
            // 0x20eb7c: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EB98u;
            goto label_20eb98;
        }
    }
    ctx->pc = 0x20EB80u;
label_20eb80:
    // 0x20eb80: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x20eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_20eb84:
    // 0x20eb84: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20eb88:
    // 0x20eb88: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x20eb88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_20eb8c:
    // 0x20eb8c: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_20eb90:
    if (ctx->pc == 0x20EB90u) {
        ctx->pc = 0x20EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB8Cu;
        // 0x20eb90: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB94u;
        goto label_20eb94;
    }
    ctx->pc = 0x20EB8Cu;
    {
        const bool branch_taken_0x20eb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20eb8c) {
            ctx->pc = 0x20EB90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EB8Cu;
            // 0x20eb90: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EC28u;
            goto label_20ec28;
        }
    }
    ctx->pc = 0x20EB94u;
label_20eb94:
    // 0x20eb94: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x20eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_20eb98:
    // 0x20eb98: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_20eb9c:
    if (ctx->pc == 0x20EB9Cu) {
        ctx->pc = 0x20EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB98u;
        // 0x20eb9c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EBA0u;
        goto label_20eba0;
    }
    ctx->pc = 0x20EB98u;
    {
        const bool branch_taken_0x20eb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20eb98) {
            ctx->pc = 0x20EB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EB98u;
            // 0x20eb9c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EBC0u;
            goto label_20ebc0;
        }
    }
    ctx->pc = 0x20EBA0u;
label_20eba0:
    // 0x20eba0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x20eba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20eba4:
    // 0x20eba4: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x20eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_20eba8:
    // 0x20eba8: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20eba8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20ebac:
    // 0x20ebac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20ebb0:
    // 0x20ebb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20ebb4:
    // 0x20ebb4: 0x60f809  jalr        $v1
label_20ebb8:
    if (ctx->pc == 0x20EBB8u) {
        ctx->pc = 0x20EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBB4u;
        // 0x20ebb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EBBCu;
        goto label_20ebbc;
    }
    ctx->pc = 0x20EBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20EBBCu);
        ctx->pc = 0x20EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBB4u;
        // 0x20ebb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EBB4u, 0x20EBBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20EBBCu;
label_20ebbc:
    // 0x20ebbc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x20ebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_20ebc0:
    // 0x20ebc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20ebc4:
    if (ctx->pc == 0x20EBC4u) {
        ctx->pc = 0x20EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBC0u;
        // 0x20ebc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EBC8u;
        goto label_20ebc8;
    }
    ctx->pc = 0x20EBC0u;
    {
        const bool branch_taken_0x20ebc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBC0u;
        // 0x20ebc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ebc0) {
            ctx->pc = 0x20EBD8u;
            goto label_20ebd8;
        }
    }
    ctx->pc = 0x20EBC8u;
label_20ebc8:
    // 0x20ebc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20ebc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20ebcc:
    // 0x20ebcc: 0xc0839da  jal         func_20E768
label_20ebd0:
    if (ctx->pc == 0x20EBD0u) {
        ctx->pc = 0x20EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBCCu;
        // 0x20ebd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EBD4u;
        goto label_20ebd4;
    }
    ctx->pc = 0x20EBCCu;
    SET_GPR_U32(ctx, 31, 0x20EBD4u);
    ctx->pc = 0x20EBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EBCCu;
    // 0x20ebd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20E768u, 0x20EBCCu, 0x20EBD4u)) {
        return;
    }
    ctx->pc = 0x20EBD4u;
label_20ebd4:
    // 0x20ebd4: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x20ebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_20ebd8:
    // 0x20ebd8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x20ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_20ebdc:
    // 0x20ebdc: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x20ebdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_20ebe0:
    // 0x20ebe0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20ebe4:
    if (ctx->pc == 0x20EBE4u) {
        ctx->pc = 0x20EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBE0u;
        // 0x20ebe4: 0x13103c  dsll32      $v0, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EBE8u;
        goto label_20ebe8;
    }
    ctx->pc = 0x20EBE0u;
    {
        const bool branch_taken_0x20ebe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBE0u;
        // 0x20ebe4: 0x13103c  dsll32      $v0, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ebe0) {
            ctx->pc = 0x20EBF0u;
            goto label_20ebf0;
        }
    }
    ctx->pc = 0x20EBE8u;
label_20ebe8:
    // 0x20ebe8: 0x1000000a  b           . + 4 + (0xA << 2)
label_20ebec:
    if (ctx->pc == 0x20EBECu) {
        ctx->pc = 0x20EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBE8u;
        // 0x20ebec: 0xae340018  sw          $s4, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EBF0u;
        goto label_20ebf0;
    }
    ctx->pc = 0x20EBE8u;
    {
        const bool branch_taken_0x20ebe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBE8u;
        // 0x20ebec: 0xae340018  sw          $s4, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ebe8) {
            ctx->pc = 0x20EC14u;
            goto label_20ec14;
        }
    }
    ctx->pc = 0x20EBF0u;
label_20ebf0:
    // 0x20ebf0: 0x9e240010  lwu         $a0, 0x10($s1)
    ctx->pc = 0x20ebf0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_20ebf4:
    // 0x20ebf4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x20ebf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_20ebf8:
    // 0x20ebf8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20ebfc:
    // 0x20ebfc: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x20ebfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
label_20ec00:
    // 0x20ec00: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x20ec00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20ec04:
    // 0x20ec04: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x20ec04u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
label_20ec08:
    // 0x20ec08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20ec08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20ec0c:
    // 0x20ec0c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20ec0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20ec10:
    // 0x20ec10: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x20ec10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_20ec14:
    // 0x20ec14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20ec14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20ec18:
    // 0x20ec18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20ec18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20ec1c:
    // 0x20ec1c: 0xc0839da  jal         func_20E768
label_20ec20:
    if (ctx->pc == 0x20EC20u) {
        ctx->pc = 0x20EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC1Cu;
        // 0x20ec20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC24u;
        goto label_20ec24;
    }
    ctx->pc = 0x20EC1Cu;
    SET_GPR_U32(ctx, 31, 0x20EC24u);
    ctx->pc = 0x20EC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC1Cu;
    // 0x20ec20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20E768u, 0x20EC1Cu, 0x20EC24u)) {
        return;
    }
    ctx->pc = 0x20EC24u;
label_20ec24:
    // 0x20ec24: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x20ec24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_20ec28:
    // 0x20ec28: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x20ec28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_20ec2c:
    // 0x20ec2c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_20ec30:
    if (ctx->pc == 0x20EC30u) {
        ctx->pc = 0x20EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC2Cu;
        // 0x20ec30: 0x74102b  sltu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC34u;
        goto label_20ec34;
    }
    ctx->pc = 0x20EC2Cu;
    {
        const bool branch_taken_0x20ec2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC2Cu;
        // 0x20ec30: 0x74102b  sltu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec2c) {
            ctx->pc = 0x20ECE8u;
            goto label_20ece8;
        }
    }
    ctx->pc = 0x20EC34u;
label_20ec34:
    // 0x20ec34: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_20ec38:
    if (ctx->pc == 0x20EC38u) {
        ctx->pc = 0x20EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC34u;
        // 0x20ec38: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC3Cu;
        goto label_20ec3c;
    }
    ctx->pc = 0x20EC34u;
    {
        const bool branch_taken_0x20ec34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC34u;
        // 0x20ec38: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec34) {
            ctx->pc = 0x20EC60u;
            goto label_20ec60;
        }
    }
    ctx->pc = 0x20EC3Cu;
label_20ec3c:
    // 0x20ec3c: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_20ec40:
    if (ctx->pc == 0x20EC40u) {
        ctx->pc = 0x20EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC3Cu;
        // 0x20ec40: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC44u;
        goto label_20ec44;
    }
    ctx->pc = 0x20EC3Cu;
    {
        const bool branch_taken_0x20ec3c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC3Cu;
        // 0x20ec40: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec3c) {
            ctx->pc = 0x20EC5Cu;
            goto label_20ec5c;
        }
    }
    ctx->pc = 0x20EC44u;
label_20ec44:
    // 0x20ec44: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x20ec44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20ec48:
    // 0x20ec48: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20ec48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20ec4c:
    // 0x20ec4c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20ec50:
    // 0x20ec50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20ec54:
    // 0x20ec54: 0x60f809  jalr        $v1
label_20ec58:
    if (ctx->pc == 0x20EC58u) {
        ctx->pc = 0x20EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC54u;
        // 0x20ec58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC5Cu;
        goto label_20ec5c;
    }
    ctx->pc = 0x20EC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20EC5Cu);
        ctx->pc = 0x20EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC54u;
        // 0x20ec58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EC54u, 0x20EC5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20EC5Cu;
label_20ec5c:
    // 0x20ec5c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x20ec5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20ec60:
    // 0x20ec60: 0x56a00001  bnel        $s5, $zero, . + 4 + (0x1 << 2)
label_20ec64:
    if (ctx->pc == 0x20EC64u) {
        ctx->pc = 0x20EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC60u;
        // 0x20ec64: 0xae33001c  sw          $s3, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC68u;
        goto label_20ec68;
    }
    ctx->pc = 0x20EC60u;
    {
        const bool branch_taken_0x20ec60 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ec60) {
            ctx->pc = 0x20EC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EC60u;
            // 0x20ec64: 0xae33001c  sw          $s3, 0x1C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EC68u;
            goto label_20ec68;
        }
    }
    ctx->pc = 0x20EC68u;
label_20ec68:
    // 0x20ec68: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x20ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_20ec6c:
    // 0x20ec6c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_20ec70:
    if (ctx->pc == 0x20EC70u) {
        ctx->pc = 0x20EC74u;
        goto label_20ec74;
    }
    ctx->pc = 0x20EC6Cu;
    {
        const bool branch_taken_0x20ec6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ec6c) {
            ctx->pc = 0x20ECC4u;
            goto label_20ecc4;
        }
    }
    ctx->pc = 0x20EC74u;
label_20ec74:
    // 0x20ec74: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x20ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_20ec78:
    // 0x20ec78: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x20ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_20ec7c:
    // 0x20ec7c: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x20ec7cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_20ec80:
    // 0x20ec80: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x20ec80u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_20ec84:
    // 0x20ec84: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x20ec84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_20ec88:
    // 0x20ec88: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_20ec8c:
    if (ctx->pc == 0x20EC8Cu) {
        ctx->pc = 0x20EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC88u;
        // 0x20ec8c: 0x391c0  sll         $s2, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC90u;
        goto label_20ec90;
    }
    ctx->pc = 0x20EC88u;
    {
        const bool branch_taken_0x20ec88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC88u;
        // 0x20ec8c: 0x391c0  sll         $s2, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec88) {
            ctx->pc = 0x20ECE8u;
            goto label_20ece8;
        }
    }
    ctx->pc = 0x20EC90u;
label_20ec90:
    // 0x20ec90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20ec90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ec94:
    // 0x20ec94: 0x0  nop
    ctx->pc = 0x20ec94u;
    // NOP
label_20ec98:
    // 0x20ec98: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x20ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_20ec9c:
    // 0x20ec9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20ec9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20eca0:
    // 0x20eca0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20eca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20eca4:
    // 0x20eca4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20eca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20eca8:
    // 0x20eca8: 0xc08489c  jal         func_212270
label_20ecac:
    if (ctx->pc == 0x20ECACu) {
        ctx->pc = 0x20ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECA8u;
        // 0x20ecac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ECB0u;
        goto label_20ecb0;
    }
    ctx->pc = 0x20ECA8u;
    SET_GPR_U32(ctx, 31, 0x20ECB0u);
    ctx->pc = 0x20ECACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ECA8u;
    // 0x20ecac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212270u, 0x20ECA8u, 0x20ECB0u)) {
        return;
    }
    ctx->pc = 0x20ECB0u;
label_20ecb0:
    // 0x20ecb0: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x20ecb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_20ecb4:
    // 0x20ecb4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_20ecb8:
    if (ctx->pc == 0x20ECB8u) {
        ctx->pc = 0x20ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECB4u;
        // 0x20ecb8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ECBCu;
        goto label_20ecbc;
    }
    ctx->pc = 0x20ECB4u;
    {
        const bool branch_taken_0x20ecb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ecb4) {
            ctx->pc = 0x20ECB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20ECB4u;
            // 0x20ecb8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ec98;
        }
    }
    ctx->pc = 0x20ECBCu;
label_20ecbc:
    // 0x20ecbc: 0x1000000a  b           . + 4 + (0xA << 2)
label_20ecc0:
    if (ctx->pc == 0x20ECC0u) {
        ctx->pc = 0x20ECC4u;
        goto label_20ecc4;
    }
    ctx->pc = 0x20ECBCu;
    {
        const bool branch_taken_0x20ecbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ecbc) {
            ctx->pc = 0x20ECE8u;
            goto label_20ece8;
        }
    }
    ctx->pc = 0x20ECC4u;
label_20ecc4:
    // 0x20ecc4: 0x16a0000a  bnez        $s5, . + 4 + (0xA << 2)
label_20ecc8:
    if (ctx->pc == 0x20ECC8u) {
        ctx->pc = 0x20ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECC4u;
        // 0x20ecc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ECCCu;
        goto label_20eccc;
    }
    ctx->pc = 0x20ECC4u;
    {
        const bool branch_taken_0x20ecc4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECC4u;
        // 0x20ecc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ecc4) {
            ctx->pc = 0x20ECF0u;
            goto label_20ecf0;
        }
    }
    ctx->pc = 0x20ECCCu;
label_20eccc:
    // 0x20eccc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x20ecccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20ecd0:
    // 0x20ecd0: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x20ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_20ecd4:
    // 0x20ecd4: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20ecd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20ecd8:
    // 0x20ecd8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20ecdc:
    // 0x20ecdc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20ece0:
    // 0x20ece0: 0x60f809  jalr        $v1
label_20ece4:
    if (ctx->pc == 0x20ECE4u) {
        ctx->pc = 0x20ECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECE0u;
        // 0x20ece4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ECE8u;
        goto label_20ece8;
    }
    ctx->pc = 0x20ECE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20ECE8u);
        ctx->pc = 0x20ECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECE0u;
        // 0x20ece4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ECE0u, 0x20ECE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20ECE8u;
label_20ece8:
    // 0x20ece8: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
label_20ecec:
    if (ctx->pc == 0x20ECECu) {
        ctx->pc = 0x20ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECE8u;
        // 0x20ecec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ECF0u;
        goto label_20ecf0;
    }
    ctx->pc = 0x20ECE8u;
    {
        const bool branch_taken_0x20ece8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECE8u;
        // 0x20ecec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ece8) {
            ctx->pc = 0x20ECF4u;
            goto label_20ecf4;
        }
    }
    ctx->pc = 0x20ECF0u;
label_20ecf0:
    // 0x20ecf0: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x20ecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_20ecf4:
    // 0x20ecf4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x20ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_20ecf8:
    // 0x20ecf8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ecfc:
    // 0x20ecfc: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x20ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_20ed00:
    // 0x20ed00: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x20ed00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20ed04:
    // 0x20ed04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20ed08:
    // 0x20ed08: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x20ed08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20ed0c:
    // 0x20ed0c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x20ed0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20ed10:
    // 0x20ed10: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20ed14:
    // 0x20ed14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20ed14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20ed18:
    // 0x20ed18: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x20ed18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20ed1c:
    // 0x20ed1c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x20ed1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20ed20:
    // 0x20ed20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20ed20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20ed24:
    // 0x20ed24: 0x3e00008  jr          $ra
label_20ed28:
    if (ctx->pc == 0x20ED28u) {
        ctx->pc = 0x20ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED24u;
        // 0x20ed28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ED2Cu;
        goto label_20ed2c;
    }
    ctx->pc = 0x20ED24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED24u;
        // 0x20ed28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ED24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20ED2Cu;
label_20ed2c:
    // 0x20ed2c: 0x0  nop
    ctx->pc = 0x20ed2cu;
    // NOP
    ctx->pc = 0x20ed30u;
}
