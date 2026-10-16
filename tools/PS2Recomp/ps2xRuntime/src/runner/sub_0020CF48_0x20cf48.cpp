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

// Function: sub_0020CF48
// Address: 0x20cf48 - 0x20d058
void sub_0020CF48_0x20cf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CF48_0x20cf48");
#endif

    switch (ctx->pc) {
        case 0x20cf48u: goto label_20cf48;
        case 0x20cf4cu: goto label_20cf4c;
        case 0x20cf50u: goto label_20cf50;
        case 0x20cf54u: goto label_20cf54;
        case 0x20cf58u: goto label_20cf58;
        case 0x20cf5cu: goto label_20cf5c;
        case 0x20cf60u: goto label_20cf60;
        case 0x20cf64u: goto label_20cf64;
        case 0x20cf68u: goto label_20cf68;
        case 0x20cf6cu: goto label_20cf6c;
        case 0x20cf70u: goto label_20cf70;
        case 0x20cf74u: goto label_20cf74;
        case 0x20cf78u: goto label_20cf78;
        case 0x20cf7cu: goto label_20cf7c;
        case 0x20cf80u: goto label_20cf80;
        case 0x20cf84u: goto label_20cf84;
        case 0x20cf88u: goto label_20cf88;
        case 0x20cf8cu: goto label_20cf8c;
        case 0x20cf90u: goto label_20cf90;
        case 0x20cf94u: goto label_20cf94;
        case 0x20cf98u: goto label_20cf98;
        case 0x20cf9cu: goto label_20cf9c;
        case 0x20cfa0u: goto label_20cfa0;
        case 0x20cfa4u: goto label_20cfa4;
        case 0x20cfa8u: goto label_20cfa8;
        case 0x20cfacu: goto label_20cfac;
        case 0x20cfb0u: goto label_20cfb0;
        case 0x20cfb4u: goto label_20cfb4;
        case 0x20cfb8u: goto label_20cfb8;
        case 0x20cfbcu: goto label_20cfbc;
        case 0x20cfc0u: goto label_20cfc0;
        case 0x20cfc4u: goto label_20cfc4;
        case 0x20cfc8u: goto label_20cfc8;
        case 0x20cfccu: goto label_20cfcc;
        case 0x20cfd0u: goto label_20cfd0;
        case 0x20cfd4u: goto label_20cfd4;
        case 0x20cfd8u: goto label_20cfd8;
        case 0x20cfdcu: goto label_20cfdc;
        case 0x20cfe0u: goto label_20cfe0;
        case 0x20cfe4u: goto label_20cfe4;
        case 0x20cfe8u: goto label_20cfe8;
        case 0x20cfecu: goto label_20cfec;
        case 0x20cff0u: goto label_20cff0;
        case 0x20cff4u: goto label_20cff4;
        case 0x20cff8u: goto label_20cff8;
        case 0x20cffcu: goto label_20cffc;
        case 0x20d000u: goto label_20d000;
        case 0x20d004u: goto label_20d004;
        case 0x20d008u: goto label_20d008;
        case 0x20d00cu: goto label_20d00c;
        case 0x20d010u: goto label_20d010;
        case 0x20d014u: goto label_20d014;
        case 0x20d018u: goto label_20d018;
        case 0x20d01cu: goto label_20d01c;
        case 0x20d020u: goto label_20d020;
        case 0x20d024u: goto label_20d024;
        case 0x20d028u: goto label_20d028;
        case 0x20d02cu: goto label_20d02c;
        case 0x20d030u: goto label_20d030;
        case 0x20d034u: goto label_20d034;
        case 0x20d038u: goto label_20d038;
        case 0x20d03cu: goto label_20d03c;
        case 0x20d040u: goto label_20d040;
        case 0x20d044u: goto label_20d044;
        case 0x20d048u: goto label_20d048;
        case 0x20d04cu: goto label_20d04c;
        case 0x20d050u: goto label_20d050;
        case 0x20d054u: goto label_20d054;
        default: break;
    }

    ctx->pc = 0x20cf48u;

label_20cf48:
    // 0x20cf48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20cf48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_20cf4c:
    // 0x20cf4c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x20cf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_20cf50:
    // 0x20cf50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20cf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20cf54:
    // 0x20cf54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20cf54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20cf58:
    // 0x20cf58: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x20cf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_20cf5c:
    // 0x20cf5c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x20cf5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_20cf60:
    // 0x20cf60: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x20cf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_20cf64:
    // 0x20cf64: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x20cf64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_20cf68:
    // 0x20cf68: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x20cf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_20cf6c:
    // 0x20cf6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20cf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20cf70:
    // 0x20cf70: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x20cf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_20cf74:
    // 0x20cf74: 0x8e5101b0  lw          $s1, 0x1B0($s2)
    ctx->pc = 0x20cf74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
label_20cf78:
    // 0x20cf78: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x20cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_20cf7c:
    // 0x20cf7c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_20cf80:
    if (ctx->pc == 0x20CF80u) {
        ctx->pc = 0x20CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF7Cu;
        // 0x20cf80: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CF84u;
        goto label_20cf84;
    }
    ctx->pc = 0x20CF7Cu;
    {
        const bool branch_taken_0x20cf7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF7Cu;
        // 0x20cf80: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf7c) {
            ctx->pc = 0x20CFA8u;
            goto label_20cfa8;
        }
    }
    ctx->pc = 0x20CF84u;
