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

// Function: sub_0022BE00
// Address: 0x22be00 - 0x22bef0
void sub_0022BE00_0x22be00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BE00_0x22be00");
#endif

    switch (ctx->pc) {
        case 0x22be00u: goto label_22be00;
        case 0x22be04u: goto label_22be04;
        case 0x22be08u: goto label_22be08;
        case 0x22be0cu: goto label_22be0c;
        case 0x22be10u: goto label_22be10;
        case 0x22be14u: goto label_22be14;
        case 0x22be18u: goto label_22be18;
        case 0x22be1cu: goto label_22be1c;
        case 0x22be20u: goto label_22be20;
        case 0x22be24u: goto label_22be24;
        case 0x22be28u: goto label_22be28;
        case 0x22be2cu: goto label_22be2c;
        case 0x22be30u: goto label_22be30;
        case 0x22be34u: goto label_22be34;
        case 0x22be38u: goto label_22be38;
        case 0x22be3cu: goto label_22be3c;
        case 0x22be40u: goto label_22be40;
        case 0x22be44u: goto label_22be44;
        case 0x22be48u: goto label_22be48;
        case 0x22be4cu: goto label_22be4c;
        case 0x22be50u: goto label_22be50;
        case 0x22be54u: goto label_22be54;
        case 0x22be58u: goto label_22be58;
        case 0x22be5cu: goto label_22be5c;
        case 0x22be60u: goto label_22be60;
        case 0x22be64u: goto label_22be64;
        case 0x22be68u: goto label_22be68;
        case 0x22be6cu: goto label_22be6c;
        case 0x22be70u: goto label_22be70;
        case 0x22be74u: goto label_22be74;
        case 0x22be78u: goto label_22be78;
        case 0x22be7cu: goto label_22be7c;
        case 0x22be80u: goto label_22be80;
        case 0x22be84u: goto label_22be84;
        case 0x22be88u: goto label_22be88;
        case 0x22be8cu: goto label_22be8c;
        case 0x22be90u: goto label_22be90;
        case 0x22be94u: goto label_22be94;
        case 0x22be98u: goto label_22be98;
        case 0x22be9cu: goto label_22be9c;
        case 0x22bea0u: goto label_22bea0;
        case 0x22bea4u: goto label_22bea4;
        case 0x22bea8u: goto label_22bea8;
        case 0x22beacu: goto label_22beac;
        case 0x22beb0u: goto label_22beb0;
        case 0x22beb4u: goto label_22beb4;
        case 0x22beb8u: goto label_22beb8;
        case 0x22bebcu: goto label_22bebc;
        case 0x22bec0u: goto label_22bec0;
        case 0x22bec4u: goto label_22bec4;
        case 0x22bec8u: goto label_22bec8;
        case 0x22beccu: goto label_22becc;
        case 0x22bed0u: goto label_22bed0;
        case 0x22bed4u: goto label_22bed4;
        case 0x22bed8u: goto label_22bed8;
        case 0x22bedcu: goto label_22bedc;
        case 0x22bee0u: goto label_22bee0;
        case 0x22bee4u: goto label_22bee4;
        case 0x22bee8u: goto label_22bee8;
        case 0x22beecu: goto label_22beec;
        default: break;
    }

    ctx->pc = 0x22be00u;

label_22be00:
    // 0x22be00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22be00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_22be04:
    // 0x22be04: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x22be04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_22be08:
    // 0x22be08: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x22be08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_22be0c:
    // 0x22be0c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x22be0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_22be10:
    // 0x22be10: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x22be10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_22be14:
    // 0x22be14: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x22be14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22be18:
    // 0x22be18: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x22be18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_22be1c:
    // 0x22be1c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x22be1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22be20:
    // 0x22be20: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x22be20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_22be24:
    // 0x22be24: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x22be24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_22be28:
    // 0x22be28: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x22be28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_22be2c:
    // 0x22be2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22be2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22be30:
    // 0x22be30: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_22be34:
    if (ctx->pc == 0x22BE34u) {
        ctx->pc = 0x22BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE30u;
        // 0x22be34: 0x3262000f  andi        $v0, $s3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE38u;
        goto label_22be38;
    }
    ctx->pc = 0x22BE30u;
    {
        const bool branch_taken_0x22be30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE30u;
        // 0x22be34: 0x3262000f  andi        $v0, $s3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be30) {
            ctx->pc = 0x22BE40u;
            goto label_22be40;
        }
    }
    ctx->pc = 0x22BE38u;
label_22be38:
    // 0x22be38: 0x10000021  b           . + 4 + (0x21 << 2)
label_22be3c:
    if (ctx->pc == 0x22BE3Cu) {
        ctx->pc = 0x22BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE38u;
        // 0x22be3c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE40u;
        goto label_22be40;
    }
    ctx->pc = 0x22BE38u;
    {
        const bool branch_taken_0x22be38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE38u;
        // 0x22be3c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be38) {
            ctx->pc = 0x22BEC0u;
            goto label_22bec0;
        }
    }
    ctx->pc = 0x22BE40u;
label_22be40:
    // 0x22be40: 0x24a4001c  addiu       $a0, $a1, 0x1C
    ctx->pc = 0x22be40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
