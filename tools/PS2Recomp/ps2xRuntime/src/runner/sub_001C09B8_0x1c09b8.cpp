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

// Function: sub_001C09B8
// Address: 0x1c09b8 - 0x1c0cc8
void sub_001C09B8_0x1c09b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C09B8_0x1c09b8");
#endif

    switch (ctx->pc) {
        case 0x1c09f8u: goto label_1c09f8;
        case 0x1c0a00u: goto label_1c0a00;
        case 0x1c0a28u: goto label_1c0a28;
        case 0x1c0a68u: goto label_1c0a68;
        case 0x1c0aa8u: goto label_1c0aa8;
        case 0x1c0ad8u: goto label_1c0ad8;
        case 0x1c0ae4u: goto label_1c0ae4;
        case 0x1c0be8u: goto label_1c0be8;
        case 0x1c0c40u: goto label_1c0c40;
        case 0x1c0c48u: goto label_1c0c48;
        default: break;
    }

    ctx->pc = 0x1c09b8u;

    // 0x1c09b8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c09b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c09bc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1c09bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1c09c0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1c09c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1c09c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c09c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c09c8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1c09c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1c09cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c09ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1c09d0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1c09d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1c09d4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1c09d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1c09d8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1c09d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1c09dc: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1c09dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1c09e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c09e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c09e4: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1c09e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1c09e8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1c09e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1c09ec: 0x8e700318  lw          $s0, 0x318($s3)
    ctx->pc = 0x1c09ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 792)));
    // 0x1c09f0: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C09F0u;
    {
        const bool branch_taken_0x1c09f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c09f0) {
            ctx->pc = 0x1C09F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C09F0u;
            // 0x1c09f4: 0x26700314  addiu       $s0, $s3, 0x314 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 788));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0A14u;
            goto label_1c0a14;
        }
    }
    ctx->pc = 0x1C09F8u;
label_1c09f8:
    // 0x1c09f8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1C09F8u;
    SET_GPR_U32(ctx, 31, 0x1C0A00u);
    ctx->pc = 0x1C09FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C09F8u;
    // 0x1c09fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1C09F8u, 0x1C0A00u)) {
        return;
    }
    ctx->pc = 0x1C0A00u;
label_1c0a00:
    // 0x1c0a00: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1c0a00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c0a04: 0x0  nop
    ctx->pc = 0x1c0a04u;
    // NOP
    // 0x1c0a08: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C0A08u;
    {
        const bool branch_taken_0x1c0a08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a08) {
            ctx->pc = 0x1C09F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c09f8;
        }
    }
    ctx->pc = 0x1C0A10u;
    // 0x1c0a10: 0x26700314  addiu       $s0, $s3, 0x314
    ctx->pc = 0x1c0a10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 788));
label_1c0a14:
    // 0x1c0a14: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c0a18: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C0A18u;
    {
        const bool branch_taken_0x1c0a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A18u;
        // 0x1c0a1c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a18) {
            ctx->pc = 0x1C0A80u;
            goto label_1c0a80;
        }
    }
    ctx->pc = 0x1C0A20u;
    // 0x1c0a20: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1c0a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c0a24: 0x0  nop
    ctx->pc = 0x1c0a24u;
    // NOP
label_1c0a28:
    // 0x1c0a28: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C0A28u;
    {
        const bool branch_taken_0x1c0a28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a28) {
            ctx->pc = 0x1C0A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0A28u;
            // 0x1c0a2c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0A78u;
            goto label_1c0a78;
        }
    }
    ctx->pc = 0x1C0A30u;
    // 0x1c0a30: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c0a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c0a34: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0A34u;
    {
        const bool branch_taken_0x1c0a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A34u;
        // 0x1c0a38: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a34) {
            ctx->pc = 0x1C0A44u;
            goto label_1c0a44;
        }
    }
    ctx->pc = 0x1C0A3Cu;
    // 0x1c0a3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0A3Cu;
    {
        const bool branch_taken_0x1c0a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A3Cu;
        // 0x1c0a40: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a3c) {
            ctx->pc = 0x1C0A48u;
            goto label_1c0a48;
        }
    }
    ctx->pc = 0x1C0A44u;
label_1c0a44:
    // 0x1c0a44: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1c0a44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1c0a48:
    // 0x1c0a48: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1c0a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c0a4c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0A4Cu;
    {
        const bool branch_taken_0x1c0a4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A4Cu;
        // 0x1c0a50: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a4c) {
            ctx->pc = 0x1C0A5Cu;
            goto label_1c0a5c;
        }
    }
    ctx->pc = 0x1C0A54u;
    // 0x1c0a54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0A54u;
    {
        const bool branch_taken_0x1c0a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A54u;
        // 0x1c0a58: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a54) {
            ctx->pc = 0x1C0A60u;
            goto label_1c0a60;
        }
    }
    ctx->pc = 0x1C0A5Cu;
