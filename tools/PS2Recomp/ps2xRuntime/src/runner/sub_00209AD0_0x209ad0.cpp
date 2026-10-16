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

// Function: sub_00209AD0
// Address: 0x209ad0 - 0x209c68
void sub_00209AD0_0x209ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209AD0_0x209ad0");
#endif

    switch (ctx->pc) {
        case 0x209ad0u: goto label_209ad0;
        case 0x209ad4u: goto label_209ad4;
        case 0x209ad8u: goto label_209ad8;
        case 0x209adcu: goto label_209adc;
        case 0x209ae0u: goto label_209ae0;
        case 0x209ae4u: goto label_209ae4;
        case 0x209ae8u: goto label_209ae8;
        case 0x209aecu: goto label_209aec;
        case 0x209af0u: goto label_209af0;
        case 0x209af4u: goto label_209af4;
        case 0x209af8u: goto label_209af8;
        case 0x209afcu: goto label_209afc;
        case 0x209b00u: goto label_209b00;
        case 0x209b04u: goto label_209b04;
        case 0x209b08u: goto label_209b08;
        case 0x209b0cu: goto label_209b0c;
        case 0x209b10u: goto label_209b10;
        case 0x209b14u: goto label_209b14;
        case 0x209b18u: goto label_209b18;
        case 0x209b1cu: goto label_209b1c;
        case 0x209b20u: goto label_209b20;
        case 0x209b24u: goto label_209b24;
        case 0x209b28u: goto label_209b28;
        case 0x209b2cu: goto label_209b2c;
        case 0x209b30u: goto label_209b30;
        case 0x209b34u: goto label_209b34;
        case 0x209b38u: goto label_209b38;
        case 0x209b3cu: goto label_209b3c;
        case 0x209b40u: goto label_209b40;
        case 0x209b44u: goto label_209b44;
        case 0x209b48u: goto label_209b48;
        case 0x209b4cu: goto label_209b4c;
        case 0x209b50u: goto label_209b50;
        case 0x209b54u: goto label_209b54;
        case 0x209b58u: goto label_209b58;
        case 0x209b5cu: goto label_209b5c;
        case 0x209b60u: goto label_209b60;
        case 0x209b64u: goto label_209b64;
        case 0x209b68u: goto label_209b68;
        case 0x209b6cu: goto label_209b6c;
        case 0x209b70u: goto label_209b70;
        case 0x209b74u: goto label_209b74;
        case 0x209b78u: goto label_209b78;
        case 0x209b7cu: goto label_209b7c;
        case 0x209b80u: goto label_209b80;
        case 0x209b84u: goto label_209b84;
        case 0x209b88u: goto label_209b88;
        case 0x209b8cu: goto label_209b8c;
        case 0x209b90u: goto label_209b90;
        case 0x209b94u: goto label_209b94;
        case 0x209b98u: goto label_209b98;
        case 0x209b9cu: goto label_209b9c;
        case 0x209ba0u: goto label_209ba0;
        case 0x209ba4u: goto label_209ba4;
        case 0x209ba8u: goto label_209ba8;
        case 0x209bacu: goto label_209bac;
        case 0x209bb0u: goto label_209bb0;
        case 0x209bb4u: goto label_209bb4;
        case 0x209bb8u: goto label_209bb8;
        case 0x209bbcu: goto label_209bbc;
        case 0x209bc0u: goto label_209bc0;
        case 0x209bc4u: goto label_209bc4;
        case 0x209bc8u: goto label_209bc8;
        case 0x209bccu: goto label_209bcc;
        case 0x209bd0u: goto label_209bd0;
        case 0x209bd4u: goto label_209bd4;
        case 0x209bd8u: goto label_209bd8;
        case 0x209bdcu: goto label_209bdc;
        case 0x209be0u: goto label_209be0;
        case 0x209be4u: goto label_209be4;
        case 0x209be8u: goto label_209be8;
        case 0x209becu: goto label_209bec;
        case 0x209bf0u: goto label_209bf0;
        case 0x209bf4u: goto label_209bf4;
        case 0x209bf8u: goto label_209bf8;
        case 0x209bfcu: goto label_209bfc;
        case 0x209c00u: goto label_209c00;
        case 0x209c04u: goto label_209c04;
        case 0x209c08u: goto label_209c08;
        case 0x209c0cu: goto label_209c0c;
        case 0x209c10u: goto label_209c10;
        case 0x209c14u: goto label_209c14;
        case 0x209c18u: goto label_209c18;
        case 0x209c1cu: goto label_209c1c;
        case 0x209c20u: goto label_209c20;
        case 0x209c24u: goto label_209c24;
        case 0x209c28u: goto label_209c28;
        case 0x209c2cu: goto label_209c2c;
        case 0x209c30u: goto label_209c30;
        case 0x209c34u: goto label_209c34;
        case 0x209c38u: goto label_209c38;
        case 0x209c3cu: goto label_209c3c;
        case 0x209c40u: goto label_209c40;
        case 0x209c44u: goto label_209c44;
        case 0x209c48u: goto label_209c48;
        case 0x209c4cu: goto label_209c4c;
        case 0x209c50u: goto label_209c50;
        case 0x209c54u: goto label_209c54;
        case 0x209c58u: goto label_209c58;
        case 0x209c5cu: goto label_209c5c;
        case 0x209c60u: goto label_209c60;
        case 0x209c64u: goto label_209c64;
        default: break;
    }

    ctx->pc = 0x209ad0u;

