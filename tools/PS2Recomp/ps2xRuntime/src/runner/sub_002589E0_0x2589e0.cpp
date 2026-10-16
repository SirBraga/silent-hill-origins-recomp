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

// Function: sub_002589E0
// Address: 0x2589e0 - 0x258bc0
void sub_002589E0_0x2589e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002589E0_0x2589e0");
#endif

    switch (ctx->pc) {
        case 0x2589e0u: goto label_2589e0;
        case 0x2589e4u: goto label_2589e4;
        case 0x2589e8u: goto label_2589e8;
        case 0x2589ecu: goto label_2589ec;
        case 0x2589f0u: goto label_2589f0;
        case 0x2589f4u: goto label_2589f4;
        case 0x2589f8u: goto label_2589f8;
        case 0x2589fcu: goto label_2589fc;
        case 0x258a00u: goto label_258a00;
        case 0x258a04u: goto label_258a04;
        case 0x258a08u: goto label_258a08;
        case 0x258a0cu: goto label_258a0c;
        case 0x258a10u: goto label_258a10;
        case 0x258a14u: goto label_258a14;
        case 0x258a18u: goto label_258a18;
        case 0x258a1cu: goto label_258a1c;
        case 0x258a20u: goto label_258a20;
        case 0x258a24u: goto label_258a24;
        case 0x258a28u: goto label_258a28;
        case 0x258a2cu: goto label_258a2c;
        case 0x258a30u: goto label_258a30;
        case 0x258a34u: goto label_258a34;
        case 0x258a38u: goto label_258a38;
        case 0x258a3cu: goto label_258a3c;
        case 0x258a40u: goto label_258a40;
        case 0x258a44u: goto label_258a44;
        case 0x258a48u: goto label_258a48;
        case 0x258a4cu: goto label_258a4c;
        case 0x258a50u: goto label_258a50;
        case 0x258a54u: goto label_258a54;
        case 0x258a58u: goto label_258a58;
        case 0x258a5cu: goto label_258a5c;
        case 0x258a60u: goto label_258a60;
        case 0x258a64u: goto label_258a64;
        case 0x258a68u: goto label_258a68;
        case 0x258a6cu: goto label_258a6c;
        case 0x258a70u: goto label_258a70;
        case 0x258a74u: goto label_258a74;
        case 0x258a78u: goto label_258a78;
        case 0x258a7cu: goto label_258a7c;
        case 0x258a80u: goto label_258a80;
        case 0x258a84u: goto label_258a84;
        case 0x258a88u: goto label_258a88;
        case 0x258a8cu: goto label_258a8c;
        case 0x258a90u: goto label_258a90;
        case 0x258a94u: goto label_258a94;
        case 0x258a98u: goto label_258a98;
        case 0x258a9cu: goto label_258a9c;
        case 0x258aa0u: goto label_258aa0;
        case 0x258aa4u: goto label_258aa4;
        case 0x258aa8u: goto label_258aa8;
        case 0x258aacu: goto label_258aac;
        case 0x258ab0u: goto label_258ab0;
        case 0x258ab4u: goto label_258ab4;
        case 0x258ab8u: goto label_258ab8;
        case 0x258abcu: goto label_258abc;
        case 0x258ac0u: goto label_258ac0;
        case 0x258ac4u: goto label_258ac4;
        case 0x258ac8u: goto label_258ac8;
        case 0x258accu: goto label_258acc;
        case 0x258ad0u: goto label_258ad0;
        case 0x258ad4u: goto label_258ad4;
        case 0x258ad8u: goto label_258ad8;
        case 0x258adcu: goto label_258adc;
        case 0x258ae0u: goto label_258ae0;
        case 0x258ae4u: goto label_258ae4;
        case 0x258ae8u: goto label_258ae8;
        case 0x258aecu: goto label_258aec;
        case 0x258af0u: goto label_258af0;
        case 0x258af4u: goto label_258af4;
        case 0x258af8u: goto label_258af8;
        case 0x258afcu: goto label_258afc;
        case 0x258b00u: goto label_258b00;
        case 0x258b04u: goto label_258b04;
        case 0x258b08u: goto label_258b08;
        case 0x258b0cu: goto label_258b0c;
        case 0x258b10u: goto label_258b10;
        case 0x258b14u: goto label_258b14;
        case 0x258b18u: goto label_258b18;
        case 0x258b1cu: goto label_258b1c;
        case 0x258b20u: goto label_258b20;
        case 0x258b24u: goto label_258b24;
        case 0x258b28u: goto label_258b28;
        case 0x258b2cu: goto label_258b2c;
        case 0x258b30u: goto label_258b30;
        case 0x258b34u: goto label_258b34;
        case 0x258b38u: goto label_258b38;
        case 0x258b3cu: goto label_258b3c;
        case 0x258b40u: goto label_258b40;
        case 0x258b44u: goto label_258b44;
        case 0x258b48u: goto label_258b48;
        case 0x258b4cu: goto label_258b4c;
        case 0x258b50u: goto label_258b50;
        case 0x258b54u: goto label_258b54;
        case 0x258b58u: goto label_258b58;
        case 0x258b5cu: goto label_258b5c;
        case 0x258b60u: goto label_258b60;
        case 0x258b64u: goto label_258b64;
        case 0x258b68u: goto label_258b68;
        case 0x258b6cu: goto label_258b6c;
        case 0x258b70u: goto label_258b70;
        case 0x258b74u: goto label_258b74;
        case 0x258b78u: goto label_258b78;
        case 0x258b7cu: goto label_258b7c;
        case 0x258b80u: goto label_258b80;
        case 0x258b84u: goto label_258b84;
        case 0x258b88u: goto label_258b88;
        case 0x258b8cu: goto label_258b8c;
        case 0x258b90u: goto label_258b90;
        case 0x258b94u: goto label_258b94;
        case 0x258b98u: goto label_258b98;
        case 0x258b9cu: goto label_258b9c;
        case 0x258ba0u: goto label_258ba0;
        case 0x258ba4u: goto label_258ba4;
        case 0x258ba8u: goto label_258ba8;
        case 0x258bacu: goto label_258bac;
        case 0x258bb0u: goto label_258bb0;
        case 0x258bb4u: goto label_258bb4;
        case 0x258bb8u: goto label_258bb8;
        case 0x258bbcu: goto label_258bbc;
        default: break;
    }

    ctx->pc = 0x2589e0u;