label_1c0a5c:
    // 0x1c0a5c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1c0a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1c0a60:
    // 0x1c0a60: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1C0A60u;
    SET_GPR_U32(ctx, 31, 0x1C0A68u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1C0A60u, 0x1C0A68u)) {
        return;
    }
    ctx->pc = 0x1C0A68u;
label_1c0a68:
    // 0x1c0a68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c0a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c0a6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c0a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c0a70: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c0a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c0a74: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c0a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c0a78:
    // 0x1c0a78: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1C0A78u;
    {
        const bool branch_taken_0x1c0a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a78) {
            ctx->pc = 0x1C0A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0A78u;
            // 0x1c0a7c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0a28;
        }
    }
    ctx->pc = 0x1C0A80u;
label_1c0a80:
    // 0x1c0a80: 0x8e660260  lw          $a2, 0x260($s3)
    ctx->pc = 0x1c0a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 608)));
    // 0x1c0a84: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1c0a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c0a88: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c0a8c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1c0a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1c0a90: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x1c0a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1c0a94: 0x245094d8  addiu       $s0, $v0, -0x6B28
    ctx->pc = 0x1c0a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939864));
    // 0x1c0a98: 0x8c648acc  lw          $a0, -0x7534($v1)
    ctx->pc = 0x1c0a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937292)));
    // 0x1c0a9c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1c0a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1c0aa0: 0xc062e14  jal         func_18B850
    ctx->pc = 0x1C0AA0u;
    SET_GPR_U32(ctx, 31, 0x1C0AA8u);
    ctx->pc = 0x1C0AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0AA0u;
    // 0x1c0aa4: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18B850u, 0x1C0AA0u, 0x1C0AA8u)) {
        return;
    }
    ctx->pc = 0x1C0AA8u;
label_1c0aa8:
    // 0x1c0aa8: 0x5040007a  beql        $v0, $zero, . + 4 + (0x7A << 2)
    ctx->pc = 0x1C0AA8u;
    {
        const bool branch_taken_0x1c0aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0aa8) {
            ctx->pc = 0x1C0AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0AA8u;
            // 0x1c0aac: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0C94u;
            goto label_1c0c94;
        }
    }
    ctx->pc = 0x1C0AB0u;
    // 0x1c0ab0: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x1c0ab0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c0ab4: 0x12400076  beqz        $s2, . + 4 + (0x76 << 2)
    ctx->pc = 0x1C0AB4u;
    {
        const bool branch_taken_0x1c0ab4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0AB4u;
        // 0x1c0ab8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ab4) {
            ctx->pc = 0x1C0C90u;
            goto label_1c0c90;
        }
    }
    ctx->pc = 0x1C0ABCu;
    // 0x1c0abc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c0abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c0ac0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c0ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c0ac4: 0x245696b8  addiu       $s6, $v0, -0x6948
    ctx->pc = 0x1c0ac4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940344));
    // 0x1c0ac8: 0x261e0004  addiu       $fp, $s0, 0x4
    ctx->pc = 0x1c0ac8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1c0acc: 0x26d70004  addiu       $s7, $s6, 0x4
    ctx->pc = 0x1c0accu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x1c0ad0: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x1c0ad0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ad4: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x1c0ad4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c0ad8:
    // 0x1c0ad8: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1c0ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1c0adc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1C0ADCu;
    SET_GPR_U32(ctx, 31, 0x1C0AE4u);
    ctx->pc = 0x1C0AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0ADCu;
    // 0x1c0ae0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1C0ADCu, 0x1C0AE4u)) {
        return;
    }
    ctx->pc = 0x1C0AE4u;
label_1c0ae4:
    // 0x1c0ae4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c0ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ae8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1c0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c0aec: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0AECu;
    {
        const bool branch_taken_0x1c0aec = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1C0AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0AECu;
        // 0x1c0af0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0aec) {
            ctx->pc = 0x1C0B08u;
            goto label_1c0b08;
        }
    }
    ctx->pc = 0x1C0AF4u;
    // 0x1c0af4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0af8: 0x0  nop
    ctx->pc = 0x1c0af8u;
    // NOP
    // 0x1c0afc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0afcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0b00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0B00u;
    {
        const bool branch_taken_0x1c0b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B00u;
        // 0x1c0b04: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b00) {
            ctx->pc = 0x1C0B24u;
            goto label_1c0b24;
        }
    }
    ctx->pc = 0x1C0B08u;
