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

// Function: sub_002E39A0
// Address: 0x2e39a0 - 0x2e3b40
void sub_002E39A0_0x2e39a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E39A0_0x2e39a0");
#endif

    switch (ctx->pc) {
        case 0x2e3a14u: goto label_2e3a14;
        case 0x2e3a58u: goto label_2e3a58;
        case 0x2e3a64u: goto label_2e3a64;
        case 0x2e3ab8u: goto label_2e3ab8;
        case 0x2e3ac4u: goto label_2e3ac4;
        default: break;
    }

    ctx->pc = 0x2e39a0u;

    // 0x2e39a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e39a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e39a4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2e39a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2e39a8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2e39a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2e39ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e39acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e39b0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e39b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e39b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e39b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e39b8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2e39b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2e39bc: 0x30d4ffff  andi        $s4, $a2, 0xFFFF
    ctx->pc = 0x2e39bcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2e39c0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2e39c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2e39c4: 0x3115ffff  andi        $s5, $t0, 0xFFFF
    ctx->pc = 0x2e39c4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2e39c8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2e39c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2e39cc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2e39ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e39d0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2e39d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2e39d4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2e39d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2e39d8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2e39d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x2e39dc: 0x16600018  bnez        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E39DCu;
    {
        const bool branch_taken_0x2e39dc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E39E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E39DCu;
        // 0x2e39e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e39dc) {
            ctx->pc = 0x2E3A40u;
            goto label_2e3a40;
        }
    }
    ctx->pc = 0x2E39E4u;
    // 0x2e39e4: 0x16c00016  bnez        $s6, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E39E4u;
    {
        const bool branch_taken_0x2e39e4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E39E4u;
        // 0x2e39e8: 0x2952021  addu        $a0, $s4, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e39e4) {
            ctx->pc = 0x2E3A40u;
            goto label_2e3a40;
        }
    }
    ctx->pc = 0x2E39ECu;
    // 0x2e39ec: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x2e39ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e39f0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2e39f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2e39f4: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x2e39f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2e39f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e39f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e39fc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2e39fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2e3a00: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2e3a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2e3a04: 0x34a50809  ori         $a1, $a1, 0x809
    ctx->pc = 0x2e3a04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2057);
    // 0x2e3a08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2e3a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e3a0c: 0xc0b7076  jal         func_2DC1D8
    ctx->pc = 0x2E3A0Cu;
    SET_GPR_U32(ctx, 31, 0x2E3A14u);
    ctx->pc = 0x2E3A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3A0Cu;
    // 0x2e3a10: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC1D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC1D8u, 0x2E3A0Cu, 0x2E3A14u)) {
        return;
    }
    ctx->pc = 0x2E3A14u;
label_2e3a14:
    // 0x2e3a14: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2e3a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2e3a18: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2e3a18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x2e3a1c: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2e3a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2e3a20: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2e3a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2e3a24: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3A24u;
    {
        const bool branch_taken_0x2e3a24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A24u;
        // 0x2e3a28: 0x2902818  mult        $a1, $s4, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a24) {
            ctx->pc = 0x2E3A34u;
            goto label_2e3a34;
        }
    }
    ctx->pc = 0x2E3A2Cu;
    // 0x2e3a2c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2E3A2Cu;
    {
        const bool branch_taken_0x2e3a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A2Cu;
        // 0x2e3a30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a2c) {
            ctx->pc = 0x2E3B0Cu;
            goto label_2e3b0c;
        }
    }
    ctx->pc = 0x2E3A34u;
label_2e3a34:
    // 0x2e3a34: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2e3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2e3a38: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2E3A38u;
    {
        const bool branch_taken_0x2e3a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A38u;
        // 0x2e3a3c: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a38) {
            ctx->pc = 0x2E3B08u;
            goto label_2e3b08;
        }
    }
    ctx->pc = 0x2E3A40u;
label_2e3a40:
    // 0x2e3a40: 0x12800012  beqz        $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E3A40u;
    {
        const bool branch_taken_0x2e3a40 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A40u;
        // 0x2e3a44: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a40) {
            ctx->pc = 0x2E3A8Cu;
            goto label_2e3a8c;
        }
    }
    ctx->pc = 0x2E3A48u;
    // 0x2e3a48: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e3a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e3a4c: 0x241e0018  addiu       $fp, $zero, 0x18
    ctx->pc = 0x2e3a4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e3a50: 0x24574508  addiu       $s7, $v0, 0x4508
    ctx->pc = 0x2e3a50u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 17672));
    // 0x2e3a54: 0x23e1018  mult        $v0, $s1, $fp
    ctx->pc = 0x2e3a54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2e3a58:
    // 0x2e3a58: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x2e3a58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2e3a5c: 0xc0b6f84  jal         func_2DBE10
    ctx->pc = 0x2E3A5Cu;
    SET_GPR_U32(ctx, 31, 0x2E3A64u);
    ctx->pc = 0x2E3A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3A5Cu;
    // 0x2e3a60: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBE10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DBE10u, 0x2E3A5Cu, 0x2E3A64u)) {
        return;
    }
    ctx->pc = 0x2E3A64u;