label_209ad0:
    // 0x209ad0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x209ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_209ad4:
    // 0x209ad4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x209ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_209ad8:
    // 0x209ad8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x209ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_209adc:
    // 0x209adc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x209adcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209ae0:
    // 0x209ae0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x209ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_209ae4:
    // 0x209ae4: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x209ae4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_209ae8:
    // 0x209ae8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x209ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_209aec:
    // 0x209aec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x209aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_209af0:
    // 0x209af0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x209af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_209af4:
    // 0x209af4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_209af8:
    // 0x209af8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x209af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_209afc:
    // 0x209afc: 0x8e920018  lw          $s2, 0x18($s4)
    ctx->pc = 0x209afcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_209b00:
    // 0x209b00: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x209b00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_209b04:
    // 0x209b04: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x209b04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_209b08:
    // 0x209b08: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
label_209b0c:
    if (ctx->pc == 0x209B0Cu) {
        ctx->pc = 0x209B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B08u;
        // 0x209b0c: 0x92330000  lbu         $s3, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B10u;
        goto label_209b10;
    }
    ctx->pc = 0x209B08u;
    {
        const bool branch_taken_0x209b08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x209b08) {
            ctx->pc = 0x209B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209B08u;
            // 0x209b0c: 0x92330000  lbu         $s3, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209B30u;
            goto label_209b30;
        }
    }
    ctx->pc = 0x209B10u;
label_209b10:
    // 0x209b10: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x209b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_209b14:
    // 0x209b14: 0x40f809  jalr        $v0
label_209b18:
    if (ctx->pc == 0x209B18u) {
        ctx->pc = 0x209B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B14u;
        // 0x209b18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B1Cu;
        goto label_209b1c;
    }
    ctx->pc = 0x209B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209B1Cu);
        ctx->pc = 0x209B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B14u;
        // 0x209b18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209B14u, 0x209B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209B1Cu;
label_209b1c:
    // 0x209b1c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_209b20:
    if (ctx->pc == 0x209B20u) {
        ctx->pc = 0x209B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B1Cu;
        // 0x209b20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B24u;
        goto label_209b24;
    }
    ctx->pc = 0x209B1Cu;
    {
        const bool branch_taken_0x209b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B1Cu;
        // 0x209b20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209b1c) {
            ctx->pc = 0x209C40u;
            goto label_209c40;
        }
    }
    ctx->pc = 0x209B24u;
