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

// Function: sub_001A0AB8
// Address: 0x1a0ab8 - 0x1a0ba0
void sub_001A0AB8_0x1a0ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0AB8_0x1a0ab8");
#endif

    switch (ctx->pc) {
        case 0x1a0b08u: goto label_1a0b08;
        case 0x1a0b70u: goto label_1a0b70;
        default: break;
    }

    ctx->pc = 0x1a0ab8u;

    // 0x1a0ab8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1a0ab8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0abc: 0x8d22083c  lw          $v0, 0x83C($t1)
    ctx->pc = 0x1a0abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 2108)));
    // 0x1a0ac0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1a0ac0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1a0ac4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a0ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a0ac8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1A0AC8u;
    {
        const bool branch_taken_0x1a0ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AC8u;
        // 0x1a0acc: 0x24030098  addiu       $v1, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ac8) {
            ctx->pc = 0x1A0B94u;
            goto label_1a0b94;
        }
    }
    ctx->pc = 0x1A0AD0u;
    // 0x1a0ad0: 0x8d25080c  lw          $a1, 0x80C($t1)
    ctx->pc = 0x1a0ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 2060)));
    // 0x1a0ad4: 0x8d260804  lw          $a2, 0x804($t1)
    ctx->pc = 0x1a0ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 2052)));
    // 0x1a0ad8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a0ad8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0adc: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1a0adcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a0ae0: 0xc5200814  lwc1        $f0, 0x814($t1)
    ctx->pc = 0x1a0ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 2068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0ae4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1a0ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a0ae8: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1a0ae8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0aec: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x1a0aecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0af0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a0af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a0af4: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1a0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x1a0af8: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A0AF8u;
    {
        const bool branch_taken_0x1a0af8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1A0AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AF8u;
        // 0x1a0afc: 0x46006040  add.s       $f1, $f12, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0af8) {
            ctx->pc = 0x1A0B6Cu;
            goto label_1a0b6c;
        }
    }
    ctx->pc = 0x1A0B00u;
    // 0x1a0b00: 0x240b0098  addiu       $t3, $zero, 0x98
    ctx->pc = 0x1a0b00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1a0b04: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a0b04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0b08:
    // 0x1a0b08: 0xab2018  mult        $a0, $a1, $t3
    ctx->pc = 0x1a0b08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a0b0c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1a0b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a0b10: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x1a0b10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b14: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a0b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a0b18: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x1a0b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1a0b1c: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x1a0b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1a0b20: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1a0b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0b24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a0b24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0b28: 0x0  nop
    ctx->pc = 0x1a0b28u;
    // NOP
    // 0x1a0b2c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0B2Cu;
    {
        const bool branch_taken_0x1a0b2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B2Cu;
        // 0x1a0b30: 0x1a0282d  daddu       $a1, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0b2c) {
            ctx->pc = 0x1A0B48u;
            goto label_1a0b48;
        }
    }
    ctx->pc = 0x1A0B34u;
    // 0x1a0b34: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a0b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0b38: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1a0b38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0b3c: 0x0  nop
    ctx->pc = 0x1a0b3cu;
    // NOP
    // 0x1a0b40: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x1A0B40u;
    {
        const bool branch_taken_0x1a0b40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a0b40) {
            ctx->pc = 0x1A0B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0B40u;
            // 0x1a0b44: 0xad280830  sw          $t0, 0x830($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 2096), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0B80u;
            goto label_1a0b80;
        }
    }
    ctx->pc = 0x1A0B48u;
label_1a0b48:
    // 0x1a0b48: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x1a0b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b4c: 0xab1018  mult        $v0, $a1, $t3
    ctx->pc = 0x1a0b4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a0b50: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1a0b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a0b54: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1a0b54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a0b58: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a0b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a0b5c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1a0b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1a0b60: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x1a0b60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a0b64: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1A0B64u;
    {
        const bool branch_taken_0x1a0b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B64u;
        // 0x1a0b68: 0x24ea000c  addiu       $t2, $a3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0b64) {
            ctx->pc = 0x1A0B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0b08;
        }
    }
    ctx->pc = 0x1A0B6Cu;
label_1a0b6c:
    // 0x1a0b6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a0b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0b70:
    // 0x1a0b70: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A0B70u;
    {
        const bool branch_taken_0x1a0b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0b70) {
            ctx->pc = 0x1A0B94u;
            goto label_1a0b94;
        }
    }
    ctx->pc = 0x1A0B78u;
    // 0x1a0b78: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B78u;
        // 0x1a0b7c: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0B80u;
label_1a0b80:
    // 0x1a0b80: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1a0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a0b84: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a0b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a0b88: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x1a0b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1a0b8c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A0B8Cu;
    {
        const bool branch_taken_0x1a0b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B8Cu;
        // 0x1a0b90: 0x6a1021  addu        $v0, $v1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0b8c) {
            ctx->pc = 0x1A0B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0b70;
        }
    }
    ctx->pc = 0x1A0B94u;
label_1a0b94:
    // 0x1a0b94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a0b94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0b98: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0BA0u;
}