label_20cf84:
    // 0x20cf84: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x20cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_20cf88:
    // 0x20cf88: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x20cf88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_20cf8c:
    // 0x20cf8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20cf8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cf90:
    // 0x20cf90: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x20cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_20cf94:
    // 0x20cf94: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x20cf94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_20cf98:
    // 0x20cf98: 0x40f809  jalr        $v0
label_20cf9c:
    if (ctx->pc == 0x20CF9Cu) {
        ctx->pc = 0x20CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF98u;
        // 0x20cf9c: 0x8e270010  lw          $a3, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CFA0u;
        goto label_20cfa0;
    }
    ctx->pc = 0x20CF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20CFA0u);
        ctx->pc = 0x20CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF98u;
        // 0x20cf9c: 0x8e270010  lw          $a3, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CF98u, 0x20CFA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CFA0u;
label_20cfa0:
    // 0x20cfa0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x20cfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_20cfa4:
    // 0x20cfa4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x20cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_20cfa8:
    // 0x20cfa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20cfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20cfac:
    // 0x20cfac: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x20cfacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20cfb0:
    // 0x20cfb0: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x20cfb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_20cfb4:
    // 0x20cfb4: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x20cfb4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20cfb8:
    // 0x20cfb8: 0x2865023  subu        $t2, $s4, $a2
    ctx->pc = 0x20cfb8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_20cfbc:
    // 0x20cfbc: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x20cfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_20cfc0:
    // 0x20cfc0: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x20cfc0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_20cfc4:
    // 0x20cfc4: 0x8e480074  lw          $t0, 0x74($s2)
    ctx->pc = 0x20cfc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_20cfc8:
    // 0x20cfc8: 0x150102b  sltu        $v0, $t2, $s0
    ctx->pc = 0x20cfc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_20cfcc:
    // 0x20cfcc: 0x8e4701cc  lw          $a3, 0x1CC($s2)
    ctx->pc = 0x20cfccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 460)));
label_20cfd0:
    // 0x20cfd0: 0x142800b  movn        $s0, $t2, $v0
    ctx->pc = 0x20cfd0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 10));
label_20cfd4:
    // 0x20cfd4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x20cfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_20cfd8:
    // 0x20cfd8: 0x1035023  subu        $t2, $t0, $v1
    ctx->pc = 0x20cfd8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_20cfdc:
    // 0x20cfdc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x20cfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_20cfe0:
    // 0x20cfe0: 0x150102b  sltu        $v0, $t2, $s0
    ctx->pc = 0x20cfe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_20cfe4:
    // 0x20cfe4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x20cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_20cfe8:
    // 0x20cfe8: 0x142800b  movn        $s0, $t2, $v0
    ctx->pc = 0x20cfe8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 10));
label_20cfec:
    // 0x20cfec: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x20cfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_20cff0:
    // 0x20cff0: 0x2a63021  addu        $a2, $s5, $a2
    ctx->pc = 0x20cff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
label_20cff4:
    // 0x20cff4: 0x60f809  jalr        $v1
label_20cff8:
    if (ctx->pc == 0x20CFF8u) {
        ctx->pc = 0x20CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFF4u;
        // 0x20cff8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CFFCu;
        goto label_20cffc;
    }
    ctx->pc = 0x20CFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20CFFCu);
        ctx->pc = 0x20CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFF4u;
        // 0x20cff8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CFF4u, 0x20CFFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CFFCu;
label_20cffc:
    // 0x20cffc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x20cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20d000:
    // 0x20d000: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20d000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20d004:
    // 0x20d004: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x20d004u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_20d008:
    // 0x20d008: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x20d008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_20d00c:
    // 0x20d00c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x20d00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_20d010:
    // 0x20d010: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20d010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20d014:
    // 0x20d014: 0x44182b  sltu        $v1, $v0, $a0
    ctx->pc = 0x20d014u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_20d018:
    // 0x20d018: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_20d01c:
    if (ctx->pc == 0x20D01Cu) {
        ctx->pc = 0x20D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D018u;
        // 0x20d01c: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D020u;
        goto label_20d020;
    }
    ctx->pc = 0x20D018u;
    {
        const bool branch_taken_0x20d018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D018u;
        // 0x20d01c: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d018) {
            ctx->pc = 0x20D030u;
            goto label_20d030;
        }
    }
    ctx->pc = 0x20D020u;
label_20d020:
    // 0x20d020: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x20d020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_20d024:
    // 0x20d024: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x20d024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_20d028:
    // 0x20d028: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20d028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20d02c:
    // 0x20d02c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x20d02cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_20d030:
    // 0x20d030: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x20d030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20d034:
    // 0x20d034: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x20d034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20d038:
    // 0x20d038: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x20d038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20d03c:
    // 0x20d03c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20d03cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20d040:
    // 0x20d040: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x20d040u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20d044:
    // 0x20d044: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x20d044u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20d048:
    // 0x20d048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20d04c:
    // 0x20d04c: 0x3e00008  jr          $ra
label_20d050:
    if (ctx->pc == 0x20D050u) {
        ctx->pc = 0x20D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D04Cu;
        // 0x20d050: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D054u;
        goto label_20d054;
    }
    ctx->pc = 0x20D04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D04Cu;
        // 0x20d050: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D054u;
label_20d054:
    // 0x20d054: 0x0  nop
    ctx->pc = 0x20d054u;
    // NOP
    ctx->pc = 0x20d058u;
}