label_209b24:
    // 0x209b24: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x209b24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_209b28:
    // 0x209b28: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x209b28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_209b2c:
    // 0x209b2c: 0x92330000  lbu         $s3, 0x0($s1)
    ctx->pc = 0x209b2cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_209b30:
    // 0x209b30: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x209b30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_209b34:
    // 0x209b34: 0x12760014  beq         $s3, $s6, . + 4 + (0x14 << 2)
label_209b38:
    if (ctx->pc == 0x209B38u) {
        ctx->pc = 0x209B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B34u;
        // 0x209b38: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B3Cu;
        goto label_209b3c;
    }
    ctx->pc = 0x209B34u;
    {
        const bool branch_taken_0x209b34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 22));
        ctx->pc = 0x209B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B34u;
        // 0x209b38: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209b34) {
            ctx->pc = 0x209B88u;
            goto label_209b88;
        }
    }
    ctx->pc = 0x209B3Cu;
label_209b3c:
    // 0x209b3c: 0x241500ff  addiu       $s5, $zero, 0xFF
    ctx->pc = 0x209b3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_209b40:
    // 0x209b40: 0x8e8301b8  lw          $v1, 0x1B8($s4)
    ctx->pc = 0x209b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
label_209b44:
    // 0x209b44: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x209b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_209b48:
    // 0x209b48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x209b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_209b4c:
    // 0x209b4c: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x209b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_209b50:
    // 0x209b50: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x209b50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_209b54:
    // 0x209b54: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_209b58:
    if (ctx->pc == 0x209B58u) {
        ctx->pc = 0x209B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B54u;
        // 0x209b58: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B5Cu;
        goto label_209b5c;
    }
    ctx->pc = 0x209B54u;
    {
        const bool branch_taken_0x209b54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x209B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B54u;
        // 0x209b58: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209b54) {
            ctx->pc = 0x209B78u;
            goto label_209b78;
        }
    }
    ctx->pc = 0x209B5Cu;
label_209b5c:
    // 0x209b5c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x209b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_209b60:
    // 0x209b60: 0x40f809  jalr        $v0
label_209b64:
    if (ctx->pc == 0x209B64u) {
        ctx->pc = 0x209B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B60u;
        // 0x209b64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B68u;
        goto label_209b68;
    }
    ctx->pc = 0x209B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209B68u);
        ctx->pc = 0x209B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B60u;
        // 0x209b64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209B60u, 0x209B68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209B68u;
label_209b68:
    // 0x209b68: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_209b6c:
    if (ctx->pc == 0x209B6Cu) {
        ctx->pc = 0x209B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B68u;
        // 0x209b6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B70u;
        goto label_209b70;
    }
    ctx->pc = 0x209B68u;
    {
        const bool branch_taken_0x209b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B68u;
        // 0x209b6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209b68) {
            ctx->pc = 0x209C40u;
            goto label_209c40;
        }
    }
    ctx->pc = 0x209B70u;
label_209b70:
    // 0x209b70: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x209b70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_209b74:
    // 0x209b74: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x209b74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_209b78:
    // 0x209b78: 0x92330000  lbu         $s3, 0x0($s1)
    ctx->pc = 0x209b78u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_209b7c:
    // 0x209b7c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x209b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_209b80:
    // 0x209b80: 0x1675ffef  bne         $s3, $s5, . + 4 + (-0x11 << 2)
label_209b84:
    if (ctx->pc == 0x209B84u) {
        ctx->pc = 0x209B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B80u;
        // 0x209b84: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B88u;
        goto label_209b88;
    }
    ctx->pc = 0x209B80u;
    {
        const bool branch_taken_0x209b80 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        ctx->pc = 0x209B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B80u;
        // 0x209b84: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209b80) {
            ctx->pc = 0x209B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209b40;
        }
    }
    ctx->pc = 0x209B88u;
label_209b88:
    // 0x209b88: 0x5600000b  bnel        $s0, $zero, . + 4 + (0xB << 2)