label_2589e0:
    // 0x2589e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2589e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2589e4:
    // 0x2589e4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2589e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_2589e8:
    // 0x2589e8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2589e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2589ec:
    // 0x2589ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2589ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2589f0:
    // 0x2589f0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2589f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2589f4:
    // 0x2589f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2589f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2589f8:
    // 0x2589f8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2589f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2589fc:
    // 0x2589fc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2589fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_258a00:
    // 0x258a00: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x258a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_258a04:
    // 0x258a04: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x258a04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_258a08:
    // 0x258a08: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x258a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_258a0c:
    // 0x258a0c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x258a0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_258a10:
    // 0x258a10: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x258a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_258a14:
    // 0x258a14: 0x3136ffff  andi        $s6, $t1, 0xFFFF
    ctx->pc = 0x258a14u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
label_258a18:
    // 0x258a18: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x258a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_258a1c:
    // 0x258a1c: 0x3157ffff  andi        $s7, $t2, 0xFFFF
    ctx->pc = 0x258a1cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
label_258a20:
    // 0x258a20: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x258a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_258a24:
    // 0x258a24: 0x317effff  andi        $fp, $t3, 0xFFFF
    ctx->pc = 0x258a24u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
label_258a28:
    // 0x258a28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x258a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_258a2c:
    // 0x258a2c: 0x97a300c0  lhu         $v1, 0xC0($sp)
    ctx->pc = 0x258a2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
label_258a30:
    // 0x258a30: 0x8e0c0004  lw          $t4, 0x4($s0)
    ctx->pc = 0x258a30u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_258a34:
    // 0x258a34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x258a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_258a38:
    // 0x258a38: 0x182102b  sltu        $v0, $t4, $v0
    ctx->pc = 0x258a38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_258a3c:
    // 0x258a3c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_258a40:
    if (ctx->pc == 0x258A40u) {
        ctx->pc = 0x258A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A3Cu;
        // 0x258a40: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258A44u;
        goto label_258a44;
    }
    ctx->pc = 0x258A3Cu;
    {
        const bool branch_taken_0x258a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A3Cu;
        // 0x258a40: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a3c) {
            ctx->pc = 0x258AD4u;
            goto label_258ad4;
        }
    }
    ctx->pc = 0x258A44u;
label_258a44:
    // 0x258a44: 0x25830001  addiu       $v1, $t4, 0x1
    ctx->pc = 0x258a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_258a48:
    // 0x258a48: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x258a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_258a4c:
    // 0x258a4c: 0x1180000a  beqz        $t4, . + 4 + (0xA << 2)
label_258a50:
    if (ctx->pc == 0x258A50u) {
        ctx->pc = 0x258A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A4Cu;
        // 0x258a50: 0x628818  mult        $s1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x258A54u;
        goto label_258a54;
    }
    ctx->pc = 0x258A4Cu;
    {
        const bool branch_taken_0x258a4c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x258A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A4Cu;
        // 0x258a50: 0x628818  mult        $s1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a4c) {
            ctx->pc = 0x258A78u;
            goto label_258a78;
        }
    }
    ctx->pc = 0x258A54u;