label_22be44:
    // 0x22be44: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x22be44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22be48:
    // 0x22be48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22be48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_22be4c:
    // 0x22be4c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22be4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_22be50:
    // 0x22be50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22be50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22be54:
    // 0x22be54: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x22be54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_22be58:
    // 0x22be58: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22be58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22be5c:
    // 0x22be5c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_22be60:
    if (ctx->pc == 0x22BE60u) {
        ctx->pc = 0x22BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE5Cu;
        // 0x22be60: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE64u;
        goto label_22be64;
    }
    ctx->pc = 0x22BE5Cu;
    {
        const bool branch_taken_0x22be5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE5Cu;
        // 0x22be60: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be5c) {
            ctx->pc = 0x22BEA0u;
            goto label_22bea0;
        }
    }
    ctx->pc = 0x22BE64u;
label_22be64:
    // 0x22be64: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x22be64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_22be68:
    // 0x22be68: 0x8ec44004  lw          $a0, 0x4004($s6)
    ctx->pc = 0x22be68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16388)));
label_22be6c:
    // 0x22be6c: 0x8c6210e0  lw          $v0, 0x10E0($v1)
    ctx->pc = 0x22be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4320)));
label_22be70:
    // 0x22be70: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x22be70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_22be74:
    // 0x22be74: 0x40f809  jalr        $v0
label_22be78:
    if (ctx->pc == 0x22BE78u) {
        ctx->pc = 0x22BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE74u;
        // 0x22be78: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE7Cu;
        goto label_22be7c;
    }
    ctx->pc = 0x22BE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22BE7Cu);
        ctx->pc = 0x22BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE74u;
        // 0x22be78: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BE74u, 0x22BE7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22BE7Cu;
label_22be7c:
    // 0x22be7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22be7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22be80:
    // 0x22be80: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x22be80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_22be84:
    // 0x22be84: 0xc08af54  jal         func_22BD50
label_22be88:
    if (ctx->pc == 0x22BE88u) {
        ctx->pc = 0x22BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE84u;
        // 0x22be88: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE8Cu;
        goto label_22be8c;
    }
    ctx->pc = 0x22BE84u;
    SET_GPR_U32(ctx, 31, 0x22BE8Cu);
    ctx->pc = 0x22BE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE84u;
    // 0x22be88: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BD50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22BD50u, 0x22BE84u, 0x22BE8Cu)) {
        return;
    }
    ctx->pc = 0x22BE8Cu;
label_22be8c:
    // 0x22be8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22be90:
    // 0x22be90: 0x16230003  bne         $s1, $v1, . + 4 + (0x3 << 2)
label_22be94:
    if (ctx->pc == 0x22BE94u) {
        ctx->pc = 0x22BE98u;
        goto label_22be98;
    }
    ctx->pc = 0x22BE90u;
    {
        const bool branch_taken_0x22be90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x22be90) {
            ctx->pc = 0x22BEA0u;
            goto label_22bea0;
        }
    }
    ctx->pc = 0x22BE98u;
label_22be98:
    // 0x22be98: 0xc08adae  jal         func_22B6B8
label_22be9c:
    if (ctx->pc == 0x22BE9Cu) {
        ctx->pc = 0x22BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE98u;
        // 0x22be9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BEA0u;
        goto label_22bea0;
    }
    ctx->pc = 0x22BE98u;
    SET_GPR_U32(ctx, 31, 0x22BEA0u);
    ctx->pc = 0x22BE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE98u;
    // 0x22be9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B6B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B6B8u, 0x22BE98u, 0x22BEA0u)) {
        return;
    }
    ctx->pc = 0x22BEA0u;
label_22bea0:
    // 0x22bea0: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x22bea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_22bea4:
    // 0x22bea4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22bea4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_22bea8:
    // 0x22bea8: 0x13993a  dsrl        $s3, $s3, 4
    ctx->pc = 0x22bea8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> 4);
label_22beac:
    // 0x22beac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22beacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22beb0:
    // 0x22beb0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22beb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_22beb4:
    // 0x22beb4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x22beb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_22beb8:
    // 0x22beb8: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
label_22bebc:
    if (ctx->pc == 0x22BEBCu) {
        ctx->pc = 0x22BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEB8u;
        // 0x22bebc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BEC0u;
        goto label_22bec0;
    }
    ctx->pc = 0x22BEB8u;
    {
        const bool branch_taken_0x22beb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEB8u;
        // 0x22bebc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22beb8) {
            ctx->pc = 0x22BE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22be30;
        }
    }
    ctx->pc = 0x22BEC0u;
label_22bec0:
    // 0x22bec0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x22bec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_22bec4:
    // 0x22bec4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x22bec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_22bec8:
    // 0x22bec8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x22bec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22becc:
    // 0x22becc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x22beccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22bed0:
    // 0x22bed0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x22bed0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22bed4:
    // 0x22bed4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x22bed4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22bed8:
    // 0x22bed8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x22bed8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22bedc:
    // 0x22bedc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22bedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22bee0:
    // 0x22bee0: 0x3e00008  jr          $ra
label_22bee4:
    if (ctx->pc == 0x22BEE4u) {
        ctx->pc = 0x22BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEE0u;
        // 0x22bee4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BEE8u;
        goto label_22bee8;
    }
    ctx->pc = 0x22BEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEE0u;
        // 0x22bee4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BEE8u;
label_22bee8:
    // 0x22bee8: 0xaf84c000  sw          $a0, -0x4000($gp)
    ctx->pc = 0x22bee8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950912), GPR_U32(ctx, 4));
label_22beec:
    // 0x22beec: 0x0  nop
    ctx->pc = 0x22beecu;
    // NOP
    ctx->pc = 0x22bef0u;
}