label_209b8c:
    if (ctx->pc == 0x209B8Cu) {
        ctx->pc = 0x209B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B88u;
        // 0x209b8c: 0x92330000  lbu         $s3, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B90u;
        goto label_209b90;
    }
    ctx->pc = 0x209B88u;
    {
        const bool branch_taken_0x209b88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x209b88) {
            ctx->pc = 0x209B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209B88u;
            // 0x209b8c: 0x92330000  lbu         $s3, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209BB8u;
            goto label_209bb8;
        }
    }
    ctx->pc = 0x209B90u;
label_209b90:
    // 0x209b90: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x209b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_209b94:
    // 0x209b94: 0x40f809  jalr        $v0
label_209b98:
    if (ctx->pc == 0x209B98u) {
        ctx->pc = 0x209B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B94u;
        // 0x209b98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B9Cu;
        goto label_209b9c;
    }
    ctx->pc = 0x209B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209B9Cu);
        ctx->pc = 0x209B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B94u;
        // 0x209b98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209B94u, 0x209B9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209B9Cu;
label_209b9c:
    // 0x209b9c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_209ba0:
    if (ctx->pc == 0x209BA0u) {
        ctx->pc = 0x209BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B9Cu;
        // 0x209ba0: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BA4u;
        goto label_209ba4;
    }
    ctx->pc = 0x209B9Cu;
    {
        const bool branch_taken_0x209b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209b9c) {
            ctx->pc = 0x209BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209B9Cu;
            // 0x209ba0: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209BB0u;
            goto label_209bb0;
        }
    }
    ctx->pc = 0x209BA4u;
label_209ba4:
    // 0x209ba4: 0x10000026  b           . + 4 + (0x26 << 2)
label_209ba8:
    if (ctx->pc == 0x209BA8u) {
        ctx->pc = 0x209BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BA4u;
        // 0x209ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BACu;
        goto label_209bac;
    }
    ctx->pc = 0x209BA4u;
    {
        const bool branch_taken_0x209ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BA4u;
        // 0x209ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209ba4) {
            ctx->pc = 0x209C40u;
            goto label_209c40;
        }
    }
    ctx->pc = 0x209BACu;
label_209bac:
    // 0x209bac: 0x0  nop
    ctx->pc = 0x209bacu;
    // NOP
label_209bb0:
    // 0x209bb0: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x209bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_209bb4:
    // 0x209bb4: 0x92330000  lbu         $s3, 0x0($s1)
    ctx->pc = 0x209bb4u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_209bb8:
    // 0x209bb8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x209bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_209bbc:
    // 0x209bbc: 0x1276fff2  beq         $s3, $s6, . + 4 + (-0xE << 2)
label_209bc0:
    if (ctx->pc == 0x209BC0u) {
        ctx->pc = 0x209BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BBCu;
        // 0x209bc0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BC4u;
        goto label_209bc4;
    }
    ctx->pc = 0x209BBCu;
    {
        const bool branch_taken_0x209bbc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 22));
        ctx->pc = 0x209BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BBCu;
        // 0x209bc0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209bbc) {
            ctx->pc = 0x209B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209b88;
        }
    }
    ctx->pc = 0x209BC4u;
label_209bc4:
    // 0x209bc4: 0x56600008  bnel        $s3, $zero, . + 4 + (0x8 << 2)
label_209bc8:
    if (ctx->pc == 0x209BC8u) {
        ctx->pc = 0x209BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BC4u;
        // 0x209bc8: 0x8e8201b8  lw          $v0, 0x1B8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BCCu;
        goto label_209bcc;
    }
    ctx->pc = 0x209BC4u;
    {
        const bool branch_taken_0x209bc4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x209bc4) {
            ctx->pc = 0x209BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209BC4u;
            // 0x209bc8: 0x8e8201b8  lw          $v0, 0x1B8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209BE8u;
            goto label_209be8;
        }
    }
    ctx->pc = 0x209BCCu;
label_209bcc:
    // 0x209bcc: 0x8e8301b8  lw          $v1, 0x1B8($s4)
    ctx->pc = 0x209bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