label_2e3a64:
    // 0x2e3a64: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2E3A64u;
    {
        const bool branch_taken_0x2e3a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A64u;
        // 0x2e3a68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a64) {
            ctx->pc = 0x2E3B0Cu;
            goto label_2e3b0c;
        }
    }
    ctx->pc = 0x2E3A6Cu;
    // 0x2e3a6c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2e3a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2e3a70: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E3A70u;
    {
        const bool branch_taken_0x2e3a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3a70) {
            ctx->pc = 0x2E3A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3A70u;
            // 0x2e3a74: 0xae170014  sw          $s7, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3A78u;
            goto label_2e3a78;
        }
    }
    ctx->pc = 0x2E3A78u;
label_2e3a78:
    // 0x2e3a78: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x2e3a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e3a7c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x2e3a7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e3a80: 0x234182b  sltu        $v1, $s1, $s4
    ctx->pc = 0x2e3a80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2e3a84: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E3A84u;
    {
        const bool branch_taken_0x2e3a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A84u;
        // 0x2e3a88: 0x23e1018  mult        $v0, $s1, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a84) {
            ctx->pc = 0x2E3A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3a58;
        }
    }
    ctx->pc = 0x2E3A8Cu;
label_2e3a8c:
    // 0x2e3a8c: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2e3a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2e3a90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e3a90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3a94: 0xac730010  sw          $s3, 0x10($v1)
    ctx->pc = 0x2e3a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 19));
    // 0x2e3a98: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2e3a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2e3a9c: 0x12a00013  beqz        $s5, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E3A9Cu;
    {
        const bool branch_taken_0x2e3a9c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A9Cu;
        // 0x2e3aa0: 0xa454000c  sh          $s4, 0xC($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a9c) {
            ctx->pc = 0x2E3AECu;
            goto label_2e3aec;
        }
    }
    ctx->pc = 0x2E3AA4u;
    // 0x2e3aa4: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e3aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e3aa8: 0x24140018  addiu       $s4, $zero, 0x18
    ctx->pc = 0x2e3aa8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e3aac: 0x24534508  addiu       $s3, $v0, 0x4508
    ctx->pc = 0x2e3aacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 17672));
    // 0x2e3ab0: 0x2341018  mult        $v0, $s1, $s4
    ctx->pc = 0x2e3ab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e3ab4: 0x0  nop
    ctx->pc = 0x2e3ab4u;
    // NOP
label_2e3ab8:
    // 0x2e3ab8: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x2e3ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2e3abc: 0xc0b6f84  jal         func_2DBE10
    ctx->pc = 0x2E3ABCu;
    SET_GPR_U32(ctx, 31, 0x2E3AC4u);
    ctx->pc = 0x2E3AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3ABCu;
    // 0x2e3ac0: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBE10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DBE10u, 0x2E3ABCu, 0x2E3AC4u)) {
        return;
    }
    ctx->pc = 0x2E3AC4u;
label_2e3ac4:
    // 0x2e3ac4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E3AC4u;
    {
        const bool branch_taken_0x2e3ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3AC4u;
        // 0x2e3ac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3ac4) {
            ctx->pc = 0x2E3B0Cu;
            goto label_2e3b0c;
        }
    }
    ctx->pc = 0x2E3ACCu;
    // 0x2e3acc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2e3accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2e3ad0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E3AD0u;
    {
        const bool branch_taken_0x2e3ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3ad0) {
            ctx->pc = 0x2E3AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3AD0u;
            // 0x2e3ad4: 0xae130014  sw          $s3, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3AD8u;
            goto label_2e3ad8;
        }
    }
    ctx->pc = 0x2E3AD8u;
label_2e3ad8:
    // 0x2e3ad8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x2e3ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e3adc: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x2e3adcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e3ae0: 0x235182b  sltu        $v1, $s1, $s5
    ctx->pc = 0x2e3ae0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2e3ae4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E3AE4u;
    {
        const bool branch_taken_0x2e3ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3AE4u;
        // 0x2e3ae8: 0x2341018  mult        $v0, $s1, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3ae4) {
            ctx->pc = 0x2E3AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3ab8;
        }
    }
    ctx->pc = 0x2E3AECu;
label_2e3aec:
    // 0x2e3aec: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2e3aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2e3af0: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2e3af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2e3af4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2e3af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2e3af8: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2e3af8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x2e3afc: 0xac760014  sw          $s6, 0x14($v1)
    ctx->pc = 0x2e3afcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 22));
    // 0x2e3b00: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2e3b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2e3b04: 0xa455000e  sh          $s5, 0xE($v0)
    ctx->pc = 0x2e3b04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 21));
label_2e3b08:
    // 0x2e3b08: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2e3b08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e3b0c:
    // 0x2e3b0c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2e3b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e3b10: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2e3b10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e3b14: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2e3b14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e3b18: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2e3b18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e3b1c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e3b1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e3b20: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2e3b20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e3b24: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2e3b24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e3b28: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2e3b28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3b2c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2e3b2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3b34: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B34u;
        // 0x2e3b38: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3B3Cu;
    // 0x2e3b3c: 0x0  nop
    ctx->pc = 0x2e3b3cu;
    // NOP
    ctx->pc = 0x2e3b40u;
}
