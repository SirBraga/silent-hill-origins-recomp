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

// Function: sub_0020CE38
// Address: 0x20ce38 - 0x20cf48
void sub_0020CE38_0x20ce38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CE38_0x20ce38");
#endif

    switch (ctx->pc) {
        case 0x20ce38u: goto label_20ce38;
        case 0x20ce3cu: goto label_20ce3c;
        case 0x20ce40u: goto label_20ce40;
        case 0x20ce44u: goto label_20ce44;
        case 0x20ce48u: goto label_20ce48;
        case 0x20ce4cu: goto label_20ce4c;
        case 0x20ce50u: goto label_20ce50;
        case 0x20ce54u: goto label_20ce54;
        case 0x20ce58u: goto label_20ce58;
        case 0x20ce5cu: goto label_20ce5c;
        case 0x20ce60u: goto label_20ce60;
        case 0x20ce64u: goto label_20ce64;
        case 0x20ce68u: goto label_20ce68;
        case 0x20ce6cu: goto label_20ce6c;
        case 0x20ce70u: goto label_20ce70;
        case 0x20ce74u: goto label_20ce74;
        case 0x20ce78u: goto label_20ce78;
        case 0x20ce7cu: goto label_20ce7c;
        case 0x20ce80u: goto label_20ce80;
        case 0x20ce84u: goto label_20ce84;
        case 0x20ce88u: goto label_20ce88;
        case 0x20ce8cu: goto label_20ce8c;
        case 0x20ce90u: goto label_20ce90;
        case 0x20ce94u: goto label_20ce94;
        case 0x20ce98u: goto label_20ce98;
        case 0x20ce9cu: goto label_20ce9c;
        case 0x20cea0u: goto label_20cea0;
        case 0x20cea4u: goto label_20cea4;
        case 0x20cea8u: goto label_20cea8;
        case 0x20ceacu: goto label_20ceac;
        case 0x20ceb0u: goto label_20ceb0;
        case 0x20ceb4u: goto label_20ceb4;
        case 0x20ceb8u: goto label_20ceb8;
        case 0x20cebcu: goto label_20cebc;
        case 0x20cec0u: goto label_20cec0;
        case 0x20cec4u: goto label_20cec4;
        case 0x20cec8u: goto label_20cec8;
        case 0x20ceccu: goto label_20cecc;
        case 0x20ced0u: goto label_20ced0;
        case 0x20ced4u: goto label_20ced4;
        case 0x20ced8u: goto label_20ced8;
        case 0x20cedcu: goto label_20cedc;
        case 0x20cee0u: goto label_20cee0;
        case 0x20cee4u: goto label_20cee4;
        case 0x20cee8u: goto label_20cee8;
        case 0x20ceecu: goto label_20ceec;
        case 0x20cef0u: goto label_20cef0;
        case 0x20cef4u: goto label_20cef4;
        case 0x20cef8u: goto label_20cef8;
        case 0x20cefcu: goto label_20cefc;
        case 0x20cf00u: goto label_20cf00;
        case 0x20cf04u: goto label_20cf04;
        case 0x20cf08u: goto label_20cf08;
        case 0x20cf0cu: goto label_20cf0c;
        case 0x20cf10u: goto label_20cf10;
        case 0x20cf14u: goto label_20cf14;
        case 0x20cf18u: goto label_20cf18;
        case 0x20cf1cu: goto label_20cf1c;
        case 0x20cf20u: goto label_20cf20;
        case 0x20cf24u: goto label_20cf24;
        case 0x20cf28u: goto label_20cf28;
        case 0x20cf2cu: goto label_20cf2c;
        case 0x20cf30u: goto label_20cf30;
        case 0x20cf34u: goto label_20cf34;
        case 0x20cf38u: goto label_20cf38;
        case 0x20cf3cu: goto label_20cf3c;
        case 0x20cf40u: goto label_20cf40;
        case 0x20cf44u: goto label_20cf44;
        default: break;
    }

    ctx->pc = 0x20ce38u;

label_20ce38:
    // 0x20ce38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20ce38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_20ce3c:
    // 0x20ce3c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x20ce3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_20ce40:
    // 0x20ce40: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x20ce40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_20ce44:
    // 0x20ce44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20ce44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20ce48:
    // 0x20ce48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20ce48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20ce4c:
    // 0x20ce4c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x20ce4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20ce50:
    // 0x20ce50: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x20ce50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_20ce54:
    // 0x20ce54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20ce54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20ce58:
    // 0x20ce58: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x20ce58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_20ce5c:
    // 0x20ce5c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x20ce5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20ce60:
    // 0x20ce60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ce60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20ce64:
    // 0x20ce64: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x20ce64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_20ce68:
    // 0x20ce68: 0x8e7101b0  lw          $s1, 0x1B0($s3)
    ctx->pc = 0x20ce68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 432)));
label_20ce6c:
    // 0x20ce6c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x20ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_20ce70:
    // 0x20ce70: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_20ce74:
    if (ctx->pc == 0x20CE74u) {
        ctx->pc = 0x20CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE70u;
        // 0x20ce74: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CE78u;
        goto label_20ce78;
    }
    ctx->pc = 0x20CE70u;
    {
        const bool branch_taken_0x20ce70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE70u;
        // 0x20ce74: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce70) {
            ctx->pc = 0x20CE98u;
            goto label_20ce98;
        }
    }
    ctx->pc = 0x20CE78u;
