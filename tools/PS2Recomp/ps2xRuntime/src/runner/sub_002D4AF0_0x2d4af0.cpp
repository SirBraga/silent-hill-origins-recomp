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

// Function: sub_002D4AF0
// Address: 0x2d4af0 - 0x2d4be8
void sub_002D4AF0_0x2d4af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4AF0_0x2d4af0");
#endif

    ctx->pc = 0x2d4af0u;

    // 0x2d4af0: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x2d4af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2d4af4: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2d4af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2d4af8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d4af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d4afc: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D4AFCu;
    {
        const bool branch_taken_0x2d4afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4AFCu;
        // 0x2d4b00: 0x27bdffc0  addiu       $sp, $sp, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4afc) {
            ctx->pc = 0x2D4B6Cu;
            goto label_2d4b6c;
        }
    }
    ctx->pc = 0x2D4B04u;
    // 0x2d4b04: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2d4b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d4b08: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2d4b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2d4b0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d4b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d4b10: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D4B10u;
    {
        const bool branch_taken_0x2d4b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4b10) {
            ctx->pc = 0x2D4B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4B10u;
            // 0x2d4b14: 0x8c82005c  lw          $v0, 0x5C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4B70u;
            goto label_2d4b70;
        }
    }
    ctx->pc = 0x2D4B18u;
    // 0x2d4b18: 0x50a00014  beql        $a1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D4B18u;
    {
        const bool branch_taken_0x2d4b18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4b18) {
            ctx->pc = 0x2D4B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4B18u;
            // 0x2d4b1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4B6Cu;
            goto label_2d4b6c;
        }
    }
    ctx->pc = 0x2D4B20u;
    // 0x2d4b20: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2d4b20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4b24: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x2d4b24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d4b28: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x2d4b28u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2d4b2c: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x2d4b2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2d4b30: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x2d4b30u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4b34: 0xd8a60010  lqc2        $vf6, 0x10($a1)
    ctx->pc = 0x2d4b34u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d4b38: 0xd8a70020  lqc2        $vf7, 0x20($a1)
    ctx->pc = 0x2d4b38u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2d4b3c: 0xd8a80030  lqc2        $vf8, 0x30($a1)
    ctx->pc = 0x2d4b3cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2d4b40: 0x4a007378  vcallms     0xE68
    ctx->pc = 0x2d4b40u;
    {     ctx->vu0_tpc = 0xE68;     runtime->executeVU0Microprogram(rdram, ctx, 0xE68); }
    // 0x2d4b44: 0x9c88000c  lwu         $t0, 0xC($a0)
    ctx->pc = 0x2d4b44u;
    SET_GPR_ZE32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d4b48: 0x9ca9000c  lwu         $t1, 0xC($a1)
    ctx->pc = 0x2d4b48u;
    SET_GPR_ZE32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2d4b4c: 0x1095024  and         $t2, $t0, $t1
    ctx->pc = 0x2d4b4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x2d4b50: 0xafaa000c  sw          $t2, 0xC($sp)
    ctx->pc = 0x2d4b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    // 0x2d4b54: 0x4a0002ff  vnop
    ctx->pc = 0x2d4b54u;
    // NOP operation, no action needed for VU0
    // 0x2d4b58: 0xfba90000  sqc2        $vf9, 0x0($sp)
    ctx->pc = 0x2d4b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x2d4b5c: 0xfbaa0010  sqc2        $vf10, 0x10($sp)
    ctx->pc = 0x2d4b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x2d4b60: 0xfbab0020  sqc2        $vf11, 0x20($sp)
    ctx->pc = 0x2d4b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x2d4b64: 0xfbac0030  sqc2        $vf12, 0x30($sp)
    ctx->pc = 0x2d4b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x2d4b68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d4b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d4b6c:
    // 0x2d4b6c: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2d4b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_2d4b70:
    // 0x2d4b70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d4b70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4b74: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2d4b74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4b78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4B78u;
    {
        const bool branch_taken_0x2d4b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4b78) {
            ctx->pc = 0x2D4B88u;
            goto label_2d4b88;
        }
    }
    ctx->pc = 0x2D4B80u;
    // 0x2d4b80: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D4B80u;
    {
        const bool branch_taken_0x2d4b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4B80u;
        // 0x2d4b84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4b80) {
            ctx->pc = 0x2D4BE0u;
            goto label_2d4be0;
        }
    }
    ctx->pc = 0x2D4B88u;
label_2d4b88:
    // 0x2d4b88: 0x48c21000  ctc2.ni     $v0, $vi2
    ctx->pc = 0x2d4b88u;
    ctx->vi[2] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x2d4b8c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2d4b8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d4b90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d4b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d4b94: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4B94u;
    {
        const bool branch_taken_0x2d4b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D4B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4B94u;
        // 0x2d4b98: 0x24820040  addiu       $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4b94) {
            ctx->pc = 0x2D4BA8u;
            goto label_2d4ba8;
        }
    }
    ctx->pc = 0x2D4B9Cu;
    // 0x2d4b9c: 0xd8470000  lqc2        $vf7, 0x0($v0)
    ctx->pc = 0x2d4b9cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4ba0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4BA0u;
    {
        const bool branch_taken_0x2d4ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4BA0u;
        // 0x2d4ba4: 0x24a40010  addiu       $a0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4ba0) {
            ctx->pc = 0x2D4BB4u;
            goto label_2d4bb4;
        }
    }
    ctx->pc = 0x2D4BA8u;
label_2d4ba8:
    // 0x2d4ba8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d4ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4bac: 0x4be001ec  vsub.xyzw   $vf7, $vf0, $vf0
    ctx->pc = 0x2d4bacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2d4bb0: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x2d4bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_2d4bb4:
    // 0x2d4bb4: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x2d4bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2d4bb8: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x2d4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2d4bbc: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x2d4bbcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4bc0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2d4bc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4bc4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2d4bc4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d4bc8: 0xd8460000  lqc2        $vf6, 0x0($v0)
    ctx->pc = 0x2d4bc8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4bcc: 0x4a006eb8  vcallms     0xDD0
    ctx->pc = 0x2d4bccu;
    {     ctx->vu0_tpc = 0xDD0;     runtime->executeVU0Microprogram(rdram, ctx, 0xDD0); }
    // 0x2d4bd0: 0x4a0002ff  vnop
    ctx->pc = 0x2d4bd0u;
    // NOP operation, no action needed for VU0
    // 0x2d4bd4: 0xf8e20000  sqc2        $vf2, 0x0($a3)
    ctx->pc = 0x2d4bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2d4bd8: 0xf8e10010  sqc2        $vf1, 0x10($a3)
    ctx->pc = 0x2d4bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d4bdc: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2d4bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d4be0:
    // 0x2d4be0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4BE0u;
        // 0x2d4be4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4BE8u;
}