label_258a54:
    // 0x258a54: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x258a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_258a58:
    // 0x258a58: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x258a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_258a5c:
    // 0x258a5c: 0x8c6210d8  lw          $v0, 0x10D8($v1)
    ctx->pc = 0x258a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4312)));
label_258a60:
    // 0x258a60: 0x3c060103  lui         $a2, 0x103
    ctx->pc = 0x258a60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)259 << 16));
label_258a64:
    // 0x258a64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x258a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_258a68:
    // 0x258a68: 0x40f809  jalr        $v0
label_258a6c:
    if (ctx->pc == 0x258A6Cu) {
        ctx->pc = 0x258A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A68u;
        // 0x258a6c: 0x34c60502  ori         $a2, $a2, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x258A70u;
        goto label_258a70;
    }
    ctx->pc = 0x258A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x258A70u);
        ctx->pc = 0x258A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A68u;
        // 0x258a6c: 0x34c60502  ori         $a2, $a2, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258A68u, 0x258A70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x258A70u;
label_258a70:
    // 0x258a70: 0x10000008  b           . + 4 + (0x8 << 2)
label_258a74:
    if (ctx->pc == 0x258A74u) {
        ctx->pc = 0x258A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A70u;
        // 0x258a74: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258A78u;
        goto label_258a78;
    }
    ctx->pc = 0x258A70u;
    {
        const bool branch_taken_0x258a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A70u;
        // 0x258a74: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a70) {
            ctx->pc = 0x258A94u;
            goto label_258a94;
        }
    }
    ctx->pc = 0x258A78u;
label_258a78:
    // 0x258a78: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x258a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_258a7c:
    // 0x258a7c: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x258a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
label_258a80:
    // 0x258a80: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x258a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_258a84:
    // 0x258a84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_258a88:
    // 0x258a88: 0x40f809  jalr        $v0
label_258a8c:
    if (ctx->pc == 0x258A8Cu) {
        ctx->pc = 0x258A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A88u;
        // 0x258a8c: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x258A90u;
        goto label_258a90;
    }
    ctx->pc = 0x258A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x258A90u);
        ctx->pc = 0x258A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A88u;
        // 0x258a8c: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258A88u, 0x258A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x258A90u;
label_258a90:
    // 0x258a90: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x258a90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_258a94:
    // 0x258a94: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
label_258a98:
    if (ctx->pc == 0x258A98u) {
        ctx->pc = 0x258A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A94u;
        // 0x258a98: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258A9Cu;
        goto label_258a9c;
    }
    ctx->pc = 0x258A94u;
    {
        const bool branch_taken_0x258a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x258a94) {
            ctx->pc = 0x258A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258A94u;
            // 0x258a98: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258AC8u;
            goto label_258ac8;
        }
    }
    ctx->pc = 0x258A9Cu;
label_258a9c:
    // 0x258a9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x258a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_258aa0:
    // 0x258aa0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x258aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_258aa4:
    // 0x258aa4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x258aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_258aa8:
    // 0x258aa8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x258aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_258aac:
    // 0x258aac: 0xc092848  jal         func_24A120
label_258ab0:
    if (ctx->pc == 0x258AB0u) {
        ctx->pc = 0x258AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258AACu;
        // 0x258ab0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x258AB4u;
        goto label_258ab4;
    }
    ctx->pc = 0x258AACu;
    SET_GPR_U32(ctx, 31, 0x258AB4u);
    ctx->pc = 0x258AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258AACu;
    // 0x258ab0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x258AACu, 0x258AB4u)) {
        return;
    }
    ctx->pc = 0x258AB4u;
label_258ab4:
    // 0x258ab4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x258ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_258ab8:
    // 0x258ab8: 0xc09281a  jal         func_24A068
label_258abc:
    if (ctx->pc == 0x258ABCu) {
        ctx->pc = 0x258ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258AB8u;
        // 0x258abc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258AC0u;
        goto label_258ac0;
    }
    ctx->pc = 0x258AB8u;
    SET_GPR_U32(ctx, 31, 0x258AC0u);
    ctx->pc = 0x258ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258AB8u;
    // 0x258abc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x258AB8u, 0x258AC0u)) {
        return;
    }
    ctx->pc = 0x258AC0u;
label_258ac0:
    // 0x258ac0: 0x10000032  b           . + 4 + (0x32 << 2)