label_209bd0:
    // 0x209bd0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x209bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_209bd4:
    // 0x209bd4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x209bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_209bd8:
    // 0x209bd8: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x209bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_209bdc:
    // 0x209bdc: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x209bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_209be0:
    // 0x209be0: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
label_209be4:
    if (ctx->pc == 0x209BE4u) {
        ctx->pc = 0x209BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BE0u;
        // 0x209be4: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BE8u;
        goto label_209be8;
    }
    ctx->pc = 0x209BE0u;
    {
        const bool branch_taken_0x209be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BE0u;
        // 0x209be4: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209be0) {
            ctx->pc = 0x209B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209b08;
        }
    }
    ctx->pc = 0x209BE8u;
label_209be8:
    // 0x209be8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x209be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_209bec:
    // 0x209bec: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_209bf0:
    if (ctx->pc == 0x209BF0u) {
        ctx->pc = 0x209BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BECu;
        // 0x209bf0: 0x24020074  addiu       $v0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BF4u;
        goto label_209bf4;
    }
    ctx->pc = 0x209BECu;
    {
        const bool branch_taken_0x209bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x209BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BECu;
        // 0x209bf0: 0x24020074  addiu       $v0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209bec) {
            ctx->pc = 0x209C30u;
            goto label_209c30;
        }
    }
    ctx->pc = 0x209BF4u;
label_209bf4:
    // 0x209bf4: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x209bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_209bf8:
    // 0x209bf8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x209bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_209bfc:
    // 0x209bfc: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x209bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_209c00:
    // 0x209c00: 0x8e8301b8  lw          $v1, 0x1B8($s4)
    ctx->pc = 0x209c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
label_209c04:
    // 0x209c04: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x209c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_209c08:
    // 0x209c08: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x209c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_209c0c:
    // 0x209c0c: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x209c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
label_209c10:
    // 0x209c10: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x209c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_209c14:
    // 0x209c14: 0xac73001c  sw          $s3, 0x1C($v1)
    ctx->pc = 0x209c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 19));
label_209c18:
    // 0x209c18: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x209c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_209c1c:
    // 0x209c1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x209c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_209c20:
    // 0x209c20: 0x60f809  jalr        $v1
label_209c24:
    if (ctx->pc == 0x209C24u) {
        ctx->pc = 0x209C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C20u;
        // 0x209c24: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209C28u;
        goto label_209c28;
    }
    ctx->pc = 0x209C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x209C28u);
        ctx->pc = 0x209C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C20u;
        // 0x209c24: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209C20u, 0x209C28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209C28u;
label_209c28:
    // 0x209c28: 0x8e8201b8  lw          $v0, 0x1B8($s4)
    ctx->pc = 0x209c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
label_209c2c:
    // 0x209c2c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x209c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_209c30:
    // 0x209c30: 0xae9301a0  sw          $s3, 0x1A0($s4)
    ctx->pc = 0x209c30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 416), GPR_U32(ctx, 19));
label_209c34:
    // 0x209c34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209c38:
    // 0x209c38: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x209c38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_209c3c:
    // 0x209c3c: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x209c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_209c40:
    // 0x209c40: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x209c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_209c44:
    // 0x209c44: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x209c44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_209c48:
    // 0x209c48: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x209c48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_209c4c:
    // 0x209c4c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x209c4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_209c50:
    // 0x209c50: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x209c50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_209c54:
    // 0x209c54: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x209c54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_209c58:
    // 0x209c58: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x209c58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_209c5c:
    // 0x209c5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_209c60:
    // 0x209c60: 0x3e00008  jr          $ra
label_209c64:
    if (ctx->pc == 0x209C64u) {
        ctx->pc = 0x209C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C60u;
        // 0x209c64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209C68u;
        goto label_fallthrough_0x209c60;
    }
    ctx->pc = 0x209C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C60u;
        // 0x209c64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x209c60:
    ctx->pc = 0x209C68u;
}