label_20ce78:
    // 0x20ce78: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x20ce78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_20ce7c:
    // 0x20ce7c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x20ce7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_20ce80:
    // 0x20ce80: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20ce80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ce84:
    // 0x20ce84: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x20ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_20ce88:
    // 0x20ce88: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x20ce88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_20ce8c:
    // 0x20ce8c: 0x40f809  jalr        $v0
label_20ce90:
    if (ctx->pc == 0x20CE90u) {
        ctx->pc = 0x20CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE8Cu;
        // 0x20ce90: 0x8e270010  lw          $a3, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CE94u;
        goto label_20ce94;
    }
    ctx->pc = 0x20CE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20CE94u);
        ctx->pc = 0x20CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE8Cu;
        // 0x20ce90: 0x8e270010  lw          $a3, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CE8Cu, 0x20CE94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CE94u;
label_20ce94:
    // 0x20ce94: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x20ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_20ce98:
    // 0x20ce98: 0x8e6201c4  lw          $v0, 0x1C4($s3)
    ctx->pc = 0x20ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 452)));
label_20ce9c:
    // 0x20ce9c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20ce9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20cea0:
    // 0x20cea0: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x20cea0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_20cea4:
    // 0x20cea4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20cea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20cea8:
    // 0x20cea8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x20cea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_20ceac:
    // 0x20ceac: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x20ceacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20ceb0:
    // 0x20ceb0: 0x8e2a0010  lw          $t2, 0x10($s1)
    ctx->pc = 0x20ceb0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_20ceb4:
    // 0x20ceb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20ceb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20ceb8:
    // 0x20ceb8: 0x8e320018  lw          $s2, 0x18($s1)
    ctx->pc = 0x20ceb8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_20cebc:
    // 0x20cebc: 0x60f809  jalr        $v1
label_20cec0:
    if (ctx->pc == 0x20CEC0u) {
        ctx->pc = 0x20CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEBCu;
        // 0x20cec0: 0x26290018  addiu       $t1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CEC4u;
        goto label_20cec4;
    }
    ctx->pc = 0x20CEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20CEC4u);
        ctx->pc = 0x20CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEBCu;
        // 0x20cec0: 0x26290018  addiu       $t1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CEBCu, 0x20CEC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CEC4u;
label_20cec4:
    // 0x20cec4: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x20cec4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_20cec8:
    // 0x20cec8: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x20cec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_20cecc:
    // 0x20cecc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_20ced0:
    if (ctx->pc == 0x20CED0u) {
        ctx->pc = 0x20CED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CECCu;
        // 0x20ced0: 0x2128023  subu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CED4u;
        goto label_20ced4;
    }
    ctx->pc = 0x20CECCu;
    {
        const bool branch_taken_0x20cecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CECCu;
        // 0x20ced0: 0x2128023  subu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cecc) {
            ctx->pc = 0x20CF04u;
            goto label_20cf04;
        }
    }
    ctx->pc = 0x20CED4u;
label_20ced4:
    // 0x20ced4: 0x8e6201cc  lw          $v0, 0x1CC($s3)
    ctx->pc = 0x20ced4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 460)));
label_20ced8:
    // 0x20ced8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x20ced8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_20cedc:
    // 0x20cedc: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x20cedcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_20cee0:
    // 0x20cee0: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x20cee0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_20cee4:
    // 0x20cee4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20cee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20cee8:
    // 0x20cee8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x20cee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20ceec:
    // 0x20ceec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20ceecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cef0:
    // 0x20cef0: 0x100f809  jalr        $t0
label_20cef4:
    if (ctx->pc == 0x20CEF4u) {
        ctx->pc = 0x20CEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEF0u;
        // 0x20cef4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CEF8u;
        goto label_20cef8;
    }
    ctx->pc = 0x20CEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x20CEF8u);
        ctx->pc = 0x20CEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEF0u;
        // 0x20cef4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CEF0u, 0x20CEF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CEF8u;
label_20cef8:
    // 0x20cef8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x20cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_20cefc:
    // 0x20cefc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20cf00:
    // 0x20cf00: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x20cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_20cf04:
    // 0x20cf04: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x20cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_20cf08:
    // 0x20cf08: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x20cf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_20cf0c:
    // 0x20cf0c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x20cf0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_20cf10:
    // 0x20cf10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_20cf14:
    if (ctx->pc == 0x20CF14u) {
        ctx->pc = 0x20CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF10u;
        // 0x20cf14: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CF18u;
        goto label_20cf18;
    }
    ctx->pc = 0x20CF10u;
    {
        const bool branch_taken_0x20cf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF10u;
        // 0x20cf14: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf10) {
            ctx->pc = 0x20CF28u;
            goto label_20cf28;
        }
    }
    ctx->pc = 0x20CF18u;
label_20cf18:
    // 0x20cf18: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x20cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_20cf1c:
    // 0x20cf1c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x20cf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_20cf20:
    // 0x20cf20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20cf24:
    // 0x20cf24: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x20cf24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_20cf28:
    // 0x20cf28: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x20cf28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20cf2c:
    // 0x20cf2c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x20cf2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20cf30:
    // 0x20cf30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20cf30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20cf34:
    // 0x20cf34: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x20cf34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20cf38:
    // 0x20cf38: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x20cf38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20cf3c:
    // 0x20cf3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20cf3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20cf40:
    // 0x20cf40: 0x3e00008  jr          $ra
label_20cf44:
    if (ctx->pc == 0x20CF44u) {
        ctx->pc = 0x20CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF40u;
        // 0x20cf44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CF48u;
        goto label_fallthrough_0x20cf40;
    }
    ctx->pc = 0x20CF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF40u;
        // 0x20cf44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20cf40:
    ctx->pc = 0x20CF48u;
}