label_258ac4:
    if (ctx->pc == 0x258AC4u) {
        ctx->pc = 0x258AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258AC0u;
        // 0x258ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258AC8u;
        goto label_258ac8;
    }
    ctx->pc = 0x258AC0u;
    {
        const bool branch_taken_0x258ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258AC0u;
        // 0x258ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ac0) {
            ctx->pc = 0x258B8Cu;
            goto label_258b8c;
        }
    }
    ctx->pc = 0x258AC8u;
label_258ac8:
    // 0x258ac8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x258ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_258acc:
    // 0x258acc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_258ad0:
    // 0x258ad0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x258ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_258ad4:
    // 0x258ad4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x258ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_258ad8:
    // 0x258ad8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x258ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_258adc:
    // 0x258adc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x258adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_258ae0:
    // 0x258ae0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x258ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_258ae4:
    // 0x258ae4: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x258ae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_258ae8:
    // 0x258ae8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x258ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_258aec:
    // 0x258aec: 0xac920008  sw          $s2, 0x8($a0)
    ctx->pc = 0x258aecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 18));
label_258af0:
    // 0x258af0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x258af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_258af4:
    // 0x258af4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x258af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_258af8:
    // 0x258af8: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x258af8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_258afc:
    // 0x258afc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x258afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_258b00:
    // 0x258b00: 0xa4730000  sh          $s3, 0x0($v1)
    ctx->pc = 0x258b00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 19));
label_258b04:
    // 0x258b04: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x258b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_258b08:
    // 0x258b08: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x258b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_258b0c:
    // 0x258b0c: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x258b0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_258b10:
    // 0x258b10: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x258b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_258b14:
    // 0x258b14: 0xa4940002  sh          $s4, 0x2($a0)
    ctx->pc = 0x258b14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 20));
label_258b18:
    // 0x258b18: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x258b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_258b1c:
    // 0x258b1c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x258b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_258b20:
    // 0x258b20: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x258b20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_258b24:
    // 0x258b24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x258b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_258b28:
    // 0x258b28: 0xa4750004  sh          $s5, 0x4($v1)
    ctx->pc = 0x258b28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 21));
label_258b2c:
    // 0x258b2c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x258b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_258b30:
    // 0x258b30: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x258b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_258b34:
    // 0x258b34: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x258b34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_258b38:
    // 0x258b38: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x258b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_258b3c:
    // 0x258b3c: 0xa496000c  sh          $s6, 0xC($a0)
    ctx->pc = 0x258b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 22));
label_258b40:
    // 0x258b40: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x258b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_258b44:
    // 0x258b44: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x258b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_258b48:
    // 0x258b48: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x258b48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_258b4c:
    // 0x258b4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x258b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_258b50:
    // 0x258b50: 0xa477000e  sh          $s7, 0xE($v1)
    ctx->pc = 0x258b50u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 23));
label_258b54:
    // 0x258b54: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x258b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_258b58:
    // 0x258b58: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x258b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_258b5c:
    // 0x258b5c: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x258b5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_258b60:
    // 0x258b60: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x258b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_258b64:
    // 0x258b64: 0xa49e0010  sh          $fp, 0x10($a0)
    ctx->pc = 0x258b64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 30));
label_258b68:
    // 0x258b68: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x258b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_258b6c:
    // 0x258b6c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x258b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_258b70:
    // 0x258b70: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x258b70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_258b74:
    // 0x258b74: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x258b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_258b78:
    // 0x258b78: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x258b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_258b7c:
    // 0x258b7c: 0xa4a30012  sh          $v1, 0x12($a1)
    ctx->pc = 0x258b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 3));
label_258b80:
    // 0x258b80: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x258b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_258b84:
    // 0x258b84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x258b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_258b88:
    // 0x258b88: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x258b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_258b8c:
    // 0x258b8c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x258b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_258b90:
    // 0x258b90: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x258b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_258b94:
    // 0x258b94: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x258b94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_258b98:
    // 0x258b98: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x258b98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_258b9c:
    // 0x258b9c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x258b9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_258ba0:
    // 0x258ba0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x258ba0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_258ba4:
    // 0x258ba4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x258ba4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_258ba8:
    // 0x258ba8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x258ba8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_258bac:
    // 0x258bac: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x258bacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_258bb0:
    // 0x258bb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x258bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_258bb4:
    // 0x258bb4: 0x3e00008  jr          $ra
label_258bb8:
    if (ctx->pc == 0x258BB8u) {
        ctx->pc = 0x258BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BB4u;
        // 0x258bb8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258BBCu;
        goto label_258bbc;
    }
    ctx->pc = 0x258BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BB4u;
        // 0x258bb8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258BBCu;
label_258bbc:
    // 0x258bbc: 0x0  nop
    ctx->pc = 0x258bbcu;
    // NOP
    ctx->pc = 0x258bc0u;
}