label_1c0b08:
    // 0x1c0b08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c0b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c0b0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c0b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c0b10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0b14: 0x0  nop
    ctx->pc = 0x1c0b14u;
    // NOP
    // 0x1c0b18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0b18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0b1c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c0b1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1c0b20: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x1c0b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_1c0b24:
    // 0x1c0b24: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1c0b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1c0b28: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0B28u;
    {
        const bool branch_taken_0x1c0b28 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1C0B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B28u;
        // 0x1c0b2c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b28) {
            ctx->pc = 0x1C0B44u;
            goto label_1c0b44;
        }
    }
    ctx->pc = 0x1C0B30u;
    // 0x1c0b30: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x1c0b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1c0b34: 0x0  nop
    ctx->pc = 0x1c0b34u;
    // NOP
    // 0x1c0b38: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x1c0b38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1c0b3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0B3Cu;
    {
        const bool branch_taken_0x1c0b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B3Cu;
        // 0x1c0b40: 0xe6050044  swc1        $f5, 0x44($s0) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b3c) {
            ctx->pc = 0x1C0B60u;
            goto label_1c0b60;
        }
    }
    ctx->pc = 0x1C0B44u;
label_1c0b44:
    // 0x1c0b44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c0b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c0b48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c0b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c0b4c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x1c0b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1c0b50: 0x0  nop
    ctx->pc = 0x1c0b50u;
    // NOP
    // 0x1c0b54: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x1c0b54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1c0b58: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x1c0b58u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x1c0b5c: 0xe6050044  swc1        $f5, 0x44($s0)
    ctx->pc = 0x1c0b5cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_1c0b60:
    // 0x1c0b60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c0b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b64: 0xc6020040  lwc1        $f2, 0x40($s0)
    ctx->pc = 0x1c0b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c0b68: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c0b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0b6c: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x1c0b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0b70: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x1c0b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x1c0b74: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x1c0b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1c0b78: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1c0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1c0b7c: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x1c0b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x1c0b80: 0x572021  addu        $a0, $v0, $s7
    ctx->pc = 0x1c0b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1c0b84: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1c0b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1c0b88: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1c0b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0b8c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c0b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0b90: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1c0b90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1c0b94: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c0b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c0b98: 0x460128c1  sub.s       $f3, $f5, $f1
    ctx->pc = 0x1c0b98u;
    ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x1c0b9c: 0x46001100  add.s       $f4, $f2, $f0
    ctx->pc = 0x1c0b9cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1c0ba0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1c0ba0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1c0ba4: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x1c0ba4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x1c0ba8: 0xe6030024  swc1        $f3, 0x24($s0)
    ctx->pc = 0x1c0ba8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1c0bac: 0xe6040030  swc1        $f4, 0x30($s0)
    ctx->pc = 0x1c0bacu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1c0bb0: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x1c0bb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1c0bb4: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x1c0bb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1c0bb8: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x1c0bb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1c0bbc: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x1c0bbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1c0bc0: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x1c0bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1c0bc4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1c0bc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1c0bc8: 0xe6020018  swc1        $f2, 0x18($s0)
    ctx->pc = 0x1c0bc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1c0bcc: 0xe603001c  swc1        $f3, 0x1C($s0)
    ctx->pc = 0x1c0bccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1c0bd0: 0xe6030014  swc1        $f3, 0x14($s0)
    ctx->pc = 0x1c0bd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1c0bd4: 0xe6040028  swc1        $f4, 0x28($s0)
    ctx->pc = 0x1c0bd4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1c0bd8: 0xe6040020  swc1        $f4, 0x20($s0)
    ctx->pc = 0x1c0bd8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1c0bdc: 0xe603002c  swc1        $f3, 0x2C($s0)
    ctx->pc = 0x1c0bdcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1c0be0: 0xe6040038  swc1        $f4, 0x38($s0)
    ctx->pc = 0x1c0be0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1c0be4: 0xe601003c  swc1        $f1, 0x3C($s0)
    ctx->pc = 0x1c0be4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_1c0be8:
    // 0x1c0be8: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x1c0be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1c0bec: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x1c0becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1c0bf0: 0xb0a2000f  sdl         $v0, 0xF($a1)
    ctx->pc = 0x1c0bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c0bf4: 0xb4a20008  sdr         $v0, 0x8($a1)
    ctx->pc = 0x1c0bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c0bf8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1c0bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1c0bfc: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C0BFCu;
    {
        const bool branch_taken_0x1c0bfc = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x1C0C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0BFCu;
        // 0x1c0c00: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0bfc) {
            ctx->pc = 0x1C0BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0be8;
        }
    }
    ctx->pc = 0x1C0C04u;
    // 0x1c0c04: 0x8e6202c8  lw          $v0, 0x2C8($s3)
    ctx->pc = 0x1c0c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 712)));
    // 0x1c0c08: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C0C08u;
    {
        const bool branch_taken_0x1c0c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C08u;
        // 0x1c0c0c: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c08) {
            ctx->pc = 0x1C0C40u;
            goto label_1c0c40;
        }
    }
    ctx->pc = 0x1C0C10u;
    // 0x1c0c10: 0x8e620260  lw          $v0, 0x260($s3)
    ctx->pc = 0x1c0c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 608)));
    // 0x1c0c14: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1c0c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x1c0c18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0c1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c0c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c20: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x1c0c20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c0c24: 0xbe1021  addu        $v0, $a1, $fp
    ctx->pc = 0x1c0c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
    // 0x1c0c28: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1c0c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0c2c: 0x0  nop
    ctx->pc = 0x1c0c2cu;
    // NOP
    // 0x1c0c30: 0x0  nop
    ctx->pc = 0x1c0c30u;
    // NOP
    // 0x1c0c34: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x1c0c34u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[12]);
    // 0x1c0c38: 0xc0701ce  jal         func_1C0738
    ctx->pc = 0x1C0C38u;
    SET_GPR_U32(ctx, 31, 0x1C0C40u);
    ctx->pc = 0x1C0C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C38u;
    // 0x1c0c3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C0738u, 0x1C0C38u, 0x1C0C40u)) {
        return;
    }
    ctx->pc = 0x1C0C40u;
label_1c0c40:
    // 0x1c0c40: 0xc080858  jal         func_202160
    ctx->pc = 0x1C0C40u;
    SET_GPR_U32(ctx, 31, 0x1C0C48u);
    ctx->pc = 0x1C0C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C40u;
    // 0x1c0c44: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1C0C40u, 0x1C0C48u)) {
        return;
    }
    ctx->pc = 0x1C0C48u;
label_1c0c48:
    // 0x1c0c48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c0c48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c4c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1c0c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1c0c50: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1c0c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1c0c54: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1c0c54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1c0c58: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1c0c58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1c0c5c: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1c0c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1c0c60: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C0C60u;
    {
        const bool branch_taken_0x1c0c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0c60) {
            ctx->pc = 0x1C0C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0C60u;
            // 0x1c0c64: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0C68u;
            goto label_1c0c68;
        }
    }
    ctx->pc = 0x1C0C68u;
label_1c0c68:
    // 0x1c0c68: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1c0c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1c0c6c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C0C6Cu;
    {
        const bool branch_taken_0x1c0c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0c6c) {
            ctx->pc = 0x1C0C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0C6Cu;
            // 0x1c0c70: 0xae830004  sw          $v1, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0C74u;
            goto label_1c0c74;
        }
    }
    ctx->pc = 0x1C0C74u;
label_1c0c74:
    // 0x1c0c74: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x1c0c74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x1c0c78: 0x8e620314  lw          $v0, 0x314($s3)
    ctx->pc = 0x1c0c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 788)));
    // 0x1c0c7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0c80: 0xae620314  sw          $v0, 0x314($s3)
    ctx->pc = 0x1c0c80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 788), GPR_U32(ctx, 2));
    // 0x1c0c84: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x1c0c84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c0c88: 0x5640ff93  bnel        $s2, $zero, . + 4 + (-0x6D << 2)
    ctx->pc = 0x1C0C88u;
    {
        const bool branch_taken_0x1c0c88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0c88) {
            ctx->pc = 0x1C0C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0C88u;
            // 0x1c0c8c: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0ad8;
        }
    }
    ctx->pc = 0x1C0C90u;
label_1c0c90:
    // 0x1c0c90: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1c0c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c0c94:
    // 0x1c0c94: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1c0c94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c0c98: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1c0c98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c0c9c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1c0c9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c0ca0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c0ca0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c0ca4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1c0ca4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c0ca8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1c0ca8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c0cac: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1c0cacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0cb0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1c0cb0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0cb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0cb8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1c0cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c0cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CBCu;
        // 0x1c0cc0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0CC4u;
    // 0x1c0cc4: 0x0  nop
    ctx->pc = 0x1c0cc4u;
    // NOP
    ctx->pc = 0x1c0cc8u;
}
